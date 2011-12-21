{-# OPTIONS_GHC -fexcess-precision -XBangPatterns#-}
-----------------------------------------------------------------------------
{-| Module    : Vec.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------


module Qt.Glome.Vec where

type Flt = Double

sane_mod :: Int -> Int -> Int
sane_mod a b =
 let modres = mod a b in
  if modres < 0 
  then modres + b
  else modres

infinity :: Flt
infinity = 1000000.0

deg :: Flt -> Flt
deg !x = (x*3.1415926535897)/180

rad :: Flt -> Flt
rad !x = x

rot :: Flt -> Flt
rot !x = x*3.1415926535897*2

{-abs_sub :: Flt -> Flt -> Flt
abs_sub a b =
 if a > 0.0
 then 
  if b < a 
  then a-b
  else 0.0
 else
  if b < (-a)
  then a+b
  else 0.0
-}

clamp :: Flt -> Flt -> Flt -> Flt
clamp !min !x !max
 | x < min = min
 | x > max = max
 | otherwise = x

delta = 0.0001 :: Flt

fmin :: Flt -> Flt -> Flt
fmin !a !b = if a > b then b else a

fmax :: Flt -> Flt -> Flt
fmax !a !b = if a > b then a else b

fmin3 :: Flt -> Flt -> Flt -> Flt
fmin3 !a !b !c = if a > b 
                 then if b > c 
                      then c
                      else b
                 else if a > c
                      then c
                      else a

fmax3 :: Flt -> Flt -> Flt -> Flt
fmax3 !a !b !c = if a > b
                 then if a > c
                      then a
                      else c
                 else if b > c
                      then b
                      else c

fmin4 :: Flt -> Flt -> Flt -> Flt -> Flt
fmin4 !a !b !c !d = fmin (fmin a b) (fmin c d)

fmax4 :: Flt -> Flt -> Flt -> Flt -> Flt
fmax4 !a !b !c !d = fmax (fmax a b) (fmax c d)

fabs :: Flt -> Flt
fabs !a = 
 if a < 0 then (-a) else a

iabs :: Int -> Int
iabs !a =
 if a < 0 then (-a) else a

abs a = error "use non-polymorphic version, fabs"

about_equal :: Flt -> Flt -> Bool
about_equal !a !b =
 if a > 1 
 then
  fabs (1 - (a/b)) < (delta*10) 
 else
  (fabs $ a - b) < (delta*10)


data Vec = Vec {x, y, z :: !Flt} deriving Show
data Ray = Ray {origin, dir :: !Vec} deriving Show

vec !x !y !z = (Vec x y z)
vzero = Vec 0.0 0.0 0.0

vunit = vx

vx  = Vec 1 0 0
vy  = Vec 0 1 0
vz  = Vec 0 0 1
nvx = Vec (-1) 0 0
nvy = Vec 0 (-1) 0
nvz = Vec 0 0 (-1)

va :: Vec -> Int -> Flt
va !(Vec x y z) !n = 
 case n of
  0 -> x
  1 -> y
  2 -> z

vset :: Vec -> Int -> Flt -> Vec
vset !(Vec x y z) !i !f =
 case i of
  0 -> Vec f y z
  1 -> Vec x f z
  2 -> Vec x y f

vdot :: Vec -> Vec -> Flt
vdot !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 (x1*x2)+(y1*y2)+(z1*z2)

vcross :: Vec -> Vec -> Vec
vcross !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec 
  ((y1 * z2) - (z1 * y2))
  ((z1 * x2) - (x1 * z2))
  ((x1 * y2) - (y1 * x2))

vmap :: (Flt -> Flt) -> Vec -> Vec
vmap f !v1 = 
 Vec (f (x v1)) (f (y v1)) (f (z v1))

vmap2 :: (Flt -> Flt -> Flt) -> Vec -> Vec -> Vec
vmap2 f !v1 !v2 =
 Vec (f (x v1) (x v2)) 
     (f (y v1) (y v2)) 
     (f (z v1) (z v2))

vinvert :: Vec -> Vec
vinvert !(Vec x1 y1 z1) =
 Vec (-x1) (-y1) (-z1)

vlensqr :: Vec -> Flt
vlensqr !v1 = vdot v1 v1

vlen :: Vec -> Flt
vlen !v1 = sqrt (vdot v1 v1)

vadd :: Vec -> Vec -> Vec
vadd !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec (x1 + x2)
     (y1 + y2)
     (z1 + z2)

vadd3 :: Vec -> Vec -> Vec -> Vec
vadd3 !(Vec x1 y1 z1) !(Vec x2 y2 z2) !(Vec x3 y3 z3) =
    Vec (x1 + x2 + x3)
        (y1 + y2 + y3)
        (z1 + z2 + z3)

vsub :: Vec -> Vec -> Vec
vsub !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec (x1 - x2)
     (y1 - y2)
     (z1 - z2)

vmul :: Vec -> Vec -> Vec
vmul !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec (x1 * x2)
     (y1 * y2)
     (z1 * z2)

vinc :: Vec -> Flt -> Vec
vinc !(Vec x y z) !n =
 Vec (x + n)
     (y + n)
     (z + n)

vdec :: Vec -> Flt -> Vec
vdec !(Vec x y z) !n =
 Vec (x - n)
     (y - n)
     (z - n)

vmax :: Vec -> Vec -> Vec
vmax !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec (fmax x1 x2)
     (fmax y1 y2)
     (fmax z1 z2)

vmin :: Vec -> Vec -> Vec
vmin !(Vec x1 y1 z1) !(Vec x2 y2 z2) =
 Vec (fmin x1 x2)
     (fmin y1 y2)
     (fmin z1 z2)

vmaxaxis :: Vec -> Int
vmaxaxis !(Vec x y z) =
 if (x > y) 
 then if (x > z) 
      then 0
      else 2
 else if (y > z) 
      then 1
      else 2

vscale :: Vec -> Flt -> Vec
vscale !(Vec x y z) !fac =
 Vec (x * fac)
     (y * fac)
     (z * fac)

vscaleadd :: Vec -> Vec -> Flt -> Vec
vscaleadd !(Vec x1 y1 z1) !(Vec x2 y2 z2) fac =
 Vec (x1 + (x2 * fac))
     (y1 + (y2 * fac))
     (z1 + (z2 * fac))
            
vnorm :: Vec -> Vec
vnorm !(Vec x1 y1 z1) = 
 let invlen = 1.0 / (sqrt ((x1*x1)+(y1*y1)+(z1*z1))) in
 Vec (x1*invlen) (y1*invlen) (z1*invlen)

assert_norm :: Vec -> Vec
assert_norm v =
 let l = vdot v v
 in if l > (1+delta) 
    then error $ "vector too long" ++ (show v)
    else if l < (1-delta)
         then error $ "vector too short: " ++ (show v)
         else v

bisect :: Vec -> Vec -> Vec
bisect !v1 !v2 = vnorm (vadd v1 v2)

vdist :: Vec -> Vec -> Flt
vdist v1 v2 = 
 let d = vsub v2 v1 in vlen d

reflect :: Vec -> Vec -> Vec
reflect !v !norm =
  -- vadd v $ vscale norm $ (-2) * (vdot v norm)
  vscaleadd v norm $ (-2) * (vdot v norm)

vrcp :: Vec -> Vec
vrcp !(Vec x y z) =
 Vec (1/x) (1/y) (1/z)

veq :: Vec -> Vec -> Bool
veq !(Vec ax ay az) !(Vec bx by bz) =
 (about_equal ax bx) && (about_equal ay by) && (about_equal az bz)

veqsign :: Vec -> Vec -> Bool
veqsign !(Vec ax ay az) !(Vec bx by bz) =
 ax*bx > 0 && ay*by > 0 && az*bz > 0

ray_move :: Ray -> Flt -> Ray
ray_move !(Ray orig dir) !d =
 (Ray (vscaleadd orig dir d) dir)

orth :: Vec -> (Vec,Vec)
orth v1 =
 if about_equal (vdot v1 v1) 1
 then
  let x = (Vec 1 0 0)
      y = (Vec 0 1 0)
      dvx = vdot v1 x
      v2 = if dvx < 0.8 && dvx > (-0.8) -- don't want to cross with a
           then vnorm $ vcross v1 x     -- vector that's too similar
           else vnorm $ vcross v1 y
      v3 = vcross v1 v2
  in (v2,v3)
 else error $ "orth: unnormalized vector" ++ (show v1)

plane_int :: Ray -> Vec -> Vec -> Vec
plane_int !(Ray orig dir) !p !norm =
 let newo = vsub orig p
     dist = -(vdot norm newo) / (vdot norm dir)
 in vscaleadd orig dir dist

plane_int_dist :: Ray -> Vec -> Vec -> Flt
plane_int_dist !(Ray orig dir) !p !norm =
 let newo = vsub orig p
 in -(vdot norm newo) / (vdot norm dir)




data Matrix = Matrix !Flt !Flt !Flt !Flt  
                     !Flt !Flt !Flt !Flt  
                     !Flt !Flt !Flt !Flt deriving Show
data Xfm = Xfm !Matrix !Matrix deriving Show

ident_matrix = (Matrix 1 0 0 0  0 1 0 0  0 0 1 0)
ident_xfm = Xfm ident_matrix ident_matrix

mat_mult :: Matrix -> Matrix -> Matrix
mat_mult (Matrix a00 a01 a02 a03  a10 a11 a12 a13  a20 a21 a22 a23)
         (Matrix b00 b01 b02 b03  b10 b11 b12 b13  b20 b21 b22 b23) =
 Matrix
   (a00*b00 + a01*b10 + a02*b20)
   (a00*b01 + a01*b11 + a02*b21)
   (a00*b02 + a01*b12 + a02*b22)
   (a00*b03 + a01*b13 + a02*b23 + a03)

   (a10*b00 + a11*b10 + a12*b20)
   (a10*b01 + a11*b11 + a12*b21)
   (a10*b02 + a11*b12 + a12*b22)
   (a10*b03 + a11*b13 + a12*b23 + a13)

   (a20*b00 + a21*b10 + a22*b20)
   (a20*b01 + a21*b11 + a22*b21)
   (a20*b02 + a21*b12 + a22*b22)
   (a20*b03 + a21*b13 + a22*b23 + a23)

xfm_mult :: Xfm -> Xfm -> Xfm
xfm_mult (Xfm a inva) (Xfm b invb) =
 Xfm (mat_mult a b) (mat_mult invb inva)



compose :: [Xfm] -> Xfm
compose xfms = check_xfm $ foldr xfm_mult ident_xfm (reverse xfms)

check_xfm :: Xfm -> Xfm
check_xfm (Xfm m i) = 
 let (Matrix m00 m01 m02 m03  
             m10 m11 m12 m13  
             m20 m21 m22 m23) = mat_mult m i
     ae = about_equal
 in
  if ae m00 1 && ae m01 0 && ae m02 0 && ae m03 0 &&
     ae m10 0 && ae m11 1 && ae m12 0 && ae m13 0 &&
     ae m20 0 && ae m21 0 && ae m22 1 && ae m23 0
  then (Xfm m i)
  else error $ "corrupt matrix " ++ (show (Xfm m i)) ++ "\n" ++ (show (mat_mult m i)) 

vrotate :: Vec -> Ray -> Flt -> Vec
vrotate pt (Ray orig axis_) angle =
 let axis = assert_norm axis_
     transform = compose [ translate (vinvert orig)
                         , rotate axis angle
                         , translate orig
                         ]
     new_pt = xfm_point transform pt
 in if about_equal (vlen (vsub orig pt)) (vlen (vsub orig new_pt))
    then new_pt
    else error $ "something is wrong with vrotate" ++ 
                 (show $ vlen (vsub orig pt)) ++ " " ++ 
                 (show $ vlen (vsub orig new_pt))



xfm_point :: Xfm -> Vec -> Vec
xfm_point !(Xfm (Matrix m00 m01 m02 m03  
                        m10 m11 m12 m13  
                        m20 m21 m22 m23) inv) 
          !(Vec x y z) =
 Vec (m00*x + m01*y + m02*z + m03)
     (m10*x + m11*y + m12*z + m13)
     (m20*x + m21*y + m22*z + m23)

invxfm_point :: Xfm -> Vec -> Vec
invxfm_point !(Xfm fwd (Matrix i00 i01 i02 i03  
                               i10 i11 i12 i13  
                               i20 i21 i22 i23)) 
             !(Vec x y z) =
  Vec (i00*x + i01*y + i02*z + i03)
      (i10*x + i11*y + i12*z + i13)
      (i20*x + i21*y + i22*z + i23)

xfm_vec :: Xfm -> Vec -> Vec
xfm_vec !(Xfm (Matrix m00 m01 m02 m03  
                      m10 m11 m12 m13  
                      m20 m21 m22 m23) inv) 
        !(Vec x y z) =
 Vec (m00*x + m01*y + m02*z)
     (m10*x + m11*y + m12*z)
     (m20*x + m21*y + m22*z)

invxfm_vec :: Xfm -> Vec -> Vec
invxfm_vec !(Xfm fwd (Matrix i00 i01 i02 i03  
                             i10 i11 i12 i13  
                             i20 i21 i22 i23)) 
           !(Vec x y z) =
  Vec (i00*x + i01*y + i02*z)
      (i10*x + i11*y + i12*z)
      (i20*x + i21*y + i22*z)

invxfm_norm :: Xfm -> Vec -> Vec
invxfm_norm !(Xfm fwd (Matrix i00 i01 i02 i03  
                              i10 i11 i12 i13  
                              i20 i21 i22 i23)) 
            !(Vec x y z) =
 Vec (i00*x + i10*y + i20*z)
     (i01*x + i11*y + i21*z)
     (i02*x + i12*y + i22*z)

xfm_ray :: Xfm -> Ray -> Ray
xfm_ray !xfm !(Ray orig dir) =
 Ray (xfm_point xfm orig) (vnorm (xfm_vec xfm dir))

invxfm_ray !xfm !(Ray orig dir) =
 Ray (invxfm_point xfm orig) (vnorm (invxfm_vec xfm dir))

translate :: Vec -> Xfm
translate (Vec x y z) =
 check_xfm $ Xfm (Matrix 1 0 0   x   0 1 0   y   0 0 1   z) 
                 (Matrix 1 0 0 (-x)  0 1 0 (-y)  0 0 1 (-z))

scale :: Vec -> Xfm
scale (Vec x y z) =
 check_xfm $ Xfm (Matrix   x  0 0 0  0   y  0 0  0 0   z  0)
                (Matrix (1/x) 0 0 0  0 (1/y) 0 0  0 0 (1/z) 0)

rotate :: Vec -> Flt -> Xfm
rotate (Vec x y z) angle =
 if not $ (vlen (Vec x y z)) `about_equal` 1
 then error $ "please use a normalized vector for rotation: " ++ (show (vlen (Vec x y z)))
 else 
  let s = sin angle
      c = cos angle 

      m00 = ((x*x)+((1-(x*x))*c)) 
      m01 = (((x*y)*(1-c))-(z*s)) 
      m02 = ((x*z*(1-c))+(y*s))

      m10 = (((x*y)*(1-c))+(z*s))
      m11 = ((y*y)+((1-(y*y))*c))
      m12 = ((y*z*(1-c))-(x*s))

      m20 = ((x*z*(1-c))-(y*s))
      m21 = ((y*z*(1-c))+(x*s))
      m22 = ((z*z)+((1-(z*z))*c))
  in
  check_xfm $ Xfm (Matrix m00 m01 m02 0  m10 m11 m12 0  m20 m21 m22 0)
                  (Matrix m00 m10 m20 0  m01 m11 m21 0  m02 m12 m22 0)

xyz_to_uvw :: Vec -> Vec -> Vec -> Xfm
xyz_to_uvw u v w =
 let Vec ux uy uz = u
     Vec vx vy vz = v
     Vec wx wy wz = w
 in if (vdot u u) `about_equal` 1
    then
     if (vdot v v) `about_equal` 1
     then
      if (vdot w w) `about_equal` 1
      then 
       if ((vdot u v) `about_equal` 0) && 
          ((vdot u w) `about_equal` 0) && 
          ((vdot v w) `about_equal` 0)
       then
        check_xfm $ Xfm (Matrix ux vx wx 0  uy vy wy 0  uz vz wz 0)
                        (Matrix ux uy uz 0  vx vy vz 0  wx wy wz 0)
       else error  "vectors aren't orthogonal"
      else error $ "unnormalized w " ++ (show w)
     else error $ "unnormalized v " ++ (show v)
    else error $ "unnormalized u " ++ (show u)

uvw_to_xyz :: Vec -> Vec -> Vec -> Xfm
uvw_to_xyz (Vec ux uy uz) (Vec vx vy vz) (Vec wx wy wz) =
 check_xfm $ Xfm (Matrix ux uy uz 0  vx vy vz 0  wx wy wz 0)
                 (Matrix ux vx wx 0  uy vy wy 0  uz vz wz 0)
