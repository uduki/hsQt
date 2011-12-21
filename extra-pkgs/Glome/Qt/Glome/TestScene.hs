{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : TestScene.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.TestScene (scn) where
import Qt.Glome.Scene
import Qt.Glome.SolidTexture
import Data.List hiding (group)
import System.Random

lights = [Light (Vec (-100) 70 (140)) (cscale (Color 1 0.8 0.8) 2500),
          Light (Vec (-3) 5 8) (Color 1.5 2 2)] 


{-
lights_cs = let s65 = (sin (pi/6)) * 5000
                c65 = (cos (pi/6)) * 5000
            in
            [Light (Vec (-c65) 5000 (-s65)) (cscale (Color 1 0.3 0.3) 5000000),
             Light (Vec c65 5000 (-s65)) (cscale (Color 0.3 1 0.3) 5000000), 
             Light (Vec 0 5000 5000) (cscale (Color 0.3 0.3 1) 5000000)]
-}

lights_cs = let d2s = 5000000
                s65 = (sin (pi/6)) * d2s
                c65 = (cos (pi/6)) * d2s
                mag = d2s * 1000000
            in
            [Light (Vec (-c65) d2s (-s65)) (cscale (Color 1 0.3 0.3) mag),
             Light (Vec c65 d2s (-s65)) (cscale (Color 0.3 1 0.3) mag), 
             Light (Vec 0 d2s d2s) (cscale (Color 0.3 0.3 1) mag)]

lattice
  = let n = 15 :: Flt
    in bih [sphere (vec x y z) 0.2 | x <- [(-n)..n],
                                     y <- [(-n)..n],
                                     z <- [(-n)..n]]

icosahedron pos r = 
 let gr = ((1+(sqrt 5))/2) -- golden ratio, 1.618033988749895
     n11 = [(-r),r]
     ngrgr = [(-gr)*r,gr*r]
     grrcp = [((-r)/gr),(r/gr)]
     points = [Vec x y z | x <- n11,
                           y <- n11,
                           z <- n11 ] ++
              [Vec 0 y z | y <- grrcp,
                           z <- ngrgr ] ++
              [Vec x y 0 | x <- grrcp,
                           y <- ngrgr] ++
              [Vec x 0 z | x <- ngrgr,
                           z <- grrcp]
     pln x = (plane_offset (vnorm x) (r+(vdot (vnorm x) pos)))
 in
  intersection ((sphere pos (1.26*r)):(map pln points))

dodecahedron pos r =
 let gr = (1+(sqrt 5))/2 -- golden ratio, 1.618033988749895
     n11 = [(-r),r]
     ngrgr = [(-gr)*r,gr*r]
     points = [Vec 0 y z | y <- n11, z <- ngrgr] ++
              [Vec x 0 z | z <- n11, x <- ngrgr] ++
              [Vec x y 0 | x <- n11, y <- ngrgr]
     pln x = (plane_offset (vnorm x) (r+(vdot (vnorm x) pos)))
 in
  intersection ((sphere pos (1.26*r)):(map pln points))

spiral = [ ((Vec ((sin (rot n))*n) 
                 ((cos (rot n))*n) 
                 (n-3)), (n/15)) | n <- [0, 0.01..6]]
                               

coil = bih (zipWith (\ (p1,r1) (p2,r2) -> (group [(cone p1 r1 p2 r2), 
                                                  (sphere p1 r1)] )) 
                    spiral 
                    (tail spiral))


oak :: Flt -> StdGen -> SolidItem
oak age rng = 
 if age < 0 
 then nothing
 else 
  let year :: Int   = floor age
      season = age-(fromIntegral year)
      thickness = 0.03
      minbranch = deg 10
      maxbranch = deg 25
      tree 0 r _ _ _ = (0, nothing)
      tree 1 r bc on fn
        = -- cone (Vec 0 0 0) thickness (Vec 0 season 0) 0
          if ((bc > 525) && (bc < 527))
            then (1, tex (sphere (Vec 0 0 0.5) (1.5 * season)) (t_apple (Color 1 0 0)))
            else (1, tex (sphere (Vec 0 0 0) season) (t_matte (Color 0.2 1 0.4)))
      tree n_ r bc on fn
        = let nf = fromIntegral n_ 
              height_ = nf
              (rng1,rng2) = split r
              (rng3,rng4) = split rng1
              (r1,rng5)   = randomR (0,0.5) rng4
              (r2,rng6)   = randomR (minbranch,maxbranch) rng5
              (r3,rng7)   = randomR (0.8,0.95) rng6
              (r4,rng8)   = randomR (0.0,1.0) rng7
              seglen      = 0.5 + r1
              branchang   = r2
              scaling     = r3
              (height,n)  = if r4 > (1 :: Float)
                              then ((height_/2),(ceiling (nf/2)))
                              else (height_, n_)
                     
                 -- we make our own manual bounding heirarchy
                 -- (bih doesn't know what to do with heirachies
                 -- of transformed objects)
              (tc1, to1) = tree (n-1) rng2 bc on fn
              (tc2, to2) = tree (n-1) rng3 (bc + tc1) on fn
              in (tc1 + tc2,
                  (bound_object
                     (sphere (Vec 0 (height/2) 0) (height/2))
                     (group [cone (Vec 0 0 0)
                                  (thickness*height)
                                  (Vec 0 seglen 0)
                                  (thickness*(height-1)*scaling),
                             transform to1 [(scale (Vec scaling scaling scaling)),
                                            (rotate (Vec 0 0 1) branchang),
                                            (rotate (Vec 0 1 0) (deg 30)),
                                            (translate (Vec 0 seglen 0))],
                             transform to2 [(scale (Vec scaling scaling scaling)),
                                            (rotate (Vec 0 0 1) (-branchang)),
                                            (rotate (Vec 0 1 0) (deg 30)),
                                            (translate (Vec 0 seglen 0))]])))
      (tc, to) = tree year rng 0 year 0
  in tex (bih (tolist (SolidItem (flatten_transform to)))) (t_matte (Color 0.8 0.5 0.4)) 

sphereint = intersection [ (sphere (Vec (-1) 0 0) 2), 
                           (sphere (Vec 1 0 0) 2),
                           (sphere (Vec 0 (-1) 0) 2),
                           (sphere (Vec 0 1 0) 2) ]

md_cs = 5000
sr_cs = 2
sin60 = sin (pi/6)
cos60 = cos (pi/6)
ccd = 6
ccb = 2
cct = ccb + ccd
ccsin60 = sin60 * ccd
cccos60 = cos60 * ccd

sxf = cccos60+md_cs
shf = (md_cs*0.5)+cct+sr_cs
syf = ccsin60+md_cs
sm = md_cs * md_cs
syfb = (sqrt (sm * 2)) / md_cs
chf t
 | t > (md_cs - 100) = (md_cs - t)/100
 | t > (md_cs - 1000) && t <= (md_cs - 100) = 1 - (0.5 * ((md_cs - t - 100)/900))
 | otherwise = 1
geom_cs t 
  = group [
      tex (sphere (Vec (t-sxf) (Prelude.abs ((t*0.5)-shf)) (t-syf)) sr_cs) t_mirror2,
      tex (sphere (Vec (sxf-t) (Prelude.abs ((t*0.5)-shf)) (t-syf)) sr_cs) t_mirror2,
      tex (sphere (Vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) sr_cs) t_mirror2,
      tex (plane (Vec 0 0 0) (Vec 0 1 0)) t_mottled3,
      tex (box (Vec (-15000) 0 (-15000)) (Vec 30000 1 30000)) t_mottled2,
      tex (box (Vec (-20000) 0 (-20000)) (Vec 40000 0.5 40000)) (t_mottled4 0.00045),
      tex (box (Vec (-35000) 0 (-35000)) (Vec 70000 0.25 70000)) (t_mottled4 0.0001),
      tex (cylinder (Vec 0 0 0) (Vec 0 2 0) 1600)
          t_shiny_white,
      bih [
        tex (difference (sphere (Vec 0 (-104) 0) 120)
                        (sphere (Vec 0 90 0) 100))
            t_shiny_white,
        tex (difference (sphere (Vec 0 (-208) 0) 240)
                        (sphere (Vec 0 180 0) 200))
            t_shiny_white,
        tex (difference (sphere (Vec 0 (-416) 0) 480)
                        (sphere (Vec 0 360 0) 400))
            t_shiny_white,
        tex (difference (sphere (Vec 0 (-832) 0) 960)
                        (sphere (Vec 0 720 0) 800))
            t_shiny_white,
        tex (difference (sphere (Vec 0 (-1664) 0) 1920)
                        (sphere (Vec 0 1440 0) 1600))
            t_shiny_white,
        tex (cone (Vec 0 0 0) 45 (Vec 0 2.1 0) 43)
            t_mirror,
        tex (cone (Vec 0 0 0) 37 (Vec 0 2.6 0) 35)
            t_mirror,
        tex (cone (Vec 0 0 0) 20 (Vec 0 3.1 0) 18)
            t_mirror,
        tex (cone (Vec 0 1 0) 0.25 (Vec 0 50 0) 0)
            t_mirror,
        tex (cone (Vec (-cccos60) ccb (-ccsin60)) ccb (Vec (-cccos60) cct (-ccsin60)) 0)
            (t_matte (Color 1 0 0)),
        tex (cone (Vec cccos60 ccb (-ccsin60)) ccb (Vec cccos60 cct (-ccsin60)) 0)
            (t_matte (Color 0 1 0)),
        tex (cone (Vec 0 ccb ccd) ccb (Vec 0 cct ccd) 0)
            (t_matte (Color 0 0 1)),
        tex (cylinder (Vec 0 2 (-17)) (Vec 0 25 (-17)) 0.5)
            (t_matte (Color 0 0 1)),
        tex (cylinder (Vec (-(cos60 * 17)) 2 (sin60 * 17)) (Vec (-(cos60 * 17)) 25 (sin60 * 17)) 0.5)
            (t_matte (Color 0 1 0)),
        tex (cylinder (Vec (cos60 * 17) 2 (sin60 * 17)) (Vec (cos60 * 17) 25 (sin60 * 17)) 0.5)
            (t_matte (Color 1 0 0)),
        tex (cone (Vec 0 24.5 0) 18.1 (Vec 0 25.5 0) 17.6)
            t_shiny_white]]

geom = group [tex (plane (Vec 0 0 0) (Vec 0 1 0)) (t_matte (Color 0 0.8 0.3)),
              bih [
                   transform (oak 11.6 (mkStdGen 42)) [scale (Vec 1.5 1.5 1.5)],
                   tex (difference (sphere (Vec 0 (-4) 5) 4.7)
                                   (sphere (Vec 1.5 1.5 5.2) 1.6))
                       t_mirror]]

geom1 = group [ (box (Vec (-1) (-1) (-1)) (Vec 1 1 1)),
               (group [ (sphere (Vec 2 3 0) 1), 
                        (sphere (Vec (-3) (4) 1) 0.8) ]) ]

cust_cam _ = camera (vec (-2) (5.3) (20)) (vec 0 5 0) (vec 0 1 0) 45
cust_cam_cs t
 = camera (vec (t-sxf-7.5) (Prelude.abs ((t*0.5)-shf-(3 * (chf t)))) (t-syf-4)) (vec (-cccos60) (cct + (sr_cs/2)) (-ccsin60)) (vec 0 1 0) 45
cust_cam_cs_01
 = camera (vec (0-sxf-11) (Prelude.abs (0-shf)) (0-syf)) (vec (-cccos60) (cct + (sr_cs/2)) (-ccsin60)) (vec 0 1 0) 45
cust_cam_cs_02 t
 = camera (vec (sxf-2150-15) (Prelude.abs ((2150*0.5)-shf)) (2150-syf)) (vec (sxf-t) (Prelude.abs ((t*0.5)-shf)) (t-syf)) (vec 0 1 0) 45
cust_cam_cs_03 t
 = camera (vec (-9) (Prelude.abs ((3150*0.5)-shf)) (ccd + ((md_cs-3150)*syfb))) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cc_cs_03_at t = (t-3325) * (1.5 * ((t - 3325)/100))
cust_cam_cs_03a t
 = camera (vec (-9) (Prelude.abs (((3150+(cc_cs_03_at t))*0.5)-shf)) (ccd + ((md_cs-3150-(cc_cs_03_at t))*syfb))) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cc_cs_03_at2 t = (t-3425) * 1.5
cust_cam_cs_03a2 t
 = camera (vec (-9) (Prelude.abs (((3150+(cc_cs_03_at 3425)+(cc_cs_03_at2 t))*0.5)-shf)) (ccd + ((md_cs-3150-(cc_cs_03_at 3425)-(cc_cs_03_at2 t))*syfb))) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cahf t = (t + 2 + (((3150+(cc_cs_03_at 3425)+(cc_cs_03_at2 t))-(t+2)) * ((4063-t)/500)))*0.5
cadf t = (t+3) + (((3150+(cc_cs_03_at 3425)+(cc_cs_03_at2 t))-(t+3)) * ((4063-t)/500))
calh t = -9 + (4 * ((t-3563)/500))
cust_cam_cs_03a3 t
 = camera (vec (calh t) (Prelude.abs ((cahf t)-shf)) (ccd + ((md_cs-(cadf t))*syfb))) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cust_cam_cs_03a4 t
 = camera (vec (-5) (Prelude.abs (((t+2)*0.5)-shf)) (ccd + ((md_cs-(t+3))*syfb))) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cust_cam_cs_03a5 t
 = camera (vec (-5) (Prelude.abs (((t+2)*0.5)-shf)) (ccd + ((md_cs-(t+3))*syfb))) (vec 0 (cct + sr_cs) ccd) (vec 0 1 0) 45
cust_cam_cs_03a6 t
 = camera (vec (-5) (Prelude.abs (((t+2)*0.5)-shf)) (ccd + ((md_cs-(t+3))*syfb))) (vec 0 (cct + sr_cs + 100) (ccd + ((md_cs-(t+3))*syfb))) (vec 0 1 0) 45
cust_cam_cs_b0
 = camera (vec (-10) 40 (-60)) (vec 0 6 0) (vec 0 1 0) 45
cust_cam_cs_b1 t
 = camera (vec (-20) 30 (-120)) (vec 0 (Prelude.abs ((t*0.5)-shf)) (ccd + ((md_cs-t)*syfb))) (vec 0 1 0) 45
cust_cam_cs_b2
 = camera (vec (-50) 20 (-200)) (vec 0 150 (500*syfb)) (vec 0 1 0) 20
cust_cam_cs_04 t
 = camera (vec (sxf-t+2) (Prelude.abs ((t*0.5)-shf-3)) (t-syf-6)) (vec (cccos60) (cct + (sr_cs/2)) (-ccsin60)) (vec 0 1 0) 45

m_shiny_white :: Material
m_shiny_white = (Material (Color 1 1 1) 0.1 0 0 1 2)

t_shiny_white :: Texture
t_shiny_white ri = m_shiny_white

m_shiny_dark :: Material
m_shiny_dark = (Material (Color 0.1 0.1 0.1) 0.1 0 0 0.7 10)

t_shiny_dark :: Texture
t_shiny_dark ri = m_shiny_dark

m_dull_gray :: Material
m_dull_gray = (Material (Color 0.4 0.3 0.35) 0 0 0 0.2 1)

t_mottled4 c (RayHit _ pos norm _) =
 let scale = perlin (vscale pos c)
 in if scale < 0 then error "foo"
    else if scale > 1 
         then error "bar"
         else m_interp m_shiny_white (m_matte (Color 0.1 0.1 0.1)) scale

t_mottled4 c RayMiss = m_shiny_white

t_mottled3 (RayHit _ pos norm _) =
 let scale = perlin (vscale pos 0.000009)
 in if scale < 0 then error "foo"
    else if scale > 1 
         then error "bar"
         else m_interp m_shiny_white (m_matte (Color 0.1 0.1 0.1)) scale

t_mottled3 RayMiss = m_shiny_white

t_mottled2 (RayHit _ pos norm _) =
 let scale = perlin (vscale pos 0.0009)
 in if scale < 0 then error "foo"
    else if scale > 1 
         then error "bar"
         else m_interp m_shiny_white (m_matte (Color 0.1 0.1 0.1)) scale

t_mottled2 RayMiss = m_shiny_white

t_mottled (RayHit _ pos norm _) =
 --let scale = (stripe (Vec 1 1 1) sine_wave) pos
 let scale = perlin (vscale pos 3)
 in if scale < 0 then error "foo"
    else if scale > 1 
         then error "bar"
         else m_interp m_mirror (m_matte (Color 0 0 1)) scale

t_mottled RayMiss = m_shiny_white

t_stripe (RayHit _ pos norm _) =
 let scale = (stripe (Vec 4 8 5) triangle_wave) pos
 in if scale < 0 then error "foo"
    else if scale > 1 
         then error "bar"
         else m_interp m_shiny_white m_dull_gray scale

t_stripe RayMiss = m_shiny_white 


m_matte c = (Material c 0 0 0 1 2)

t_matte c = 
 (\ri -> (Material c 0 0 0 1 2)) 

m_mirror = (Material (Color 1 1 1) 0.3 0 0 0 10)
t_mirror = 
 (\ri -> m_mirror)

m_mirror2 = (Material (Color 0.9 0.9 1) 0.975 0 0 0.2 1000)
t_mirror2 = 
 (\ri -> m_mirror2)

m_apple c = (Material c 1 0 0 0.2 1000)
t_apple c = 
 (\ri -> m_apple c)

c_sky = (Color 0.4 0.5 0.8)

scn :: Int -> Int -> Int -> Flt -> IO Scene
scn sn b e t
  = return $
      case sn of
       1 -> (Scene
             geom
             lights
             (cust_cam t)
             (t_matte (Color 0.8 0.5 0.4)) 
             c_sky)
       2 -> (Scene
             (geom_cs t)
             lights_cs
             (cust_cam_cs_b1 t)
             (t_matte (Color 0.8 0.5 0.4)) 
             c_sky)

