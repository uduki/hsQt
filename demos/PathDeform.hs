{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : PathDeform.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qth.ClassTypes.Core
import Qth.Core
import Data.IORef
import Data.Char
import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Opengl
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QRect
import Qtc.Core.QRectF
import Qtc.Core.QPointF
import Qtc.Core.QSize
import Qtc.Core.QLineF
import Qtc.Core.QMatrix
import Qtc.Core.QBasicTimer
import Qtc.Core.QTimer_h
import Qtc.Core.QTime
import Qtc.Core.QTimerEvent
import Qtc.Gui.QApplication
import Qtc.Gui.QPainter
import Qtc.Enums.Gui.QPainter
import Qtc.Gui.QPainterPath
import Qtc.Gui.QColor
import Qtc.Gui.QGradient
import Qtc.Gui.QRadialGradient
import Qtc.Gui.QColor
import Qtc.Gui.QBrush
import Qtc.Gui.QImage
import Qtc.Enums.Gui.QImage
import Qtc.Gui.QPixmap
import Qtc.Gui.QFont
import Qtc.Enums.Gui.QFont
import Qtc.Gui.QFontMetrics
import Qtc.Gui.QWidget
import Qtc.Gui.QWidget_h
import Qtc.Gui.QGroupBox
import Qtc.Gui.QSlider
import Qtc.Gui.QAbstractSlider
import Qtc.Gui.QPushButton
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QLineEdit
import Qtc.Gui.QLabel
import Qtc.Enums.Gui.QSizePolicy
import Qtc.Gui.QLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QGridLayout
import Qtc.Gui.QDesktopWidget
import Qtc.Gui.QMouseEvent
import Qtc.Core.QEvent
import Qtc.Enums.Core.QEvent
import Qtc.Opengl.QGLFormat
import Qt.Arthur
import Data.List

type PDWidget = QWidgetSc (CPDWidget)
data CPDWidget = CPDWidget

pdWidget :: QWidget a -> IO (PDWidget)
pdWidget parent = qSubClass (qWidget ())

data PathDeformWidget
  = PathDeformWidget
    {pdWidget_widget :: PDWidget,
     pdWidget_renderer :: PathDeformRenderer,
     pdWidget_controls :: PathDeformControls}

pathDeformWidget :: QWidget a -> Bool -> IO PathDeformWidget
pathDeformWidget parent smallScreen
  = do
    widget <- pdWidget parent
    setWindowTitle widget "Vector Deformation"
    renderer <- pathDeformRenderer widget smallScreen
    let rw = pdRenderer_widget renderer
    setSizePolicy rw (eExpanding, eExpanding)

    mainLayout <- qHBoxLayout widget
    addWidget mainLayout rw

    controls <- pathDeformControls widget renderer smallScreen
    let cw = pdControls_widget controls
    setSizePolicy cw (eFixed::Policy, eMinimum)
    if (not smallScreen)
     then
      addWidget mainLayout cw
     else
      return ()
    let af = pdRenderer_arthurFrame renderer
    arthurFrame_loadSourceFile af ":res/PathDeform.hs"
    arthurFrame_loadDescription af ":res/PathDeform.html"
    arthurFrame_setDescriptionEnabled af rw False 
    connectSlot rw "clicked()" widget "showControls()" $ pathDeformWidget_showControls cw
    connectSlot cw "okPressed()" widget "hideControls()" $ pathDeformWidget_hideControls cw
    return $ PathDeformWidget widget renderer controls

pathDeformWidget_showControls :: QWidget a -> QWidget a -> IO ()
pathDeformWidget_showControls cw pdWidget
  = showFullScreen cw ()

pathDeformWidget_hideControls :: QWidget a -> QWidget a -> IO ()
pathDeformWidget_hideControls cw pdWidget
  = hide cw ()

type PDControlsWidget = QWidgetSc (CPDControlsWidget)
data CPDControlsWidget = CPDControlsWidget

pdControlsWidget :: QWidget a -> IO (PDControlsWidget)
pdControlsWidget parent = qSubClass (qWidget ())

data PathDeformControls
  = PathDeformControls
    {pdControls_widget :: PDControlsWidget,
     pdControls_renderer :: PathDeformRenderer}

pathDeformControls :: QWidget a -> PathDeformRenderer -> Bool -> IO PathDeformControls
pathDeformControls parent renderer smallScreen
  = do
    widget <- pdControlsWidget parent
    let npdc = PathDeformControls widget renderer
    if (smallScreen)
     then
      pdControls_layoutForSmallScreen npdc
     else
      pdControls_layoutForDeskTop parent npdc
    return npdc
  
pdControls_layoutForSmallScreen :: PathDeformControls -> IO ()
pdControls_layoutForSmallScreen this
  = do
    let tw = pdControls_widget this
    mainGroup <- qGroupBox tw
    setTitle mainGroup "Controls"
    radiusLabel <- qLabel mainGroup
    setText radiusLabel "Lens Radius:"
    radiusSlider <- qSlider (eHorizontal, mainGroup)
    setRange radiusSlider (15::Int, 150::Int)
    setSizePolicy radiusSlider (eExpanding, eFixed::Policy)
    deformLabel <- qLabel mainGroup
    setText deformLabel "Deformation"
    deformSlider <- qSlider (eHorizontal, mainGroup)
    setRange deformSlider ((-100)::Int, 100::Int)
    setSizePolicy deformSlider (eExpanding, eFixed::Policy)

    fontSizeLabel <- qLabel mainGroup
    setText fontSizeLabel "Font Size"
    fontSizeSlider <- qSlider (eHorizontal, mainGroup)
    setRange fontSizeSlider (16::Int, 200::Int)
    setSizePolicy fontSizeSlider (eExpanding, eFixed::Policy)

    animateButton <- qPushButton mainGroup
    setText animateButton "Animated"
    setCheckable animateButton True

    enableOpenGLButton <- qPushButton mainGroup
    setText enableOpenGLButton "Use OpenGL"
    setCheckable enableOpenGLButton True

    let m_renderer = pdControls_renderer this
        mrw = pdRenderer_widget m_renderer
    m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame m_renderer
    setChecked enableOpenGLButton m_use_opengl
    hogl <- qGLFormatHasOpenGL ()
    if (not hogl)
     then
      hide enableOpenGLButton ()
     else
      return ()
    quitButton <- qPushButton ("Quit", mainGroup)
    okButton <- qPushButton ("OK", mainGroup)

    mainGroupLayout <- qGridLayout mainGroup
    setMargin mainGroupLayout (0::Int)
    addWidget mainGroupLayout (radiusLabel, 0::Int, 0::Int, fAlignRight::Alignment)
    addWidget mainGroupLayout (radiusSlider, 0::Int, 1::Int)
    addWidget mainGroupLayout (deformLabel, 1::Int, 0::Int, fAlignRight::Alignment)
    addWidget mainGroupLayout (deformSlider, 1::Int, 1::Int)
    addWidget mainGroupLayout (fontSizeLabel, 2::Int, 0::Int, fAlignRight::Alignment)
    addWidget mainGroupLayout (fontSizeSlider, 2::Int, 1::Int)
    addWidget mainGroupLayout (animateButton, 3::Int, 0::Int, 1::Int, 2::Int)
    addWidget mainGroupLayout (enableOpenGLButton, 4::Int, 0::Int, 1::Int, 2::Int)

    mainLayout <- qVBoxLayout tw
    addWidget mainLayout mainGroup
    addStretch mainLayout (1::Int)
    addWidget mainLayout okButton
    addWidget mainLayout quitButton

    connectSlot quitButton "clicked()" tw "emitQuitSignal()" $ pdControls_emitQuitSignal
    connectSlot okButton "clicked()" tw "emitOkSignal()" $ pdControls_emitOkSignal
    connectSlot radiusSlider "valueChanged(int)" mrw "setRadius(int)" $ pdRenderer_setRadius m_renderer
    connectSlot deformSlider "valueChanged(int)" mrw "setIntensity(int)" $ pdRenderer_setIntensity m_renderer
    connectSlot fontSizeSlider "valueChanged(int)" mrw "setFontSize(int)" $ pdRenderer_setFontSize m_renderer
    connectSlot animateButton "clicked(bool)" mrw "setAnimated(bool)" $ pdRenderer_setAnimated m_renderer
    connectSlot enableOpenGLButton "clicked(bool)" mrw "enableOpenGL(bool)" $ arthurFrame_enableOpenGL $ pdRenderer_arthurFrame m_renderer
    animateClick animateButton ()
    setValue deformSlider (80::Int)
    setValue fontSizeSlider (120::Int)
    dtop <- qApplicationDesktop ()
    scrn <- screen dtop ()
    scrn_size <- qgeometry scrn ()
    sw <- qwidth scrn_size ()
    sh <- qheight scrn_size ()
    setValue radiusSlider $ min sw (div sh 5)
    pdRenderer_setText m_renderer mrw "Qt"

pdControls_emitQuitSignal :: QWidget a -> IO ()
pdControls_emitQuitSignal cw
  = emitSignal cw "quitPressed()" ()

pdControls_emitOkSignal :: QWidget a -> IO ()
pdControls_emitOkSignal cw
  = emitSignal cw "okPressed()" ()

pdControls_layoutForDeskTop :: QWidget a -> PathDeformControls -> IO ()
pdControls_layoutForDeskTop parent this
  = do
    let tw = pdControls_widget this
    mainGroup <- qGroupBox tw
    setTitle mainGroup "Controls"

    radiusGroup <- qGroupBox mainGroup
    setAttribute radiusGroup eWA_ContentsPropagated
    setTitle radiusGroup "Lens Radius"

    radiusSlider <- qSlider (eHorizontal, radiusGroup)
    setRange radiusSlider (15::Int, 150::Int)
    setSizePolicy radiusSlider (ePreferred, eFixed::Policy)

    deformGroup <- qGroupBox mainGroup
    setAttribute deformGroup eWA_ContentsPropagated
    setTitle deformGroup "Deformation"

    deformSlider <- qSlider (eHorizontal, deformGroup)
    setRange deformSlider ((-100)::Int, 100::Int)
    setSizePolicy deformSlider (ePreferred, eFixed::Policy)

    fontSizeGroup <- qGroupBox mainGroup
    setAttribute fontSizeGroup eWA_ContentsPropagated
    setTitle fontSizeGroup "Font Size"

    fontSizeSlider <- qSlider (eHorizontal, fontSizeGroup)
    setRange fontSizeSlider (16::Int, 200::Int)
    setSizePolicy fontSizeSlider (ePreferred, eFixed::Policy)

    textGroup <- qGroupBox mainGroup
    setAttribute textGroup eWA_ContentsPropagated
    setTitle textGroup "Text"
    textInput <- qLineEdit textGroup

    animateButton <- qPushButton mainGroup
    setText animateButton "Animated"
    setCheckable animateButton True

    showSourceButton <- qPushButton mainGroup
    setText showSourceButton "Show Source"

    enableOpenGLButton <- qPushButton mainGroup
    setText enableOpenGLButton "Use OpenGL"
    setCheckable enableOpenGLButton True

    let m_renderer = pdControls_renderer this
        mrw = pdRenderer_widget m_renderer
    m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame m_renderer
    setChecked enableOpenGLButton m_use_opengl
    hogl <- qGLFormatHasOpenGL ()
    if (not hogl)
     then
      hide enableOpenGLButton ()
     else
      return ()

    whatsThisButton <- qPushButton mainGroup
    setText whatsThisButton "What's This?"
    setCheckable whatsThisButton True

    setFixedWidth mainGroup (180::Int)

    mainGroupLayout <- qVBoxLayout mainGroup
    addWidget mainGroupLayout radiusGroup
    addWidget mainGroupLayout deformGroup
    addWidget mainGroupLayout fontSizeGroup
    addWidget mainGroupLayout textGroup
    addWidget mainGroupLayout animateButton
    addStretch mainGroupLayout (1::Int)
    addWidget mainGroupLayout enableOpenGLButton
    addWidget mainGroupLayout showSourceButton
    addWidget mainGroupLayout whatsThisButton

    radiusGroupLayout <- qVBoxLayout radiusGroup
    addWidget radiusGroupLayout radiusSlider

    deformGroupLayout <- qVBoxLayout deformGroup
    addWidget deformGroupLayout deformSlider

    fontSizeGroupLayout <- qVBoxLayout fontSizeGroup
    addWidget fontSizeGroupLayout fontSizeSlider

    textGroupLayout <- qVBoxLayout textGroup
    addWidget textGroupLayout textInput

    mainLayout <- qVBoxLayout tw
    addWidget mainLayout mainGroup
    setMargin mainLayout (0::Int)

    connectSlot radiusSlider "valueChanged(int)" mrw "setRadius(int)" $ pdRenderer_setRadius m_renderer
    connectSlot deformSlider "valueChanged(int)" mrw "setIntensity(int)" $ pdRenderer_setIntensity m_renderer
    connectSlot fontSizeSlider "valueChanged(int)" mrw "setFontSize(int)" $ pdRenderer_setFontSize m_renderer
    connectSlot textInput "textChanged(QString)" mrw "setText(QString)" $ pdRenderer_setText m_renderer
    connectSlot animateButton "clicked(bool)" mrw "setAnimated(bool)" $ pdRenderer_setAnimated m_renderer
    connectSlot enableOpenGLButton "clicked(bool)" mrw "enableOpenGL(bool)" $ arthurFrame_enableOpenGL $ pdRenderer_arthurFrame m_renderer
    connectSlot mrw "descriptionEnabledChange(bool)" whatsThisButton "setChecked(bool)" $ ()
    connectSlot whatsThisButton "clicked(bool)" mrw "setDescriptionEnabled(bool)" $ arthurFrame_setDescriptionEnabled $ pdRenderer_arthurFrame m_renderer
    connectSlot showSourceButton "clicked()" parent "showSource()" $ arthurFrame_showSource $ pdRenderer_arthurFrame m_renderer
    animateClick animateButton ()
    setValue deformSlider (80::Int)
    setValue fontSizeSlider (120::Int)
    setValue radiusSlider (100::Int)
    setText textInput "Qt"
{-
    desktop <- qApplication_desktop
    screen <- qDesktopWidget_screen desktop
    screen_size <- qWidget_geometry screen
    sw <- qRect_width screen_size
    sh <- qRect_height screen_size
    qAbstractSlider_setValue radiusSlider $ min sw (div sh 5)
-}

lens_extent :: Int
lens_extent = 10

data PathDeformRenderer
  = PathDeformRenderer
    {pdRenderer_arthurFrame :: ArthurFrame,
     pdRenderer_m_repaintTimer :: QBasicTimer (),
     pdRenderer_m_repaintTracker :: QTime (),
     pdRr_m_paths_io :: IORef [QPainterPath ()],
     pdRr_m_advances_io :: IORef [QPointF ()],
     pdRr_m_pathBounds_io :: IORef RectF,
     pdRr_m_text_io :: IORef String,
     pdRr_m_lens_pixmap_io :: IORef (QPixmap ()),
     pdRr_m_lens_image_io :: IORef (QImage ()),
     pdRr_m_fontSize_io :: IORef Int,
     pdRr_m_animated_io :: IORef Bool,
     pdRr_m_intensity_io :: IORef Double,
     pdRr_m_radius_io :: IORef Int,
     pdRr_m_pos_io :: IORef PointF,
     pdRr_m_offset_io :: IORef PointF,
     pdRr_m_direction_io :: IORef PointF,
     pdRr_m_mousePress_io :: IORef PointF,
     pdRr_m_mouseDrag_io :: IORef Bool,
     pdRr_m_smallScreen_io :: IORef Bool}

pdRenderer_widget :: PathDeformRenderer -> ArthurWidget
pdRenderer_widget pdr
  = arthurFrame_widget $ pdRenderer_arthurFrame pdr
 
pathDeformRenderer :: QWidget a -> Bool -> IO (PathDeformRenderer)
pathDeformRenderer parent smallScreen
  = do
    let gno = objectCast objectNull
        m_radius = (100::Int)
        f_radius = fromIntegral m_radius :: Double
        m_pos = pointF f_radius f_radius
        m_direction = pointF 1.0 1.0
    naf <- arthurFrame parent AWInherits__PathDeformRenderer
    m_repaintTimer <- qBasicTimer ()
    m_repaintTracker <- qTime ()
    m_paths_io <- newIORef []
    m_advances_io <- newIORef []
    m_pathBounds_io <- newIORef rectFNull 
    m_text_io <- newIORef ""
    m_lens_pixmap_io <- newIORef gno
    m_lens_image_io <- newIORef gno
    m_fontSize_io <- newIORef (24::Int)
    m_animated_io <- newIORef False
    m_intensity_io <- newIORef (100::Double)
    m_radius_io <- newIORef m_radius
    m_pos_io <- newIORef m_pos
    m_offset_io <- newIORef pointFNull
    m_direction_io <- newIORef m_direction
    m_mousePress_io <- newIORef pointFNull
    m_mouseDrag_io <- newIORef False
    m_smallScreen_io <- newIORef smallScreen
    let npdr = PathDeformRenderer
                naf
                m_repaintTimer
                m_repaintTracker
                m_paths_io
                m_advances_io
                m_pathBounds_io
                m_text_io
                m_lens_pixmap_io
                m_lens_image_io
                m_fontSize_io
                m_animated_io
                m_intensity_io
                m_radius_io
                m_pos_io
                m_offset_io
                m_direction_io
                m_mousePress_io
                m_mouseDrag_io
                m_smallScreen_io
    setHandler (pdRenderer_widget npdr) "mousePressEvent(QMouseEvent*)" $ pdRenderer_mousePressEvent npdr
    setHandler (pdRenderer_widget npdr) "mouseReleaseEvent(QMouseEvent*)" $ pdRenderer_mouseReleaseEvent npdr
    setHandler (pdRenderer_widget npdr) "mouseMoveEvent(QMouseEvent*)" $ pdRenderer_mouseMoveEvent npdr
    setHandler (pdRenderer_widget npdr) "timerEvent(QTimerEvent*)" $ pdRenderer_timerEvent npdr
    setHandler (pdRenderer_widget npdr) "(QSize)sizeHint()" $ pdRenderer_sizeHint npdr
    arthurFrame_setPaint naf $ pdRenderer_paint npdr
    pdRenderer_generateLensPixmap npdr
    return npdr

pdRenderer_sizeHint :: PathDeformRenderer -> ArthurWidget -> IO (QSize ())
pdRenderer_sizeHint this widget
  = do
    qSize (600::Int, 550::Int)

pdRenderer_radius :: PathDeformRenderer -> IO Int
pdRenderer_radius pdr = readIORef $ pdRr_m_radius_io pdr

pdRenderer_modRadius :: PathDeformRenderer -> Int -> IO ()
pdRenderer_modRadius pdr radius = modifyIORef (pdRr_m_radius_io pdr) (\_ -> radius)

pdRenderer_animated :: PathDeformRenderer -> IO Bool
pdRenderer_animated pdr = readIORef $ pdRr_m_animated_io pdr

pdRenderer_modAnimated :: PathDeformRenderer -> Bool -> IO ()
pdRenderer_modAnimated pdr animated = modifyIORef (pdRr_m_animated_io pdr) (\_ -> animated)

pdRenderer_pos :: PathDeformRenderer -> IO PointF
pdRenderer_pos pdr = readIORef $ pdRr_m_pos_io pdr

pdRenderer_modPos :: PathDeformRenderer -> PointF -> IO ()
pdRenderer_modPos pdr pos = modifyIORef (pdRr_m_pos_io pdr) (\_ -> pos)

pdRenderer_direction :: PathDeformRenderer -> IO PointF
pdRenderer_direction pdr = readIORef $ pdRr_m_direction_io pdr

pdRenderer_modDirection :: PathDeformRenderer -> PointF -> IO ()
pdRenderer_modDirection pdr dir = modifyIORef (pdRr_m_direction_io pdr) (\_ -> dir)

pdRenderer_fontSize :: PathDeformRenderer -> IO Int
pdRenderer_fontSize pdr = readIORef $ pdRr_m_fontSize_io pdr

pdRenderer_modFontSize :: PathDeformRenderer -> Int -> IO ()
pdRenderer_modFontSize pdr fontSize = modifyIORef (pdRr_m_fontSize_io pdr) (\_ -> fontSize)

pdRenderer_text :: PathDeformRenderer -> IO String
pdRenderer_text pdr = readIORef $ pdRr_m_text_io pdr

pdRenderer_modText :: PathDeformRenderer -> String -> IO ()
pdRenderer_modText pdr text = modifyIORef (pdRr_m_text_io pdr) (\_ -> text)

pdRenderer_paths :: PathDeformRenderer -> IO [QPainterPath ()]
pdRenderer_paths pdr = readIORef $ pdRr_m_paths_io pdr

pdRenderer_pathsApp :: PathDeformRenderer -> QPainterPath () -> IO ()
pdRenderer_pathsApp pdr path = modifyIORef (pdRr_m_paths_io pdr) (\paths -> paths ++ [path])

pdRenderer_pathsClear :: PathDeformRenderer -> IO ()
pdRenderer_pathsClear pdr = modifyIORef (pdRr_m_paths_io pdr) (\_ -> [])

pdRenderer_pathsMap :: PathDeformRenderer -> QMatrix () -> IO ()
pdRenderer_pathsMap pdr mm
  = modifyIORef (pdRr_m_paths_io pdr) (\paths -> subPathsMap paths mm)
  where
    subPathsMap [] _ = []
    subPathsMap (x:xs) mm = [unsafePerformIO $ qmap mm x] ++ (subPathsMap xs mm)

pdRenderer_pathBounds :: PathDeformRenderer -> IO RectF
pdRenderer_pathBounds pdr = readIORef $ pdRr_m_pathBounds_io pdr

pdRenderer_modPathBounds :: PathDeformRenderer -> RectF -> IO ()
pdRenderer_modPathBounds pdr rect = modifyIORef (pdRr_m_pathBounds_io pdr) (\_ -> rect)

pdRenderer_lensImage :: PathDeformRenderer -> IO (QImage ())
pdRenderer_lensImage pdr = readIORef $ pdRr_m_lens_image_io pdr

pdRenderer_modLensImage :: PathDeformRenderer -> QImage() -> IO ()
pdRenderer_modLensImage pdr img = modifyIORef (pdRr_m_lens_image_io pdr) (\_ -> img)

pdRenderer_lensPixmap :: PathDeformRenderer -> IO (QPixmap ())
pdRenderer_lensPixmap pdr = readIORef $ pdRr_m_lens_pixmap_io pdr

pdRenderer_modLensPixmap :: PathDeformRenderer -> QPixmap() -> IO ()
pdRenderer_modLensPixmap pdr pix = modifyIORef (pdRr_m_lens_pixmap_io pdr) (\_ -> pix)

pdRenderer_intensity :: PathDeformRenderer -> IO Double
pdRenderer_intensity pdr = readIORef $ pdRr_m_intensity_io pdr

pdRenderer_modIntensity :: PathDeformRenderer -> Double -> IO ()
pdRenderer_modIntensity pdr ity = modifyIORef (pdRr_m_intensity_io pdr) (\_ -> ity)

pdRenderer_smallScreen :: PathDeformRenderer -> IO Bool
pdRenderer_smallScreen pdr = readIORef $ pdRr_m_smallScreen_io pdr

pdRenderer_mouseDrag :: PathDeformRenderer -> IO Bool
pdRenderer_mouseDrag pdr = readIORef $ pdRr_m_mouseDrag_io pdr

pdRenderer_modMouseDrag :: PathDeformRenderer -> Bool -> IO ()
pdRenderer_modMouseDrag pdr drag = modifyIORef (pdRr_m_mouseDrag_io pdr) (\_ -> drag)

pdRenderer_mousePress :: PathDeformRenderer -> IO PointF
pdRenderer_mousePress pdr = readIORef $ pdRr_m_mousePress_io pdr

pdRenderer_modMousePress :: PathDeformRenderer -> PointF -> IO ()
pdRenderer_modMousePress pdr press = modifyIORef (pdRr_m_mousePress_io pdr) (\_ -> press)

pdRenderer_offset :: PathDeformRenderer -> IO PointF
pdRenderer_offset pdr = readIORef $ pdRr_m_offset_io pdr

pdRenderer_modOffset :: PathDeformRenderer -> PointF -> IO ()
pdRenderer_modOffset pdr offset = modifyIORef (pdRr_m_offset_io pdr) (\_ -> offset)

pdRenderer_generateLensPixmap :: PathDeformRenderer -> IO ()
pdRenderer_generateLensPixmap this
  = do
    m_prefer_image <- arthurFrame_prefer_image $ pdRenderer_arthurFrame this
    m_radius <- pdRenderer_radius this
    let rad = m_radius + lens_extent
        bsz = rectSize $ circle_bounds (pointF 0.0 0.0) rad 0
    painter <- qPainter_nf ()
    if (m_prefer_image)
     then
      do
      m_lens_image <- qImage (bsz, eQImageFormat_ARGB32_Premultiplied)
      fill m_lens_image (0::Int)
      begin painter m_lens_image
      pdRenderer_modLensImage this m_lens_image
     else
      do
      m_lens_pixmap <- qPixmap bsz
      ct <- qColor etransparent
      fill m_lens_pixmap ct
      begin painter m_lens_pixmap
      pdRenderer_modLensPixmap this m_lens_pixmap
    let frad = fromIntegral rad
        frad35 = (frad * (3.0::Double)) / (5.0::Double)
    gr <- qRadialGradient (frad, frad, frad, frad35, frad35)
    cg1 <- qColor (255::Int, 255::Int, 255::Int, 191::Int)
    setColorAt gr ((0.0::Double), cg1)
    cg2 <- qColor (255::Int, 255::Int, 127::Int, 191::Int)
    setColorAt gr ((0.2::Double), cg2)
    cg3 <- qColor (150::Int, 150::Int, 200::Int, 63::Int)
    setColorAt gr ((0.9::Double), cg3)
    cg4 <- qColor (0::Int, 0::Int, 0::Int, 127::Int)
    setColorAt gr ((0.95::Double), cg4)
    cg5 <- qColor (0::Int, 0::Int, 0::Int, 0::Int)
    setColorAt gr ((1.0::Double), cg5)
    setRenderHint painter (eAntialiasing::RenderHint)
    b1 <- qBrush gr
    setBrush painter b1
    setPen painter eNoPen
    drawEllipse painter (0::Int, 0::Int, width bsz, height bsz)
    qPainter_delete painter

pdRenderer_setText :: PathDeformRenderer -> ArthurWidget -> String -> IO ()
pdRenderer_setText this widget text
  = do
    pdRenderer_modText this text
    f <- qFont "times new roman,utopia"
    setStyleStrategy f eForceOutline
    psz <- pdRenderer_fontSize this
    setPointSize f psz
    setStyleHint f eTimes
    fm <- qFontMetrics f
    pdRenderer_pathsClear this
    let pbi = rectF 0.0 0.0 0.0 0.0
        advance = pointF 0.0 0.0
    if (do_quick text)
     then
      setTextPath_quick this text pbi advance f fm
     else
      do
      path <- qPainterPath ()
      addText path (advance, f, text)
      br <- qboundingRect path ()
      pdRenderer_modPathBounds this br
      pdRenderer_pathsApp this path
    m_pathBounds <- pdRenderer_pathBounds this
    let pb_x = x m_pathBounds 
        pb_y = y m_pathBounds
    mm <- qMatrix (1::Double, 0::Double, 0::Double, 1::Double, (realToFrac (-pb_x))::Double, (realToFrac (-pb_y))::Double)
    pdRenderer_pathsMap this mm
    update widget ()

setTextPath_quick :: PathDeformRenderer -> String -> RectF -> PointF -> QFont () -> QFontMetrics () -> IO ()
setTextPath_quick this [] m_pathBounds  _ _ _
  = pdRenderer_modPathBounds this m_pathBounds

setTextPath_quick this (c:cs) m_pathBounds advance f fm
  = do
    path <- qPainterPath ()
    addText path (advance, f, [c])
    br <- qboundingRect path ()
    let npb = unite m_pathBounds br
    pdRenderer_pathsApp this path
    tfmw <- qwidth fm [c]
    let na = pointF ((x advance) + (fromIntegral tfmw)) 0.0
    setTextPath_quick this cs npb na f fm

do_quick :: String -> Bool
do_quick [] = True
do_quick (x:xs)
  = if ((ux >= 0x44ff) && (ux <= 0x1e00))
     then False
     else do_quick xs 
  where
    ux = ord x

qPointF_inc :: QPointF () -> Double -> Double -> IO (QPointF ())
qPointF_inc p1 x2 y2
  = do
    x1 <- qx p1 ()
    y1 <- qy p1 ()
    let xr = x1 + x2
        yr = y1 + y2
    pr <- qPointF (xr, yr)
    return pr

pdRenderer_lensDeform :: PathDeformRenderer -> QPainterPath () -> PointF -> IO (QPainterPath ())
pdRenderer_lensDeform this source offset
  = do
    path <- qPainterPath ()
    addPath path source
    m_intensity <- pdRenderer_intensity this
    m_pos <- pdRenderer_pos this
    m_radius <- pdRenderer_radius this
    ec <- elementCount path ()
    let flip = m_intensity / (100::Double)
        ox = x offset
        oy = y offset
        px = x m_pos
        py = y m_pos
    ld_sub path 0 ec m_radius ox oy px py flip
    return path
  where
    ld_sub _ i c _ _ _ _ _ _ | i >= c = return ()
    ld_sub path i c m_radius ox oy px py flip
      = do
        ea <- qPainterPath_elementAt path i
        ex <- qPainterPath__Element_x ea
        ey <- qPainterPath__Element_y ea
        let nx = ex + ox
            ny = ey + oy
            dx = nx - px
            dy = ny - py
            fr = fromIntegral m_radius
            len = fr - (sqrt ((dx * dx) + (dy * dy)))
        if (len > 0.0)
         then
          setElementPositionAt
             path (
             i,
             (nx + ((flip * dx * len) / fr)),
             (ny + ((flip * dy * len) / fr)))
         else
          setElementPositionAt path (i, nx, ny)
        ld_sub path (i + 1) c m_radius ox oy px py flip

($~) :: (a -> b) -> IO a -> b
f $~ p = f $ unsafePerformIO p

pdRenderer_paint :: PathDeformRenderer -> ArthurFrame -> QPainter () -> RectF -> IO ()
pdRenderer_paint this frame painter clip
  = do
    m_fontSize <- pdRenderer_fontSize this
    m_pathBounds <- pdRenderer_pathBounds this
    let fwidth = width m_pathBounds
        fheight = height m_pathBounds
        pad_x = 5.0::Double
        pad_y = 5.0::Double
        skip_x = round (fwidth + pad_x + ((fromIntegral m_fontSize) / (2.0::Double)))
        skip_y = round (fheight + pad_y)
    setPen painter eNoPen
    setBrush painter $~ qBrush eblack
    let overlap = round $ pad_x / (2.0::Double)
        widget = pdRenderer_widget this
    w <- qwidth widget ()
    h <- qheight widget ()
    m_paths <- pdRenderer_paths this
    let size = Data.List.length m_paths
        it = round $ top clip
        il = round $ left clip
        ib = round $ bottom clip
        ir = round $ right clip
    pd_paint_sub this 0 skip_x skip_y overlap h w it ib il ir m_paths
    m_pos <- pdRenderer_pos this
    let px = x m_pos
        py = y m_pos
    m_radius <- pdRenderer_radius this
    let mrl = fromIntegral (m_radius + lens_extent) 
        np = pointF (px - mrl) (py - mrl)
    m_prefer_image <- arthurFrame_prefer_image $ pdRenderer_arthurFrame this
    if (m_prefer_image)
     then
      do
      li <- pdRenderer_lensImage this
      drawImage painter (np, li)
     else
      do
      lp <- pdRenderer_lensPixmap this
      drawPixmap painter (np, lp)
  where
    pd_paint_sub :: PathDeformRenderer -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> [QPainterPath ()] -> IO ()
    pd_paint_sub this start_y _ _ _ h _ _ _ _ _ _ | start_y >= h = return ()
    pd_paint_sub this start_y _ _ _ _ b _ _ _ _ _ | start_y > b = return ()
    pd_paint_sub this start_y skip_x skip_y overlap h w t b l r m_paths
      = do
        let start_x = -overlap
        nsx <- pd_paint_sub_sub this start_x start_y skip_x skip_y w t l r m_paths
        pd_paint_sub this (start_y + skip_y) skip_x skip_y (skip_x - (nsx - w)) h w t b l r m_paths
    pd_paint_sub_sub _ start_x _ _ _ w _ _ _ _| start_x >= w = return start_x
    pd_paint_sub_sub this start_x start_y skip_x skip_y w t l r m_paths
      = do
        if ((start_y + skip_y) >= t && (start_x + skip_x) >= l && start_x <= r)
         then
          do
          let sp = pointF (fromIntegral start_x) (fromIntegral start_y)
          mapM_ (drawPath painter)
                [unsafePerformIO $ pdRenderer_lensDeform this path sp | path <- m_paths]
         else
          return ()
        pd_paint_sub_sub this (start_x + skip_x) start_y skip_x skip_y w t l r m_paths

pdRenderer_mousePressEvent :: PathDeformRenderer -> ArthurWidget -> QMouseEvent () -> IO ()
pdRenderer_mousePressEvent this widget mouseEvent
  = do
    arthurFrame_setDescriptionEnabled (pdRenderer_arthurFrame this) widget False 
    stop (pdRenderer_m_repaintTimer this) ()
    m_pos <- pdRenderer_pos this
    mep <- pos mouseEvent ()
    let e_pos = pointF (fromIntegral (x mep)) (fromIntegral (y mep))
    tl <- qLineF (m_pos, e_pos)
    tll <- qlength tl ()
    m_radius <- pdRenderer_radius this
    let m_offset = if (tll <= (fromIntegral m_radius))
                    then
                     pointF ((x m_pos) - (x e_pos)) ((y m_pos) - (y e_pos))
                    else
                     pointF 0.0 0.0
    pdRenderer_modOffset this m_offset
    pdRenderer_modMousePress this e_pos
    m_smallScreen <- pdRenderer_smallScreen this
    pdRenderer_modMouseDrag this $ not m_smallScreen
    pdRenderer_mouseMoveEvent this widget mouseEvent
    
pdRenderer_mouseReleaseEvent :: PathDeformRenderer -> ArthurWidget -> QMouseEvent () -> IO ()
pdRenderer_mouseReleaseEvent this widget mouseEvent
  = do
    buttons <- buttons mouseEvent ()
    m_animated <- pdRenderer_animated this
    if (((qFlags_toInt buttons) == (qEnum_toInt (eNoButton::MouseButton))) && m_animated)
     then
      do
      let m_repaintTimer = pdRenderer_m_repaintTimer this
          m_repaintTracker = pdRenderer_m_repaintTracker this
      start m_repaintTimer (10::Int, widget)
      start m_repaintTracker ()
     else
      return ()
    m_mouseDrag <- pdRenderer_mouseDrag this
    m_smallScreen <- pdRenderer_smallScreen this
    if (not m_mouseDrag && m_smallScreen)
     then
      emitSignal widget "clicked()" ()
     else
      return ()

pdRenderer_mouseMoveEvent :: PathDeformRenderer -> ArthurWidget -> QMouseEvent () -> IO ()
pdRenderer_mouseMoveEvent this widget mouseEvent
  = do
    mep <- pos mouseEvent ()
    let e_pos = pointF (fromIntegral (x mep)) (fromIntegral (y mep))
    m_mouseDrag <- pdRenderer_mouseDrag this
    m_mousePress <- pdRenderer_mousePress this
    tl <- qLineF (m_mousePress, e_pos)
    tll <- qlength tl ()
    nmd <- if (not m_mouseDrag && (tll > 25.0))
            then
             do
             pdRenderer_modMouseDrag this True
             return True
            else
             return m_mouseDrag
    if (nmd)
     then
      do
      m_pos <- pdRenderer_pos this
      m_radius <- pdRenderer_radius this
      m_fontSize <- pdRenderer_fontSize this
      let rectBefore = circle_bounds m_pos m_radius m_fontSize
      e_type <- qtype mouseEvent ()
      let e_pos_x = x e_pos
          e_pos_y = y e_pos
      m_offset <- pdRenderer_offset this
      let m_offset_x = x m_offset
          m_offset_y = y m_offset
      let tp = pointF (e_pos_x + m_offset_x) (e_pos_y + m_offset_y)
      if (e_type == eMouseMove)
       then
        do
        ntl <- qLineF (m_pos, tp)
        ntll <- qlength ntl ()
        qsetLength ntl $ ntll * 0.1
        m_direction <- pdRenderer_direction this
        dx <- qdx ntl ()
        dy <- qdy ntl ()
        let dir_x = x m_direction
            dir_y = y m_direction
            dp = pointF ((dir_x + dx) / 2.0) ((dir_y + dy) / 2.0)
        pdRenderer_modDirection this dp
       else
        return ()
      pdRenderer_modPos this tp
      m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame this
      if (m_use_opengl)
       then
        update widget ()
       else
        do
        let rectAfter = circle_bounds tp m_radius m_fontSize
            ur = unite rectBefore rectAfter
        update widget ur
        return ()
     else
      return ()

pdRenderer_timerEvent :: PathDeformRenderer -> ArthurWidget -> QTimerEvent () -> IO ()
pdRenderer_timerEvent this widget timerEvent
  = do
    etid <- timerId timerEvent ()
    mtid <- timerId (pdRenderer_m_repaintTimer this) ()
    if (etid == mtid)
     then
      do
      m_direction <- pdRenderer_direction this
      let zpf = pointF 0.0 0.0
          dx = x m_direction
          dy = y m_direction
      tl <- qLineF (zpf, m_direction)
      tll <- qlength tl ()
      let nmd = if (tll > (1.0::Double))
                 then
                  ((dx * (0.995::Double)), (dy * (0.995::Double)))
                 else
                  (dx, dy)
          ndx = fst nmd
          ndy = snd nmd
      time <- restart (pdRenderer_m_repaintTracker this) ()
      m_pos <- pdRenderer_pos this
      m_radius <- pdRenderer_radius this
      m_fontSize <- pdRenderer_fontSize this
      let rectBefore = circle_bounds m_pos m_radius m_fontSize
          it = fromIntegral time
          nmd2 = if (time > 0)
                  then
                   (((fst nmd) * it * (0.1::Double)), ((snd nmd) * it * (0.1::Double)))
                  else
                   ((fst nmd), (snd nmd))
          mdx = fst nmd2
          mdy = snd nmd2
          m_pos_x = x m_pos
          m_pos_y = y m_pos
      ww <- qwidth widget ()
      wh <- qheight widget ()
      let fw = fromIntegral ww
          fh = fromIntegral wh
          m_pos_x2 = m_pos_x + mdx
          m_pos_y2 = m_pos_y + mdy
          fr = fromIntegral m_radius
          nx = case (m_pos_x2) of
                _ | ((m_pos_x2 - fr) < 0.0) -> (-ndx, fr)
                _ | ((m_pos_x2 + fr) > fw) -> (-ndx, (fw - fr))
                _                          -> (ndx, m_pos_x2)
          ny = case (m_pos_y2) of
                _ | ((m_pos_y2 - fr) < 0.0) -> (-ndy, fr)
                _ | ((m_pos_y2 + fr) > fh) -> (-ndy, (fh - fr))
                _                          -> (ndy, m_pos_y2)
          m_direction2 = pointF (fst nx) (fst ny)
          m_pos2 = pointF (snd nx) (snd ny)
      pdRenderer_modDirection this m_direction2
      pdRenderer_modPos this m_pos2
      m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame this
      if (m_use_opengl)
       then
        update widget ()
       else
        do
        let rectAfter = circle_bounds m_pos2 m_radius m_fontSize
            ur = unite rectBefore rectAfter
        update widget ur
        qApplicationSyncX ()
        return ()
     else
      return ()


pdRenderer_setRadius :: PathDeformRenderer -> ArthurWidget -> Int -> IO ()
pdRenderer_setRadius this widget radius
  = do
    m_radius <- pdRenderer_radius this
    let mr = max m_radius radius
    pdRenderer_modRadius this radius
    pdRenderer_generateLensPixmap this
    m_animated <- pdRenderer_animated this
    if ((not m_animated) || (radius < mr))
     then
      do
      m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame this
      if (m_use_opengl)
       then
        update widget ()
       else
        do
        m_pos <- pdRenderer_pos this
        m_fontSize <- pdRenderer_fontSize this
        let cb = circle_bounds m_pos mr m_fontSize
        update widget cb
     else
      return ()

pdRenderer_setIntensity :: PathDeformRenderer -> ArthurWidget -> Int -> IO ()
pdRenderer_setIntensity this widget intensity
  = do
    pdRenderer_modIntensity this (fromIntegral intensity)
    m_animated <- pdRenderer_animated this
    if (not m_animated)
     then
      do
      m_use_opengl <- arthurFrame_use_opengl $ pdRenderer_arthurFrame this
      if (m_use_opengl)
       then
        update widget ()
       else
        do
        m_pos <- pdRenderer_pos this
        m_radius <- pdRenderer_radius this
        m_fontSize <- pdRenderer_fontSize this
        let cb = circle_bounds m_pos m_radius m_fontSize
        update widget cb
     else
      return ()

pdRenderer_setFontSize :: PathDeformRenderer -> ArthurWidget -> Int -> IO ()
pdRenderer_setFontSize this widget fontSize
  = do
    pdRenderer_modFontSize this fontSize
    m_text <- pdRenderer_text this
    pdRenderer_setText this widget m_text

pdRenderer_setAnimated :: PathDeformRenderer -> ArthurWidget -> Bool -> IO ()
pdRenderer_setAnimated this widget animated
  = do
    pdRenderer_modAnimated this animated
    let m_repaintTimer = pdRenderer_m_repaintTimer this
    if (animated)
     then
      do
      start m_repaintTimer (25::Int, widget)
      start (pdRenderer_m_repaintTracker this) ()
     else
      do
      stop m_repaintTimer ()

circle_bounds :: PointF -> Int -> Int -> Rect
circle_bounds center radius compensation
  = let cx = x center
        cy = y center
        fr = fromIntegral radius
        fc = fromIntegral compensation
        rx = round $ cx - fr - fc
        ry = round $ cy - fr - fc
        wh = round $ (fr + fc) * 2
    in
        rect rx ry wh wh
   
main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "deform.rcc"
    args <- getArgs
    let smallScreen = ((Data.List.find (=="-small-screen") args) /= Nothing) 
    pdw <- pathDeformWidget (objectCast objectNull) smallScreen 
    let pdww = pdWidget_widget pdw
    setStyleChildren pdww =<< arthurStyle
    if (smallScreen)
     then
      do
      let pdcw = pdControls_widget $ pdWidget_controls pdw
      setStyleChildren pdcw =<< arthurStyle
      showFullScreen pdww ()
     else
      qshow pdww ()
    ok <- qApplicationExec ()
    returnGC

