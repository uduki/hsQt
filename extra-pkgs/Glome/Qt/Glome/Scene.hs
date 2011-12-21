{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Scene.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Scene (
  Scene(Scene), Light(Light), Camera(Camera)
  , scene, camera, light
  , sld, lits, cam, dtex, bground
  , primcount_scene
  , module Qt.Glome.Clr
  , module Qt.Glome.Vec
  , module Qt.Glome.Solid
  , module Qt.Glome.Sphere
  , module Qt.Glome.Triangle
  , module Qt.Glome.Bih
  , module Qt.Glome.Csg
  , module Qt.Glome.Plane
  , module Qt.Glome.Box
  , module Qt.Glome.Bound
  , module Qt.Glome.Cone
  , module Qt.Glome.Tex
  ) where

import Qt.Glome.Clr
import Qt.Glome.Vec
import Qt.Glome.Solid
import Qt.Glome.Sphere
import Qt.Glome.Triangle
import Qt.Glome.Bih
import Qt.Glome.Csg
import Qt.Glome.Plane
import Qt.Glome.Box
import Qt.Glome.Bound
import Qt.Glome.Cone
import Qt.Glome.Tex


data Light = Light {litpos :: !Vec,
                    litcol :: !Color} deriving Show

light :: Vec -> Color -> Light
light pos clr = Light pos clr

data Camera = Camera {campos, fwd, up, right :: !Vec} 
              deriving Show

default_cam = (Camera (vec 0.0 0.0 (-3.0)) 
                      (vec 0.0 0.0 1.0) 
                      (vec 0.0 1.0 0.0) 
                      (vec 1.0 0.0 0.0) )

camera :: Vec -> Vec -> Vec -> Flt -> Camera
camera pos at up angle =
 let fwd   = vnorm $ vsub at pos
     right = vnorm $ vcross up fwd
     up_   = vnorm $ vcross fwd right
     cam_scale = tan ((pi/180)*(angle/2))
 in
  Camera pos fwd
         (vscale up_ cam_scale) 
         (vscale right cam_scale)

data Scene = Scene {sld     :: SolidItem,
                    lits    :: [Light], 
                    cam     :: Camera, 
                    dtex    :: Texture, 
                    bground :: Color} deriving Show

scene :: SolidItem -> [Light] -> Camera -> Texture -> Color -> Scene
scene s l cam t clr = Scene s l cam t clr

primcount_scene :: Scene -> Pcount
primcount_scene (Scene sld _ _ _ _) = primcount sld

