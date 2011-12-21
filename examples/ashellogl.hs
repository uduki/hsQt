{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : ashellogl.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:43
    
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
import Qtc.Enums.Core.Qt
import Qtc.Enums.Gui.QSlider
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Core.QCoreApplication
import Qtc.Core.QSize
import Qtc.Gui.QApplication
import Qtc.Gui.QLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QLabel
import Qtc.Gui.QWidget
import Qtc.Gui.QGroupBox
import Qtc.Gui.QColor
import Qtc.Gui.QMouseEvent
import Qtc.Gui.QAbstractSlider
import Qtc.Gui.QSlider
import Qtc.Opengl.QGLWidget
import Qtc.Opengl.QGLWidget_h
import Data.IORef
import Data.List
import Data.Bits
import Array
import Graphics.Rendering.OpenGL as GL
import Qtc.Enums.Gui.QSizePolicy
import Qt.Arthur.Style

type MyQWidget = QWidgetSc (CMyQWidget)
data CMyQWidget = CMyQWidget

myQWidget :: IO (MyQWidget)
myQWidget = qSubClass (qWidget ())

type GLWidget = QGLWidgetSc (CGLWidget)
data CGLWidget = CGLWidget

gLWidget :: IO (GLWidget)
gLWidget = qSubClass (qGLWidget ())

trolltechGreen :: IO (QColor ())
trolltechGreen
  = qColorFromCmykF (0.40::Double, 0.0::Double, 1.0::Double, 0.0::Double)

trolltechPurple :: IO (QColor ())
trolltechPurple
  = qColorFromCmykF (0.39::Double, 0.39::Double, 0.0::Double, 0.0::Double)

main :: IO ()
main
  = do
    app <- qApplication ()
    w <- myQWidget 
    glw <- gLWidget
    rot <- newIORef (0, 0, 0)
    pos <- newIORef (0, 0)
    setHandler glw "initializeGL()" $ initgl rot
    setHandler glw "(QSize)minimumSizeHint()" $ minSizeHint
    setHandler glw "(QSize)sizeHint()" $ szHint
    setHandler glw "mousePressEvent(QMouseEvent*)" $ msPressEvent pos
    setHandler glw "mouseMoveEvent(QMouseEvent*)" $ msMoveEvent pos rot
    mainGroup <- qGroupBox w
    setTitle mainGroup "Controls"
    xSliderGroup <- qGroupBox mainGroup
    setAttribute xSliderGroup eWA_ContentsPropagated
    setTitle xSliderGroup "X"
    xSlider <- createSlider xSliderGroup
    ySliderGroup <- qGroupBox mainGroup
    setAttribute ySliderGroup eWA_ContentsPropagated
    setTitle ySliderGroup "Y"
    ySlider <- createSlider ySliderGroup
    zSliderGroup <- qGroupBox mainGroup
    setAttribute zSliderGroup eWA_ContentsPropagated
    setTitle zSliderGroup "Z"
    zSlider <- createSlider zSliderGroup
    setFixedWidth mainGroup 206
    mainGroupLayout <- qHBoxLayout mainGroup
    addWidget mainGroupLayout xSliderGroup
    addWidget mainGroupLayout ySliderGroup
    addWidget mainGroupLayout zSliderGroup
    xSliderGroupLayout <- qHBoxLayout xSliderGroup
    addWidget xSliderGroupLayout xSlider
    ySliderGroupLayout <- qHBoxLayout ySliderGroup
    addWidget ySliderGroupLayout ySlider
    zSliderGroupLayout <- qHBoxLayout zSliderGroup
    addWidget zSliderGroupLayout zSlider
    connectSlot xSlider "valueChanged(int)" glw "setXRotation(int)" $ setXRotation rot
    connectSlot glw "xRotationChanged(int)" xSlider "setValue(int)" ()
    connectSlot ySlider "valueChanged(int)" glw "setYRotation(int)" $ setYRotation rot
    connectSlot glw "yRotationChanged(int)" ySlider "setValue(int)" ()
    connectSlot zSlider "valueChanged(int)" glw "setZRotation(int)" $ setZRotation rot
    connectSlot glw "zRotationChanged(int)" zSlider "setValue(int)" ()
    glGroup <- qGroupBox w
    glGroupLayout <- qVBoxLayout glGroup
    addWidget glGroupLayout glw
    layout <- qHBoxLayout ()
    addWidget layout glGroup
    addWidget layout mainGroup
    setLayout w layout
    setStyleChildren w =<< arthurStyle
    qshow w ()
    ok <- qApplicationExec ()
    returnGC

msPressEvent :: IORef (Int, Int) -> GLWidget -> QMouseEvent () -> IO ()
msPressEvent pos this mev
  = do
    mx <- qx mev ()
    my <- qy mev ()
    modifyIORef pos (\(p_x, p_y) -> (mx, my))

msMoveEvent :: IORef (Int, Int) -> IORef (Int, Int, Int) -> GLWidget -> QMouseEvent () -> IO ()
msMoveEvent pos rot this mev
  = do
    mx <- qx mev ()
    my <- qy mev ()
    buttons <- buttons mev ()
    (r_x, r_y) <- readIORef pos
    let mdx = r_x - mx
    let mdy = r_y - my
    let alb = (qFlags_toInt buttons) .&. (qFlags_toInt fLeftButton)
    let arb = (qFlags_toInt buttons) .&. (qFlags_toInt fRightButton)
    (r_x, r_y, r_z) <- readIORef rot
    do
      if (alb > 0)
       then do
         setXRotation rot this $ r_x + 8 * mdy
         setYRotation rot this $ r_y + 8 * mdx
       else return ()
      if (arb > 0)
       then do
         setXRotation rot this $ r_x + 8 * mdy
         setZRotation rot this $ r_z + 8 * mdx
       else return ()
    modifyIORef pos (\(p_x, p_y) -> (mx, my))
    return ()

createSlider :: QGroupBox () -> IO (QSlider ())
createSlider gb
  = do
    slider <- qSlider (eVertical::QtOrientation, gb)
    setRange slider (0::Int, (360 * 16)::Int)
    setSingleStep slider (16::Int)
    setPageStep slider $ ((15 * 16)::Int)
    setTickInterval slider $ ((15 * 16)::Int)
    setTickPosition slider eTicksRight
    return slider

initgl :: IORef (Int, Int, Int) -> GLWidget -> IO ()
initgl rot this
  = do
    tp <- trolltechPurple
    cd <- dark tp ()
    qglClearColor this cd
    dl <- makeObject this
    shadeModel $= Flat
    depthFunc $= Just Less
    cullFace $= Just Back
    setHandler this "resizeGL(int,int)" rsz
    setHandler this "paintGL()" $ dsply rot dl
    return ()

setXRotation :: IORef (Int, Int, Int) -> GLWidget -> Int -> IO ()
setXRotation rot this angle
  = do
    nang <- normalizeAngle angle
    (r_x, r_y, r_z) <- readIORef rot
    return ()
    if (nang /= r_x)
     then do
       modifyIORef rot (\(r_x, r_y, r_z) -> (nang, r_y , r_z))
       emitSignal this "xRotationChanged(int)" nang
       updateGL this ()
     else return ()

setYRotation :: IORef (Int, Int, Int) -> GLWidget -> Int -> IO ()
setYRotation rot this angle
  = do
    nang <- normalizeAngle angle
    (r_x, r_y, r_z) <- readIORef rot
    return ()
    if (nang /= r_y)
     then do
       modifyIORef rot (\(r_x, r_y, r_z) -> (r_x, nang , r_z))
       emitSignal this "yRotationChanged(int)" nang
       updateGL this ()
     else return ()

setZRotation :: IORef (Int, Int, Int) -> GLWidget -> Int -> IO ()
setZRotation rot this angle
  = do
    nang <- normalizeAngle angle
    (r_x, r_y, r_z) <- readIORef rot
    return ()
    if (nang /= r_z)
     then do
       modifyIORef rot (\(r_x, r_y, r_z) -> (r_x, r_y , nang))
       emitSignal this "zRotationChanged(int)" nang
       updateGL this ()
     else return ()

normalizeAngle :: Int -> IO (Int)
normalizeAngle ang
  = do
    let a1 = normUp ang
    let a2 = normDown a1
    return a2

normUp :: Int -> Int
normUp a | a >= 0 = a
normUp a = normUp $ a + (360 * 16)

normDown :: Int -> Int
normDown a | a <= (360 * 16) = a
normDown a = normDown $ a - (360 * 16)

minSizeHint :: GLWidget -> IO (QSize ())
minSizeHint this
  = do
    qSize (100::Int, 100::Int)

szHint :: GLWidget -> IO (QSize ())
szHint this
  = do
    qSize (400::Int, 400::Int)

dsply :: IORef (Int, Int, Int) -> DisplayList -> GLWidget -> IO ()
dsply rot dl this
  = do
    (r_x, r_y, r_z) <- readIORef rot
    GL.clear [ ColorBuffer, DepthBuffer ]
    loadIdentity
    GL.translate $ Vector3 0 0 (-10.0::GLdouble)
    GL.rotate ((fromIntegral r_x)/16.0) $ Vector3 (1.0::GLfloat) 0.0 0.0
    GL.rotate ((fromIntegral r_y)/16.0) $ Vector3 (0.0::GLfloat) 1.0 0.0
    GL.rotate ((fromIntegral r_z)/16.0) $ Vector3 (0.0::GLfloat) 0.0 1.0
    callList dl
    returnGC

rsz :: GLWidget -> Int -> Int -> IO ()
rsz this x y
  = do
    let side = min x y
    let p1 = round $ (fromIntegral $ x - side) / 2.0
    let p2 = round $ (fromIntegral $ y - side) / 2.0
    GL.viewport $= (Position (fromIntegral p1) (fromIntegral p2), GL.Size (fromIntegral side) (fromIntegral side))
    matrixMode $= Projection
    loadIdentity
    ortho (-0.5::GLdouble) 0.5 0.5 (-0.5) 4.0 15.0
    matrixMode $= Modelview 0
    return ()

makeObject :: QGLWidget a -> IO (DisplayList)
makeObject glw
  = defineNewList Compile $ do
    let x1 = 0.06
    let y1 = -0.14
    let x2 = 0.14
    let y2 = -0.06
    let x3 = 0.08
    let y3 = 0.00
    let x4 = 0.30
    let y4 = 0.22
    let pi = 3.14159265358979323846
    renderPrimitive Quads $ do
      quad glw x1 y1 x2 y2 y2 x2 y1 x1
      quad glw x3 y3 x4 y4 y4 x4 y3 x3
      extrude glw x1 y1 x2 y2
      extrude glw x2 y2 y2 x2
      extrude glw y2 x2 y1 x1
      extrude glw y1 x1 x1 y1
      extrude glw x3 y3 x4 y4
      extrude glw x4 y4 y4 x4
      extrude glw y4 x4 y3 x3
      do_NumSectors glw 0 pi 200
      return ()

do_NumSectors :: QGLWidget a -> Int -> Double -> Int -> IO ()
do_NumSectors _ i _ ns | i >= ns = return ()
do_NumSectors glw i pi ns
  = do
    let fns = fromIntegral ns
    let angle1 = ((fromIntegral (i * 2)) * pi) / fns
    let x5 = realToFrac (0.30 * (sin angle1)) :: GLdouble
    let y5 = realToFrac (0.30 * (cos angle1)) :: GLdouble
    let x6 = realToFrac (0.20 * (sin angle1)) :: GLdouble
    let y6 = realToFrac (0.20 * (cos angle1)) :: GLdouble
    let angle2 = ((fromIntegral ((i + 1) * 2)) * pi) / fns
    let x7 = realToFrac (0.20 * sin(angle2)) :: GLdouble
    let y7 = realToFrac (0.20 * cos(angle2)) :: GLdouble
    let x8 = realToFrac (0.30 * sin(angle2)) :: GLdouble
    let y8 = realToFrac (0.30 * cos(angle2)) :: GLdouble
    quad glw x5 y5 x6 y6 x7 y7 x8 y8
    extrude glw x6 y6 x7 y7
    extrude glw x8 y8 x5 y5
    do_NumSectors glw (i + 1) pi ns
    return ()

quad :: QGLWidget a -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> IO ()
quad glw x1 y1 x2 y2 x3 y3 x4 y4
  = do
    qglColor glw =<< trolltechGreen
    vertex $ Vertex3 x1 y1 (-0.05)
    vertex $ Vertex3 x2 y2 (-0.05)
    vertex $ Vertex3 x3 y3 (-0.05)
    vertex $ Vertex3 x4 y4 (-0.05)
    vertex $ Vertex3 x4 y4 0.05
    vertex $ Vertex3 x3 y3 0.05
    vertex $ Vertex3 x2 y2 0.05
    vertex $ Vertex3 x1 y1 0.05
    return ()

extrude :: QGLWidget a -> GLdouble -> GLdouble -> GLdouble -> GLdouble -> IO ()
extrude glw x1 y1 x2 y2
  = do
    tg <- trolltechGreen
    let xrp = truncate $ x1 * 100.0
    dc <- darker tg $ (xrp::Int) + 250
    qglColor glw dc
    vertex $ Vertex3 x1 y1 0.05
    vertex $ Vertex3 x2 y2 0.05
    vertex $ Vertex3 x2 y2 (-0.05)
    vertex $ Vertex3 x1 y1 (-0.05)
    return ()

