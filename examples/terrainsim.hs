{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : terrainsim.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Enums.Classes.Core
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Opengl
import Qtc.ClassTypes.Opengl
import Qtc.ClassTypes.Gui
import Qtc.ClassTypes.Core
import Qtc.Enums.Base
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Enums.Core.QEvent
import Qtc.Enums.Gui.QSlider
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.Core.QIODevice
import Qtc.Core.QDataStream
import Qtc.Gui.Base
import Qtc.Core.QCoreApplication
import Qtc.Core.QEvent
import Qtc.Gui.QKeyEvent
import Qtc.Core.QSize
import Qtc.Core.QTime
import Qtc.Gui.QApplication
import Qtc.Gui.QLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QLabel
import Qtc.Gui.QWidget
import Qtc.Gui.QWidget_h
import Qtc.Gui.QColor
import Qtc.Gui.QMouseEvent
import Qtc.Gui.QAbstractSlider
import Qtc.Gui.QSlider
import Qtc.Gui.QFont
import Qtc.Opengl.QGLWidget
import Qtc.Opengl.QGLWidget_h
import Qtc.Opengl.QGLFormat
import Qtc.Enums.Opengl.QGL
import Data.IORef
import Data.List
import Data.Bits
import Array
import Graphics.Rendering.OpenGL as GL
import Char
import Foreign.Ptr
import Text.Printf
import Data.Array.IO
import Data.Array.Storable
import Graphics.Rendering.OpenGL.GLU.Mipmapping
import System.IO.Unsafe( unsafePerformIO )

glf x = realToFrac x :: GLfloat

my_PI = 3.14159265
hugeVal = 1.0e20
heightMnt = 450.0
lengthXmnt = 62.0
lengthYmnt = 62.0
stepXmnt = 96.0
stepYmnt = 96.0
tScale = 4
wdth = 640 :: Int
hght = 480 :: Int
obsStartX = 992.0
obsStartY = 103.0

color3f = GL.color :: Color3 GLfloat -> IO ()
color4f = GL.color :: Color4 GLfloat -> IO ()
texCoord2f = texCoord :: TexCoord2 GLfloat -> IO ()
vertex3f = vertex :: Vertex3 GLfloat -> IO ()
rectf = GL.rect :: Vertex2 GLfloat -> Vertex2 GLfloat -> IO ()

type MyQWidget = QWidgetSc (CMyQWidget)
data CMyQWidget = CMyQWidget

myQWidget :: IO (MyQWidget)
myQWidget = qSubClass (qWidget ())

type GLWidget = QGLWidgetSc (CGLWidget)
data CGLWidget = CGLWidget

gLWidget :: QGLFormat () -> IO (GLWidget)
gLWidget f = qSubClass (qGLWidget f)

usemax = 6

tex = 0
fgb = 1
cul = 2
fll = 3
pom = 4
hlp = 5
cnt = 6

use_io i bv = readArray bv i
use i bv = bv!i :: Bool
tog i bv = do tb <- readArray bv i; writeArray bv i (not tb)

ivmax = 6

window_width = 0
window_height = 1
tf = 2
frames = 3
tt = 4
cfl = 5
flmax = 6
dww = 7
dwh = 8

ivl_io i iv = readArray iv i
ivl i iv = iv!i :: Int
mod_ivl i iv x = writeArray iv i x
inc_ivl i iv x = do ti <- readArray iv i; writeArray iv i (ti + x)

fvmax = 4

alph = 0
beta = 1
v = 2
fdovw = 3
fps = 4

fvl_io i fv = readArray fv i
fvl i fv = fv!i :: Float
mod_fvl i fv x = writeArray fv i x
inc_fvl i fv x = do tf <- readArray fv i; writeArray fv i (tf + x)

data GV = GV_o (IOUArray Int Bool) (IOUArray Int Int) (IOUArray Int Float)
bv (GV_o b _ _) = b
iv (GV_o _ i _) = i
fv (GV_o _ _ f) = f

data ODV = ODV_o (Array Int GLfloat) (Array Int Float) (Array Int Float) (Array Int Float)
obs (ODV_o a _ _ _) = a
dir (ODV_o _ a _ _) = a
v1 (ODV_o _ _ a _) = a
v2 (ODV_o _ _ _ a) = a

data SV = SV_o GV (IORef ODV)
gv (SV_o g _) = g
odv (SV_o _ od) = od

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "terrainsim.rcc"
    let pw = 256
        ph = 256
        ps = pw * ph
    bvi <- newListArray (0,usemax) [True, True, True, False, False, True, True] :: IO (IOUArray Int Bool)
    ivi <- newListArray (0,ivmax) [pw, pw, -1, 0, -1, 500, 2000, pw, ph] :: IO (IOUArray Int Int)
    fvi <- newListArray (0,fvmax) [75.0, 90.0, 900.0, 85.0, 0.0] :: IO (IOUArray Int Float)
    let obs_init = array (0,2) (zip [0..2] [obsStartX, heightMnt * 1.3, obsStartY]) 
        dir_init = array (0,2) (zip [0..2] [0.0, 0.0, 0.0])
        v1_init = array (0,1) (zip [0..1] [0.0, 0.0])
        v2_init = array (0,1) (zip [0..1] [0.0, 0.0])
    odvi <- newIORef (ODV_o obs_init dir_init v1_init v2_init)
    let gvi = GV_o bvi ivi fvi
        svi = SV_o gvi odvi
    terrain <- newArray (0,(ps - 1)) 0.0 :: IO (IOUArray Int Float)
    terrainColor <- newArray ((0,0), ((ps - 1),2)) 0.0 :: IO (IOUArray (Int, Int) Float)
    tim <- qTime ()
    w <- myQWidget 
    glw <- gLWidget =<< (qGLFormat $ fRgba + fDepthBuffer + fDoubleBuffer)
    setGeometry glw (0::Int, 0::Int, wdth, hght)
    pev <- newIORef 0
    setHandler w "(bool)event(QEvent*)" $ wevent pev svi glw
    setHandler glw "initializeGL()" $ initgl terrain terrainColor pw ph
    setHandler glw "resizeGL(int,int)" $ resizegl terrain terrainColor svi tim
    setHandler glw "(QSize)minimumSizeHint()" $ minSizeHint
    setHandler glw "(QSize)sizeHint()" $ szHint
    mainlayout <- qHBoxLayout ()
    setContentsMargins mainlayout (0::Int, 0::Int, 0::Int, 0::Int)
    addWidget mainlayout glw
    setLayout w mainlayout
    setWindowTitle w "TQC_01"
    qshow w ()
    peloop glw pev terrain terrainColor svi tim
    return ()

peloop :: GLWidget -> IORef Int -> IOUArray Int Float -> IOUArray (Int, Int) Float -> SV -> QTime () -> IO ()
peloop glw pev terrain terrainColor sv tim
  = do
    cpev <- readIORef pev
    if (cpev == 0)
     then do 
      qCoreApplicationProcessEvents ()
      drawscene glw True terrain terrainColor sv tim
      peloop glw pev terrain terrainColor sv tim
     else
      return ()

wevent :: IORef Int -> SV -> GLWidget -> MyQWidget -> QEvent () -> IO (Bool)
wevent pev sv glw this evt
  = do
    et <- qtype evt ()
    we_s1 et (bv (gv sv)) (fv (gv sv))
  where
    we_s1 et cbv cfv
     | et == eKeyPress
      = do
        ke <- qCast_QKeyEvent evt
        ky <- key ke ()
        ke_s1 ky cbv
     | et == eClose
      = do 
        qCoreApplicationExit (0::Int)
        modifyIORef pev (\_ -> 1)
        return True
     | otherwise
      = event_h this evt
      where
        ke_s1 ky cbv
         | ky == (qEnum_toInt eKey_Escape)
          = do
            qCoreApplicationExit (0::Int)
            modifyIORef pev (\_ -> 1)
            return True
         | ky == (qEnum_toInt eKey_Space)
          = do
            tb <- use_io fll cbv
            if (tb)
             then do
              setWindowState this fWindowNoState
             else do
              setWindowState this fWindowFullScreen
            tog fll cbv
            return True 
         | ky == (qEnum_toInt eKey_P)
          = do
            tb <- use_io pom cbv
            if (tb)
             then do
              polygonMode $= (Fill, Fill)
             else do
              polygonMode $= (Line, Line)
            tog pom cbv
            return True 
         | ky == (qEnum_toInt eKey_H)
          = do
            tog hlp cbv
            return True 
         | ky == (qEnum_toInt eKey_F)
          = do
            tog fgb cbv
            return True 
         | ky == (qEnum_toInt eKey_T)
          = do
            tog tex cbv
            return True 
         | ky == (qEnum_toInt eKey_B)
          = do
            tog cul cbv
            return True 
         | ky == (qEnum_toInt eKey_C)
          = do
            tog cnt cbv
            return True 
         | ky == (qEnum_toInt eKey_Left)
          = do
            inc_fvl alph cfv 2.0
            return True 
         | ky == (qEnum_toInt eKey_Right)
          = do
            inc_fvl alph cfv (-2.0)
            return True 
         | ky == (qEnum_toInt eKey_Up)
          = do
            inc_fvl beta cfv 2.0
            return True 
         | ky == (qEnum_toInt eKey_Down)
          = do
            inc_fvl beta cfv (-2.0)
            return True 
         | ky == (qEnum_toInt eKey_A)
          = do
            inc_fvl v cfv 50.0
            return True 
         | ky == (qEnum_toInt eKey_Z)
          = do
            inc_fvl v cfv (-50.0)
            return True 
         | otherwise
          = event_h this evt

calcposobs :: Array Int Float -> ODV -> Float -> ODV
calcposobs cfv odv td
  = let a = fvl alph cfv
        b = fvl beta cfv
        cv = fvl v cfv
        nd1_0 = sin ((a * my_PI) / 180.0)
        nd1_1 = cos ((b * my_PI) / 180.0)
        nd1_2 = cos ((a * my_PI) / 180.0) * sin ((b * my_PI) / 180.0)
        nd2_0 = if (ndl nd1_0) then 0.0 else nd1_0
        nd2_1 = if (ndl nd1_1) then 0.0 else nd1_1
        nd2_2 = if (ndl nd1_2) then 0.0 else nd1_2
        ndir = array (0,2) (zip [0..2] [nd1_0, nd1_1, nd1_2])
        f = fvl fdovw cfv
        alpha1 = a + (f / 2.0)
        nv1_0 = sin ((alpha1 * my_PI) / 180.0)
        nv1_1 = cos ((alpha1 * my_PI) / 180.0)
        nv1 = array (0,1) (zip [0..1] [nv1_0, nv1_1])
        alpha2 = a - (f / 2.0)
        nv2_0 = sin ((alpha2 * my_PI) / 180.0)
        nv2_1 = cos ((alpha2 * my_PI) / 180.0)
        nv2 = array (0,1) (zip [0..1] [nv2_0, nv2_1])
        o = obs odv
        nobs1 = array (0,2) (zip [0..2] [(o!i) + ((realToFrac (cv * (ndir!i) * td))::GLfloat) | i <- [0..2]])
        nobs2 = array (0,2) (zip [0..2] [if ((i == 1) && ((nobs1!i) < 0.0)) then 0.0 else nobs1!i | i <- [0..2]])
        rv = ODV_o nobs2 ndir nv1 nv2 in
        rv
  where
    ndl d = (d < 1.0e-5) && (d > -1.0e-5)

clipStrip :: Float -> ODV -> (# Bool, Float, Float #)
clipStrip y odv
  = do
    let cv1 = v1 odv
        pv1_s = y / (cv1!1)
        pv1 = if (cv1!1 == 0.0) then (0.0, -hugeVal) else (pv1_s, pv1_s * cv1!0)
        cv2 = v2 odv
        pv2_s = y / (cv2!1)
        pv2 = if (cv2!1 == 0.0) then (0.0, hugeVal) else (pv2_s, pv2_s * cv2!0)
        t1 = fst pv1
        x1 = snd pv1
        t2 = fst pv2
        x2 = snd pv2
        ls2 = (lengthXmnt * stepXmnt) / 2.0
        in if (((x1 < -ls2) && (t2 <= 0.0)) ||
               ((t1 <= 0.0) && (x2 > ls2)) ||
               ((t1 < 0.0) && (t2 < 0.0)))
            then
             (# False, 0.0, 0.0 #)
            else
             if ((t1 == 0.0) && (t2 == 0.0))
              then
               if ((cv1!0 < 0.0) && (cv1!1 > 0.0) && (cv2!0 < 0.0) && (cv2!1 < 0.0))
                then
                 (# True, -ls2, stepXmnt #)
                else
	             if ((cv1!0 > 0.0) && (cv1!1 < 0.0) && (cv2!0 > 0.0) && (cv2!1 > 0.0))
                  then
	               (# True, -stepXmnt, ls2 #)
                  else
                  (# False, 0.0, 0.0 #)
              else
               let tx2 = if (t2 < 0.0)
                          then
                           if (x1 < 0.0) then -ls2 else ls2
                          else
                           x2
                   tx1 = if (t1 < 0.0)
                          then
                           if (tx2 < 0.0) then -ls2 else ls2
                         else
                          x1
                   ttx1 = if (tx1 > tx2) then tx2 else tx1
                   ttx2 = if (tx1 > tx2) then tx1 else tx2
                   sx1 = ttx1 - stepXmnt
                   tsx1 = if (sx1 < -ls2) then -ls2 else sx1
                   sx2 = ttx2 + stepXmnt
                   tsx2 = if (sx2 > ls2) then ls2 else sx2
                   in (# True, (fromIntegral (truncate (tsx1 / stepXmnt))) * stepXmnt, (fromIntegral (truncate (tsx2 / stepXmnt))) * stepXmnt #)

drawterrain :: IOUArray Int Float -> IOUArray (Int, Int) Float -> Array Int Bool -> ODV -> IO ()
drawterrain terrain terrainColor bv odv
  = preservingMatrix $ do
      translatef ((Vector3 ((fromIntegral ox) * ((realToFrac stepXmnt)::GLfloat)) (0::GLfloat) ((fromIntegral oy) * ((realToFrac stepYmnt)::GLfloat))))
      dts1 0 (-ils2)
      GL.texture Texture2D $= Disabled
      cullFace $= Nothing
      blend $= Enabled
      renderPrimitive Quads $ do
        let ls2x = realToFrac ((lengthXmnt * stepXmnt) / 2.0) :: GLfloat
        let ls2y = realToFrac ((lengthYmnt * stepYmnt) / 2.0) :: GLfloat
        let hm6 = heightMnt * 0.6
        color4f (Color4 0.1 0.7 1.0 0.4)
        vertex3f (Vertex3 (-ls2x) hm6 (-ls2y))
        vertex3f (Vertex3 (-ls2x) hm6 (ls2y))
        vertex3f (Vertex3 (ls2x) hm6 (ls2y))
        vertex3f (Vertex3 (ls2x) hm6 (-ls2y))
      blend $= Disabled
      if (use tex bv) then GL.texture Texture2D $= Enabled else GL.texture Texture2D $= Disabled
      if (use cul bv) then cullFace $= Just Back else cullFace $= Nothing
  where
    istepXmnt = (truncate stepXmnt) :: Int
    istepYmnt = (truncate stepYmnt) :: Int
    ilengthYmnt = truncate lengthYmnt
    ils2 = truncate ((lengthYmnt * stepYmnt) / 2.0)
    o = obs odv
    ox = (floor ((o!0) / ((realToFrac stepXmnt)::GLfloat))) :: Int
    oy = (floor ((o!2) / ((realToFrac stepYmnt)::GLfloat))) :: Int
    globalMnt = (mod (ox * tScale) 256) + (mod (oy * tScale) 256) * 256
    translatef = GL.translate :: Vector3 GLfloat -> IO ()
    dts1 h k
     | h < ilengthYmnt
      = do
        case clipStrip (fromIntegral k) odv of 
         (# b, _, _ #) | not b
           -> dts1 (h + 1) (k + istepYmnt)
         (# _, start, end #)
           -> do
              renderPrimitive TriangleStrip $
                dts2 h k (truncate ((lengthXmnt / 2.0) + (start / stepXmnt))) (glf start) (glf end)
              dts1 (h + 1) (k + istepYmnt)
     | otherwise
        = return ()
    dts2 h k i j end
     | j <= end
      = do  
        let idx1 = mod ((i * tScale) + (h * 256 * tScale) + globalMnt) 65536
        c1_0 <- readArray terrainColor (idx1, 0)
        c1_1 <- readArray terrainColor (idx1, 1)
        c1_2 <- readArray terrainColor (idx1, 2)
        color3f (Color3 (glf c1_0) (glf c1_1) (glf c1_2))
        texCoord2f (TexCoord2 ((fromIntegral (ox + i)) / 8.0) ((fromIntegral (oy + h)) / 8.0))
        t1 <- readArray terrain idx1
        vertex3f (Vertex3 j (glf t1) (fromIntegral k))
        let idx2 = mod ((i * tScale) + (h * 256 * tScale) + (256 * tScale) + globalMnt) 65536
        c2_0 <- readArray terrainColor (idx2, 0)
        c2_1 <- readArray terrainColor (idx2, 1)
        c2_2 <- readArray terrainColor (idx2, 2)
        color3f (Color3 (glf c2_0) (glf c2_1) (glf c2_2))
        texCoord2f (TexCoord2 ((fromIntegral (ox + i)) / 8.0) ((fromIntegral (oy + h + 1)) / 8.0))
        t2 <- readArray terrain idx2
        vertex3f (Vertex3 j (glf t2) (fromIntegral (k + istepYmnt)))
        dts2 h k (i + 1) (j + ((realToFrac stepXmnt)::GLfloat)) end
     | otherwise
      = return ()

drawscene :: GLWidget -> Bool -> IOUArray Int Float -> IOUArray (Int, Int) Float -> SV -> QTime () -> IO ()
drawscene this dt terrain terrainColor sv tim
  = do
    let cbv_io = bv (gv sv)
        civ_io = iv (gv sv)
        cfv_io = fv (gv sv)
        odv_io = odv sv
    cbv <- freeze cbv_io
    civ <- freeze civ_io
    cfv <- freeze cfv_io
    shadeModel $= Smooth
    depthFunc $= Just Lequal
    if (use tex cbv) then GL.texture Texture2D $= Enabled else GL.texture Texture2D $= Disabled
    if (use cul cbv) then cullFace $= Just Back else cullFace $= Nothing
    if (use fgb cbv) then fog $= Enabled else fog $= Disabled
    GL.clear [ColorBuffer, DepthBuffer]
    preservingMatrix $ do
      codv <- readIORef odv_io
      odv <- if (dt)
              then
               do
               et <- elapsed tim ()
               let pt = ivl tt civ
                   td = if (pt < 0) then 0.0 else (fromIntegral (et - pt)) / 1000.0
               mod_ivl tt civ_io et
               let nodv = calcposobs cfv codv td
               modifyIORef odv_io (\_ -> nodv)
               return nodv
              else
               return codv
      let cobs = array (0,2) (zip [0..2] (map realToFrac [(obs odv)!i | i <- [0..2]]))
          cdir = array (0,2) (zip [0..2] (map realToFrac [(dir odv)!i | i <- [0..2]])) in
          lookAt (Vertex3 (cobs!0) (cobs!1) (cobs!2))
               (Vertex3 ((cobs!0) + (cdir!0)) ((cobs!1) + (cdir!1)) ((cobs!2) + (cdir!2)))
               (Vector3 0.0 1.0 0.0)
      drawterrain terrain terrainColor cbv odv
    shadeModel $= Flat 
    depthFunc $= Nothing
    GL.texture Texture2D $= Disabled
    cullFace $= Nothing
    fog $= Disabled
    matrixMode $= Projection
    loadIdentity
    ortho (-0.5) 639.5 (-0.5) 479.5 (-1.0) 1.0
    matrixMode $= Modelview 0
    loadIdentity
    color3f (Color3 1.0 0.0 0.0)
    pf <- qFont ("Times", (18::Int))
    let ss = printf "%.2f" (fvl fps cfv)
    if (use cnt cbv)
     then renderText this ((10.0::Double), (10.0::Double), (0.0::Double), ("Frame rate: " ++ ss), pf)
     else return ()              
    if (not (use fll cbv))
     then
      do
      setPointSize pf 8
      renderText this ((350.0::Double), (470.0::Double), (0.0::Double), "qhTerrain V1.1 Written by David Harley (dth.tss@gmail.com)")
      renderText this ((434.0::Double), (457.0::Double), (0.0::Double), "Based on Terrain2.1 by David Bucciarelli")
     else return ()
    if (use hlp cbv) then printHelp this else return ()
    if (dt)
     then
      do
      et <- elapsed tim ()
      mseconds <- if ((ivl tf civ) < 0) then do mod_ivl tf civ_io et; return 0 else return $ et - (ivl tf civ)
      let ccfl = ivl cfl civ
      if (mseconds > ccfl)
       then
        do
        if (ccfl < (ivl flmax civ)) then mod_ivl cfl civ_io (ccfl * 2) else return ()
        mod_fvl fps cfv_io ((fromIntegral ((ivl frames civ) + 1)) / ((fromIntegral mseconds) / 1000.0))
        mod_ivl tf civ_io et
        mod_ivl frames civ_io 0
       else
        inc_ivl frames civ_io 1
     else return ()
    reshape civ_io (ivl window_width civ) (ivl window_height civ)
    swapBuffers this ()
    returnGC
      
printHelp :: GLWidget -> IO ()
printHelp this
  = do
    blend $= Enabled
    color4f (Color4 0.0 0.0 0.0 0.5)
    rectf (Vertex2 40 40) (Vertex2 600 440)
    blend $= Disabled

    color3f (Color3 1.0 0.0 0.0)
    pf <- qFont ("Times", (18::Int))
    let rx = 60.0::Double
    let ry1 = 390.0::Double
    let rys = 35.0::Double
    let zd = 0.0::Double
    renderText this ((300::Double), (410::Double), zd, "Help", pf)
    renderText this (rx, ry1, zd, "h - Toggle Help", pf)
    renderText this (rx, (ry1 - rys), zd, "t - Toggle Textures", pf)
    renderText this (rx, (ry1 - (rys * 2)), zd, "f - Toggle Fog", pf)
    renderText this (rx, (ry1 - (rys * 3)), zd, "p - Toggle Wire frame", pf)
    renderText this (rx, (ry1 - (rys * 4)), zd, "b - Toggle Back face culling", pf)
    renderText this (rx, (ry1 - (rys * 5)), zd, "c - Toggle Frame count", pf)
    renderText this (rx, (ry1 - (rys * 6)), zd, "Arrow Keys - Rotate", pf)
    renderText this (rx, (ry1 - (rys * 7)), zd, "a - Increase velocity", pf)
    renderText this (rx, (ry1 - (rys * 8)), zd, "z - Decrease velocity", pf)

reshape :: IOUArray Int Int -> Int -> Int -> IO ()
reshape iv sw sh
  = do
    GL.viewport $= (Position (fromIntegral 0) (fromIntegral 0), GL.Size (fromIntegral sw) (fromIntegral sh))
    matrixMode $= Projection
    loadIdentity
    perspective 50.0 (fromIntegral sw / fromIntegral sh) (realToFrac (lengthXmnt * stepYmnt * 0.01)) (realToFrac (lengthXmnt * stepYmnt * 0.7))
    matrixMode $= Modelview 0
    loadIdentity
    mod_ivl window_width iv sw
    mod_ivl window_height iv sh

initgl :: IOUArray Int Float -> IOUArray (Int, Int) Float -> Int -> Int -> GLWidget -> IO ()
initgl terrain terrainColor pw ph this
  = do
    loadpic terrain terrainColor pw ph
    let fogcolor = array (0,3) (zip [0..3] [0.6, 0.7, 0.7, 1.0])
    clearColor $=Color4 (fogcolor!0) (fogcolor!1) (fogcolor!2) (fogcolor!3)
    clearDepth $= 1.0
    depthFunc $= Just Lequal
    shadeModel $= Smooth
    cullFace $= Nothing
    blend $= Disabled
    blendFunc $= (SrcAlpha, OneMinusSrcAlpha)
    fog $= Enabled
    fogMode $= Exp2 0.0007
    fogColor $= Color4 (realToFrac(fogcolor!0)) (realToFrac(fogcolor!1)) (realToFrac(fogcolor!2)) (realToFrac(fogcolor!3))
    hint Fog $= Nicest
    return ()

loadpic :: IOUArray Int Float -> IOUArray (Int, Int) Float -> Int -> Int -> IO ()
loadpic terrain terrainColor pw ph
  = do
    let ps = pw * ph
    picFile <- qFile ":/terrain.dat"
    open picFile fReadOnly
    pfs <- qDataStream picFile
    bufferter <- readRawData pfs ps
    close picFile ()
    tc terrain 0 bufferter
    cc terrainColor 0 bufferter
    terrainpic <- pc ps bufferter
    withStorableArray terrainpic $ \ptr -> do
      rowAlignment Unpack $= 1    
      build2DMipmaps Texture2D Luminance' 256 256 (PixelData Luminance UnsignedByte (castPtr ptr))
    textureWrapMode Texture2D S $= (Repeated, Repeat)
    textureWrapMode Texture2D T $= (Repeated, Repeat)
    textureFilter Texture2D $= ((Linear', Just Linear'), Linear')
    textureFunction $= Modulate
    GL.texture Texture2D $= Enabled
    return ()

tc :: IOUArray Int Float -> Int -> String -> IO ()
tc _ _ [] = return ()
tc terrain i (x:xs)
  = do
    writeArray terrain i (((fromIntegral (ord x)) :: Float) * (450.0 / 255.0))
    tc terrain (i + 1) xs

cc :: IOUArray (Int, Int) Float -> Int -> String -> IO ()
cc _ _ [] = return ()
cc terrainColor i (x:xs)
  = do
    ptc terrainColor i $ calcColor ((fromIntegral (ord x)) :: Float)
    cc terrainColor (i + 1) xs
    return ()

gtc :: IOUArray (Int, Int) Float -> Int -> Array Int Float
gtc terrainColor i
  = array (0,2) (zip [0..2] [unsafePerformIO (readArray terrainColor (i, x)) | x <- [0..2]])

ptc :: IOUArray (Int, Int) Float -> Int -> Array Int Float -> IO ()
ptc terrainColor i ntc
  = ptc_s terrainColor i 0 ntc

ptc_s :: IOUArray (Int, Int) Float -> Int -> Int -> Array Int Float -> IO ()
ptc_s _ _ i2 _ | i2 > 2 = return ()
ptc_s terrainColor i i2 ntc
  = do
    writeArray terrainColor (i, i2) (ntc!i2)
    ptc_s terrainColor i (i2 + 1) ntc 

calcColor :: Float -> Array Int Float
calcColor height
 | sh >= 0.9
  = gca 0
 | (sh < 0.9) && (sh >= 0.7)
  = ccs 0 0.7 1.0
 | (sh < 0.7) && (sh >= 0.6)
  = ccs 1 0.6 2.0
 | (sh < 0.6) && (sh >= 0.5)
  = ccs 2 0.5 2.0
 | otherwise
  = gca 3
  where
    gca i = array (0, 2) (zip [0..2] [clr!(i,x) | x <- [0..2]]) :: Array Int Float
    clr = array ((0,0), (3,2)) (zip [(x,y) | x <- [0..3], y <- [0..2]] (c0 ++ c1 ++ c2 ++ c3)) :: Array (Int, Int) Float
      where c0 = [1.0, 1.0, 1.0]
            c1 = [0.0, 0.8, 0.0]
            c2 = [1.0, 1.0, 0.3]
            c3 = [0.0, 0.0, 0.8]
    sh = height * (1.0 / 255.0)
    ccs i f1 f2 = array (0, 2) (zip [0..2] [cs1 (clr!(i,x)) (clr!(i + 1,x)) f1 f2 | x <- [0..2]])
      where
        cs1 c1 c2 f1 f2
          = (fact * c1) + ((1.0 - fact) * c2)
          where
            fact = (sh - f1) * 5.0 * f2

pc :: Int -> String -> IO (StorableArray Int GLubyte)
pc ps bufferter
  = do
    newListArray (0, ps) [pcs (fromIntegral (ord x)) | x <- bufferter] :: IO (StorableArray Int GLubyte)
  where
    pcs b
     | (b > 159)
      = 255
     | otherwise
      = b + 96

minSizeHint :: GLWidget -> IO (QSize ())
minSizeHint this
  = do
    qSize (50::Int, 50::Int)

szHint :: GLWidget -> IO (QSize ())
szHint this
  = do
    qSize (wdth, hght)

resizegl :: IOUArray Int Float -> IOUArray (Int, Int) Float -> SV -> QTime () -> GLWidget -> Int -> Int -> IO ()
resizegl terrain terrainColor sv tim this x y
  = do
    let civ = iv (gv sv)
    mod_ivl window_width civ x
    mod_ivl window_height civ y
    drawscene this False terrain terrainColor sv tim
    return ()

