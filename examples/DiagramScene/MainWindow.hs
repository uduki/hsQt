{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : MainWindow.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.MainWindow (
  MainWindow, createMainWindow
  ) where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Gui_h
import Qth.Core
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qth.Core.Size
import Qth.Core.Rect
import Qth.Core.Base
import Qtc.Core.QSize
import Qtc.Core.QRectF
import Qtc.Core.QPolygonF
import Qtc.Core.QMatrix
import Qtc.Gui.QPainterPath
import Qtc.Gui.QColor
import Qtc.Core.QVariant
import Qtc.Gui.QPen
import Qtc.Gui.QBrush
import Qtc.Gui.QMainWindow
import Qtc.Gui.QAbstractGraphicsShapeItem
import Qtc.Gui.QGraphicsItem
import Qtc.Enums.Gui.QGraphicsItem
import Qtc.Enums.Core.QLineF
import Qtc.Core.QLineF
import Qtc.Gui.QGraphicsLineItem
import Qtc.Gui.QGraphicsLineItem_h
import Qtc.Gui.QGraphicsPolygonItem
import Qtc.Gui.QGraphicsPolygonItem_h
import Qtc.Gui.QGraphicsTextItem
import Qtc.Gui.QGraphicsTextItem_h
import Qtc.Gui.QGraphicsScene
import Qtc.Gui.QGraphicsScene_h
import Qtc.Gui.QGraphicsSceneMouseEvent
import Qtc.Gui.QGraphicsSceneContextMenuEvent
import Qtc.Gui.QGraphicsView
import Qtc.Gui.QMenu
import Qtc.Gui.QIcon
import Qtc.Gui.QPixmap
import Qtc.Gui.QPainter
import Qtc.Gui.QMenuBar
import Qtc.Gui.QAction
import Qtc.Gui.QKeySequence
import Qtc.Gui.QFont
import Qtc.Enums.Gui.QFont
import Qtc.Gui.QComboBox
import Qtc.Gui.QFontComboBox
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QIntValidator
import Qtc.Gui.QToolButton
import Qtc.Gui.QToolBar
import Qtc.Gui.QButtonGroup
import Qtc.Gui.QToolBox
import Qtc.Gui.QMessageBox
import Qtc.Gui.QWidget
import Qtc.Gui.QGridLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QLabel
import Qtc.Gui.QTextCursor
import Qtc.Enums.Gui.QSizePolicy
import Data.IORef
import Data.IntMap (IntMap)
import qualified Data.IntMap as IntMap
import List
import DiagramScene.MainWindowType
import DiagramScene.DiagramSceneType
import DiagramScene.DiagramScene
import DiagramScene.DiagramItemType
import DiagramScene.DiagramTextItemType
import DiagramScene.ArrowType
import DiagramScene.DiagramItem
import DiagramScene.DiagramTextItem

mainWindow :: IO (MainWindow)
mainWindow = qSubClass $ qMainWindow ()

createMainWindow :: IO MainWindow
createMainWindow
  = do
    mw <- mainWindow
    menuBar <- menuBar mw ()
    fileMenu <- addMenu menuBar "&File"
    itemMenu <- addMenu menuBar "&Item"
    aboutMenu <- addMenu menuBar "&Help"

    scene <- diagramScene itemMenu
    view <- qGraphicsView $ ds_o scene

    frontIcon <- qIcon ":/images/bringtofront.png"
    toFrontAction <- qAction (frontIcon, "Bring to &Front", mw)
    setShortcut toFrontAction =<< qKeySequence "Ctrl+F"
    setStatusTip toFrontAction "Bring item to front"
    connectSlot toFrontAction "triggered()" mw "bringToFront()" $ bringToFront scene

    backIcon <- qIcon ":/images/sendtoback.png"
    sendBackAction <- qAction (backIcon, "Send to &Back", mw)
    setShortcut sendBackAction =<< qKeySequence "Ctrl+B"
    setStatusTip sendBackAction "Send item to back"
    connectSlot sendBackAction "triggered()" mw "sendToBack()" $ sendToBack scene

    deleteIcon <- qIcon ":/images/delete.png"
    deleteAction <- qAction (deleteIcon, "&Delete", mw)
    setShortcut deleteAction =<< qKeySequence "Delete"
    setStatusTip deleteAction "Delete item from diagram"
    connectSlot deleteAction "triggered()" mw "deleteItems()" $ deleteItems scene

    exitAction <- qAction ("E&xit", mw)
    setShortcut exitAction =<< qKeySequence "Ctrl+X"
    setStatusTip exitAction "Quit Scenediagram example"
    connectSlot exitAction "triggered()" mw "close()" ()

    boldAction <- qAction ("Bold", mw)
    setCheckable boldAction True
    pm <- qPixmap ":/images/bold.png"
    boldIcon <- qIcon pm
    setIcon boldAction boldIcon
    setShortcut boldAction =<< qKeySequence "Ctrl+B"

    italicIcon <- qIcon ":/images/italic.png"
    italicAction <- qAction (italicIcon, "Italic", mw)
    setCheckable italicAction True
    setShortcut italicAction =<< qKeySequence "Ctrl+I"

    underlineIcon <- qIcon ":/images/underline.png"
    underlineAction <- qAction (underlineIcon, "Underline", mw)
    setCheckable underlineAction True
    setShortcut underlineAction =<< qKeySequence "Ctrl+U"

    aboutAction <- qAction ("A&bout", mw)
    setShortcut aboutAction =<< qKeySequence "Ctrl+B"
    connectSlot aboutAction "triggered()" mw "about()" $ dsAbout

    fontCombo <- qFontComboBox ()
    fontSizeCombo <- qComboBox ()
    connectSlot fontCombo "currentFontChanged(const QFont &)" mw "currentFontChanged(const QFont &)" $ myCurrentFontChanged scene fontCombo fontSizeCombo boldAction italicAction underlineAction
    setEditable fontSizeCombo True
    mapM_ (\x -> addItem fontSizeCombo $ show x) [x*2 | x <- [4..14]]
    val <- qIntValidator (2::Int, 64::Int, mw);
    setValidator fontSizeCombo val
    connectSlot fontSizeCombo "currentIndexChanged(const QString &)" mw "fontSizeChanged(const QString &)" $ myFontSizeChanged scene fontCombo fontSizeCombo boldAction italicAction underlineAction
    let hfc = handleFontChange scene fontCombo fontSizeCombo boldAction italicAction underlineAction
    connectSlot underlineAction "triggered()" mw "handleFontChange()" $ hfc
    connectSlot boldAction "triggered()" mw "handleFontChange()" $ hfc
    connectSlot italicAction "triggered()" mw "handleFontChange()" $ hfc

    addAction fileMenu exitAction
    addAction itemMenu deleteAction
    addSeparator itemMenu ()
    addAction itemMenu toFrontAction
    addAction itemMenu sendBackAction

    editToolBar <- addToolBar mw "Edit" :: IO (QToolBar ())
    addAction editToolBar deleteAction
    addAction editToolBar toFrontAction
    addAction editToolBar sendBackAction

    fontColorToolButton <- qToolButton ()
    setPopupMode fontColorToolButton eMenuButtonPopup
    pmtc <- qPixmap (50::Int, 80::Int)
    fontColorMenu <- createColorMenu mw "textColorChanged()" (textColorChanged scene fontColorToolButton pmtc) eblack
    setMenu fontColorToolButton fontColorMenu
    textAction <- defaultAction fontColorMenu ()
    fontColorIcon <- createColorToolButtonIcon pmtc ":/images/textpointer.png" =<< qColor eblack
    setIcon fontColorToolButton fontColorIcon
    setAutoFillBackground fontColorToolButton True
    connectSlot fontColorToolButton "clicked()" mw "textButtonTriggered()" $ textButtonTriggered scene fontColorMenu

    fillColorToolButton <- qToolButton ()
    setPopupMode fillColorToolButton eMenuButtonPopup
    pmfc <- qPixmap (50::Int, 80::Int)
    fillColorMenu <- createColorMenu mw "itemColorChanged()" (itemColorChanged scene fillColorToolButton pmfc) ewhite
    setMenu fillColorToolButton fillColorMenu
    fillAction <- defaultAction fillColorMenu ()
    fillColorIcon <- createColorToolButtonIcon pmfc ":/images/floodfill.png" =<< qColor ewhite
    setIcon fillColorToolButton fillColorIcon
    connectSlot fillColorToolButton "clicked()" mw "fillButtonTriggered()" $ fillButtonTriggered scene fillColorMenu

    lineColorToolButton <- qToolButton ()
    setPopupMode lineColorToolButton eMenuButtonPopup
    pmlc <- qPixmap (50::Int, 80::Int)
    lineColorMenu <- createColorMenu mw "lineColorChanged()" (lineColorChanged scene lineColorToolButton pmlc) eblack
    setMenu lineColorToolButton lineColorMenu
    lineAction <- defaultAction lineColorMenu ()
    lineColorIcon <- createColorToolButtonIcon pmlc ":/images/linecolor.png" =<< qColor eblack
    setIcon lineColorToolButton lineColorIcon
    connectSlot lineColorToolButton "clicked()" mw "lineButtonTriggered()" $ lineButtonTriggered scene lineColorMenu

    textToolBar <- addToolBar mw "Font" :: IO (QToolBar ())
    addWidget textToolBar fontCombo
    addWidget textToolBar fontSizeCombo
    addAction textToolBar boldAction
    addAction textToolBar italicAction
    addAction textToolBar underlineAction

    colorToolBar <- addToolBar mw "Color" :: IO (QToolBar ())
    addWidget colorToolBar fontColorToolButton
    addWidget colorToolBar fillColorToolButton
    addWidget colorToolBar lineColorToolButton
    
    pointerButton <- qToolButton ()
    setCheckable pointerButton True
    setChecked pointerButton True
    setIcon pointerButton =<< qIcon ":/images/pointer.png"
    linePointerButton <- qToolButton ()
    setCheckable linePointerButton True
    setIcon linePointerButton =<< qIcon ":/images/linepointer.png"
    pointerTypeGroup <- qButtonGroup ()
    addButton pointerTypeGroup (pointerButton, fromEnum MoveItem)
    addButton pointerTypeGroup (linePointerButton, fromEnum InsertLine)
    connectSlot pointerTypeGroup "buttonClicked(int)" mw "pointerGroupClicked(int)" $ pointerGroupClicked scene pointerTypeGroup
    sceneScaleCombo <- qComboBox ()
    addItems sceneScaleCombo ["50%", "75%", "100%", "125%" ,"150%"]
    setCurrentIndex sceneScaleCombo (2::Int)
    connectSlot sceneScaleCombo "currentIndexChanged(const QString &)" mw "sceneScaleChanged(const QString &)" $ sceneScaleChanged view
    pointerToolbar <- addToolBar mw "Pointer type" :: IO (QToolBar ())
    addWidget pointerToolbar pointerButton
    addWidget pointerToolbar linePointerButton
    addWidget pointerToolbar sceneScaleCombo

    buttonGroup <- qButtonGroup ()
    setExclusive buttonGroup False
    connectSlot buttonGroup "buttonClicked(int)" mw "buttonGroupClicked(int)" $ buttonGroupClicked scene buttonGroup
    bgl <- qGridLayout ()
    cw <- createCellWidget buttonGroup itemMenu "Conditional" Conditional
    addWidget bgl (cw, 0::Int, 0::Int)
    pw <- createCellWidget buttonGroup itemMenu "Process" Step
    addWidget bgl (pw, 0::Int, 1::Int)
    iw <- createCellWidget buttonGroup itemMenu "Input/Output" Io
    addWidget bgl (iw, 1::Int, 0::Int)

    textButton <- qToolButton ()
    setCheckable textButton True
    addButton buttonGroup (textButton, insertTextButton)
    tbpm <- qPixmap ":/images/textpointer.png"

    setIcon textButton =<< qIconPixmap =<< scaled tbpm (30::Int, 30::Int)
    setIconSize textButton $ size 50 50
    tgl <- qGridLayout ()
    addWidget tgl (textButton, 0::Int, 0::Int, fAlignHCenter)
    tglabel <- qLabel "Text"
    addWidget tgl (tglabel, 1::Int, 0::Int , fAlignCenter)
    tw <- qWidget ()
    setLayout tw tgl
    addWidget bgl (tw, 1::Int, 1::Int)
    setRowStretch bgl (3::Int, 10::Int)
    setColumnStretch bgl (2::Int, 10::Int)
    iw <- qWidget ()
    setLayout iw bgl

    bbgpm <- qPixmap ":/images/background1.png"
    wbgpm <- qPixmap ":/images/background2.png"
    gbgpm <- qPixmap ":/images/background3.png"
    nbgpm <- qPixmap ":/images/background4.png"
    let bgim = IntMap.fromList [(fromEnum BlueGrid, bbgpm),
                                (fromEnum WhiteGrid, wbgpm),
                                (fromEnum GrayGrid, gbgpm),
                                (fromEnum NoGrid, nbgpm)]
    backgroundButtonGroup <- qButtonGroup ()
    connectSlot backgroundButtonGroup "buttonClicked(int)" mw "backgroundButtonGroupClicked(int)" $ backgroundButtonGroupClicked scene view backgroundButtonGroup bgim
    bggl <- qGridLayout ()
    bbgc <- createBackgroundCellWidget backgroundButtonGroup "Blue Grid" ":/images/background1.png" BlueGrid
    addWidget bggl (bbgc, 0::Int, 0::Int)
    wbgc <- createBackgroundCellWidget backgroundButtonGroup "White Grid" ":/images/background2.png" WhiteGrid
    addWidget bggl (wbgc, 0::Int, 1::Int)
    gbgc <- createBackgroundCellWidget backgroundButtonGroup "Gray Grid" ":/images/background3.png" GrayGrid
    addWidget bggl (gbgc, 1::Int, 0::Int)
    nbgc <- createBackgroundCellWidget backgroundButtonGroup "No Grid" ":/images/background4.png" NoGrid
    addWidget bggl (nbgc, 1::Int, 1::Int)
    setRowStretch bggl (2::Int, 10::Int);
    setColumnStretch bggl (2::Int, 10::Int);
    bggw <- qWidget ()
    setLayout bggw bggl
    toolBox <- qToolBox ()
    setSizePolicy toolBox (eMaximum, eIgnored)
    tsh <- sizeHint iw ()
    setMinimumWidth toolBox $ width tsh
    addItem toolBox (iw, "Basic Flowchart Shapes")
    addItem toolBox (bggw, "Backgrounds")
    setSceneRect (ds_o scene) $ rectF 0 0 5000 5000
    connectSlot (ds_o scene) "itemInserted(int)" mw "itemInserted(int)" $ myItemInserted scene pointerTypeGroup buttonGroup
    connectSlot (ds_o scene) "textInserted()" mw "textInserted()" $ textInserted scene buttonGroup pointerTypeGroup
    connectSlot (ds_o scene) "itemSelected(QGraphicsTextItem*)" mw "itemSelected(QGraphicsTextItem*)" $ itemSelected fontCombo fontSizeCombo boldAction italicAction underlineAction

    l <- qHBoxLayout ()
    addWidget l toolBox
    addWidget l view
    w <- qWidget ()
    setLayout w l
    setCentralWidget mw w
    setWindowTitle mw "Diagramscene"
    return mw

bringToFront :: DiagramScene -> MainWindow -> IO ()
bringToFront ds mw
  = do
    sis <- selectedItems (ds_o ds) ()
    let si = head sis
    cis <- collidingItems si ()
    zv <- zinc cis (0::Double)
    setZValue si zv
  where
    zinc [] zv = return zv
    zinc (i:is) zv
      = do
        typ <- qtype i ()
        izv <- zValue i ()
        if ((typ == diagramItemType) && (izv >= zv))
         then zinc is (izv + (0.1::Double))
         else zinc is zv

sendToBack :: DiagramScene -> MainWindow -> IO ()
sendToBack ds mw
  = do
    sis <- selectedItems (ds_o ds) ()
    let si = head sis
    cis <- collidingItems si ()
    zv <- zinc cis (0::Double)
    setZValue si zv
  where
    zinc [] zv = return zv
    zinc (i:is) zv
      = do
        typ <- qtype i ()
        izv <- zValue i ()
        if ((typ == diagramItemType) && (izv >= zv))
         then zinc is (izv - (0.1::Double))
         else zinc is zv

deleteItems :: DiagramScene -> MainWindow -> IO ()
deleteItems ds mw
  = do
    sia <- selectedItems (ds_o ds) ()
    mapM_ (\x ->
     do
     typ <- qtype x ()
     if (typ == arrType)
      then
       do
       lx <- qCast_QGraphicsLineItem x
       deleteArrow lx
      else return ()
     ) sia
    sio <- selectedItems (ds_o ds) ()
    mapM_ (\x ->
     do
     typ <- qtype x ()
     case typ of
      _ | typ == diagramItemType
       -> do
          px <- qCast_QGraphicsPolygonItem x
          deleteItem px
      _ | typ == diagramTextItemType
       -> do
          tx <- qGraphicsItemCast_QGraphicsTextItem x
          removeItem (ds_o ds) tx
          qGraphicsTextItem_deleteLater tx
      otherwise
       -> return ()
     ) sio

myCurrentFontChanged :: DiagramScene -> QFontComboBox () -> QComboBox () -> QAction () -> QAction () -> QAction () -> MainWindow -> IO ()
myCurrentFontChanged ds fc fsc ba ia ua mw
  = handleFontChange ds fc fsc ba ia ua mw

myFontSizeChanged :: DiagramScene -> QFontComboBox () -> QComboBox () -> QAction () -> QAction () -> QAction () -> MainWindow -> IO ()
myFontSizeChanged ds fc fsc ba ia ua mw
  = handleFontChange ds fc fsc ba ia ua mw

handleFontChange :: DiagramScene -> QFontComboBox () -> QComboBox () -> QAction () -> QAction () -> QAction () -> MainWindow -> IO ()
handleFontChange ds fc fsc ba ia ua mw
  = do
    cf <- currentFont fc ()
    cs <- currentText fsc ()
    setPointSize cf $ read cs
    cb <- isChecked ba ()
    setWeight cf $ qEnum_toInt $ if (cb) then (eBold::Weight) else (eNormal::Weight)
    setItalic cf =<< isChecked ia ()
    setUnderline cf =<< isChecked ua ()
    dsSetFont ds cf

dsAbout :: MainWindow -> IO ()
dsAbout mw
  = qMessageBoxAbout (mw, "About Diagram Scene", "The <b>Diagram Scene</b> example shows use of the graphics framework.")

textColorChanged :: DiagramScene -> QToolButton () -> QPixmap () -> QMenu () -> MainWindow -> IO ()
textColorChanged ds ttb pmtc tcm mw
  = do
    ta <- qCast_QAction =<< sender mw ()
    nc <- qVariantValue_QColor =<< qdata ta ()
    textColorIcon <- createColorToolButtonIcon pmtc ":/images/textpointer.png" nc
    setIcon ttb textColorIcon
    setDefaultAction tcm ta
    textButtonTriggered ds tcm mw

textButtonTriggered :: DiagramScene -> QMenu () -> MainWindow -> IO ()
textButtonTriggered ds tcm mw
  = do 
    ta <- defaultAction tcm ()
    dsSetTextColor ds =<< qVariantValue_QColor =<< qdata ta ()

itemColorChanged :: DiagramScene -> QToolButton () -> QPixmap () -> QMenu () -> MainWindow -> IO ()
itemColorChanged ds ftb pmfc icm mw
  = do
    ia <- qCast_QAction =<< sender mw ()
    nc <- qVariantValue_QColor =<< qdata ia ()
    fillColorIcon <- createColorToolButtonIcon pmfc ":/images/floodfill.png" nc
    setIcon ftb fillColorIcon
    setDefaultAction icm ia
    fillButtonTriggered ds icm mw

fillButtonTriggered :: DiagramScene -> QMenu () -> MainWindow -> IO ()
fillButtonTriggered ds icm mw
  = do
    fa <- defaultAction icm ()
    setItemColor ds =<< qVariantValue_QColor =<< qdata fa ()

lineColorChanged :: DiagramScene -> QToolButton () -> QPixmap () -> QMenu () -> MainWindow -> IO ()
lineColorChanged ds ltb pmlc lcm mw
  = do
    la <- qCast_QAction =<< sender mw ()
    nc <- qVariantValue_QColor =<< qdata la ()
    lineColorIcon <- createColorToolButtonIcon pmlc ":/images/linecolor.png" nc
    setIcon ltb lineColorIcon
    setDefaultAction lcm la
    lineButtonTriggered ds lcm mw

lineButtonTriggered :: DiagramScene -> QMenu () -> MainWindow -> IO ()
lineButtonTriggered ds lcm mw
  = do
    la <- defaultAction lcm ()
    setLineColor ds =<< qVariantValue_QColor =<< qdata la ()

createColorMenu :: MainWindow -> String -> (QMenu () -> MainWindow -> IO ()) -> GlobalColor -> IO (QMenu ()) 
createColorMenu mw slot sf defaultColor
  = do
    let colors = [eblack, ewhite, ered, eblue, eyellow]
        names = ["black", "white", "red", "blue", "yellow"]
    colorMenu <- qMenu ()
    mapM_ (cCMmf mw slot sf defaultColor colorMenu) $ zip colors names
    return colorMenu
  where
    cCMmf mw slot sf defaultColor colorMenu (ci, ni)
      = do
        tca <- qAction (ni, mw)
        setData tca =<< qVariant ci
        tci <- createColorIcon ci
        setIcon tca =<< createColorIcon ci
        connectSlot tca "triggered()" mw slot $ sf colorMenu
        addAction colorMenu tca
        if ((qEnum_toInt ci) == (qEnum_toInt defaultColor))
         then
          setDefaultAction colorMenu tca
         else
          return ()

createColorToolButtonIcon :: QPixmap () -> String -> QColor () -> IO (QIcon ())
createColorToolButtonIcon pm1 imf gc
  = do     
    fill pm1 =<< qColor etransparent
    pt <- qPainter_nf pm1
    pm2 <- qPixmap imf
    let target = rect 0 0 50 60
        source = rect 0 0 42 42
    tb <- qBrush gc
    fillRect pt ((rect 0 60 50 80), tb) 
    drawPixmap pt (target, pm2, source)
    qPainter_delete pt
    qIcon pm1

createColorIcon :: GlobalColor -> IO (QIcon ())
createColorIcon gc
  = do     
    pm <- qPixmap (20::Int, 20::Int)
    pt <- qPainter_nf pm
    setPen pt =<< qPen eNoPen
    tb <- qBrush gc
    fillRect pt ((rect 0 0 20 20), tb)
    qPainter_delete pt
    qIcon pm

myItemInserted :: DiagramScene -> QButtonGroup () -> QButtonGroup () ->  MainWindow -> Int -> IO ()
myItemInserted scene ptg bg mw ti
  = do
    tid <- checkedId ptg ()
    setMode scene $ toEnum tid
    tbt <- button bg ti
    setChecked tbt False

textInserted :: DiagramScene -> QButtonGroup () -> QButtonGroup () -> MainWindow -> IO ()
textInserted scene bg ptg mw
  = do
    tid <- checkedId ptg ()
    setMode scene $ toEnum tid
    tbt <- button bg $ insertTextButton
    setChecked tbt False

itemSelected :: QFontComboBox () -> QComboBox () -> QAction () -> QAction () -> QAction () -> MainWindow -> QDiagramTextItem -> IO ()
itemSelected fc fsc ba ia ua mw ti
  = do
    fnt <- font ti ()
    clr <- defaultTextColor ti ()
    fntps <- pointSize fnt ()
    fntwt <- weight fnt ()
    fntit <- italic fnt ()
    fntul <- underline fnt ()
    setCurrentFont fc fnt
    setEditText fsc $ show fntps
    setChecked ba (fntwt == (qEnum_toInt (eBold::Weight)))
    setChecked ia fntit
    setChecked ua fntul

pointerGroupClicked :: DiagramScene -> QButtonGroup () -> MainWindow -> IO ()
pointerGroupClicked scene ptg mw
  = do
    cid <- checkedId ptg ()
    setMode scene $ toEnum cid

sceneScaleChanged :: QGraphicsView () -> MainWindow -> String -> IO ()
sceneScaleChanged view mw scl
  = do
    let pci = elemIndex '%' scl
    case pci of
      Just i
       -> do
          let nscl = (read $ take i scl :: Double) / (100 :: Double)
          oldMatrix <- matrix view ()
          mdx <- qdx oldMatrix ()
          mdy <- qdy oldMatrix ()
          resetMatrix view ()
          qtranslate view (mdx, mdy)
          qscale view (nscl, nscl)
      Nothing
       -> return ()

buttonGroupClicked :: DiagramScene -> QButtonGroup () -> MainWindow -> Int -> IO ()
buttonGroupClicked scene bg mw cid
  = do
    mapM_ (\x ->
      do
      tid <- qid bg x
      if (cid /= tid)
       then setChecked x False
       else return ()
      if (cid == insertTextButton)
       then setMode scene InsertText
       else
        do
        setItemType scene $ toEnum cid
        setMode scene $ InsertItem
     ) =<< buttons bg ()
    returnGC

backgroundButtonGroupClicked :: DiagramScene -> QGraphicsView () -> QButtonGroup () -> IntMap (QPixmap ()) -> MainWindow -> Int -> IO ()
backgroundButtonGroupClicked scene view bbg bgim mw cid
  = do
    mapM_ (\x ->
      do
      tid <- qid bbg x
      if (cid /= tid)
       then setChecked x False
       else return ()
      let mp = IntMap.lookup cid bgim
      case mp of
        Just pm
         -> do
            setBackgroundBrush (ds_o scene) =<< qBrush pm
            update (ds_o scene) ()
            update view ()
        Nothing
         -> return ()
     ) =<< buttons bbg ()

createCellWidget :: QButtonGroup () -> QMenu () -> String -> DiagramType -> IO (QWidget ())
createCellWidget bg mnu txt typ
  = do
    item <- diagramItem ((-1::Int), typ, mnu)
    iicn <- image item
    btn <- qToolButton ()
    setIcon btn =<< qIconPixmap iicn
    setIconSize btn $ size 50 50
    setCheckable btn True
    addButton bg (btn, fromEnum typ)
    cgl <- qGridLayout ()
    addWidget cgl (btn, 0::Int, 0::Int, fAlignHCenter)
    tl <- qLabel txt
    addWidget cgl (tl, 1::Int, 0::Int, fAlignCenter)
    w <- qWidget ()
    setLayout w cgl
    return w

createBackgroundCellWidget :: QButtonGroup () -> String -> String -> BackgroundType -> IO (QWidget ())
createBackgroundCellWidget bbg txt img typ
  = do
    tb <- qToolButton ()
    setText tb txt
    setIcon tb =<< qIcon img
    setIconSize tb $ size 50 50
    setCheckable tb True
    addButton bbg (tb, fromEnum typ)
    bgl <- qGridLayout ()
    addWidget bgl (tb, 0::Int, 0::Int, fAlignHCenter)
    tl <- qLabel txt
    addWidget bgl (tl, 1::Int, 0::Int, fAlignCenter)
    w <- qWidget ()
    setLayout w bgl
    return w

addPointsF :: PointF -> PointF -> PointF
addPointsF p1 p2 = pointF ((x p1) + (x p2)) ((y p1) + (y p2))

