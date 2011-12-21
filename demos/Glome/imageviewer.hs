{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : imageviewer.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:48
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Enums.Classes.Core
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Object
import Qtc.Enums.Base
import Qtc.ClassTypes.Core
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QCoreApplication
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QMainWindow
import Qtc.Gui.QLabel
import Qtc.Gui.QPushButton
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QRadioButton
import Qtc.Gui.QScrollArea
import Qtc.Enums.Gui.QSizePolicy
import Qtc.Enums.Gui.QPalette
import Qtc.Gui.QAction
import Qtc.Gui.QKeySequence
import Qtc.Gui.QMenu
import Qtc.Gui.QMenuBar
import Qtc.Gui.QFileDialog
import Qtc.Gui.QMessageBox
import Qtc.Enums.Gui.QMessageBox
import Qtc.Gui.QImage
import Qtc.Enums.Gui.QImage
import Qtc.Gui.QPixmap
import Qtc.Core.QDir
import Qtc.Core.QFileInfo
import Qtc.Gui.QDialog
import Qtc.Gui.QTabWidget
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QGridLayout
import Qtc.Gui.QGroupBox
import Qtc.Gui.QButtonGroup
import Qtc.Gui.QLayout
import Qtc.Gui.QDialogButtonBox
import Qtc.Enums.Gui.QDialogButtonBox
import Qtc.Gui.QLineEdit
import Qtc.Gui.QProgressDialog
import Qtc.Gui.QAbstractScrollArea
import Qtc.Gui.QScrollBar
import Qtc.Gui.QAbstractSlider
import Numeric
import Data.IORef
import Data.Word
import Data.Char
import Qt.Glome hiding (dir)

maybeRead :: Read a => String -> Maybe a 
maybeRead s = case reads s of 
  [(x, str)] | all isSpace str -> Just x 
  _                            -> Nothing

type MyQMainWindow = QMainWindowSc (CMyQMainWindow)
data CMyQMainWindow = CMyQMainWindow

myQMainWindow :: IO (MyQMainWindow)
myQMainWindow = qSubClass (qMainWindow ())

type MyQDialog = QDialogSc (CMyQDialog)
data CMyQDialog = CMyQDialog

myQDialog :: IO (MyQDialog)
myQDialog = qSubClass $ qDialog ()

type MyQTabWidget = QTabWidgetSc (CMyQTabWidget)
data CMyQTabWidget = CMyQTabWidget

myQTabWidget :: IO (MyQTabWidget)
myQTabWidget = qSubClass $ qTabWidget ()

type MyQPushButton = QPushButtonSc (CMyQPushButton)
data CMyQPushButton = CMyQPushButton

myQPushButton :: String -> IO (MyQPushButton)
myQPushButton t = qSubClass $ qPushButton t

data ImgVec = ImgVec {
  img :: IORef (QImage ()),
  pxm :: IORef (QPixmap ()),
  iwidth, iheight,
  tblock_size, tdepth,
  fwidth, fheight,
  strt, s_end,
  scnum,
  skp_s, skp_e :: IORef Int,
  tim, fps :: IORef Double,
  drr, prf :: IORef String}

getIVpxm iv = readIORef (pxm iv)
getIVimg iv = readIORef (img iv)

setIVpxm iv pm
  = do
    cpm <- readIORef (pxm iv)
    modifyIORef (pxm iv) (\_ -> pm)
setIVimg iv im
  = do
    cim <- readIORef (img iv)
    modifyIORef (img iv) (\_ -> im)

newVar i = newIORef i

getVar :: IORef a -> IO a
getVar ioi = readIORef ioi

setVar :: IORef a -> a -> IO ()
setVar ioi i = modifyIORef ioi (\_ -> i)

type CellLineEdit_ a = (IORef a, QLineEdit ())
data CellLineEdit = forall a . QrwCell a => CellLineEdit a
type ColumnLineEdits = [CellLineEdit]
type GridLineEdits = [ColumnLineEdits]

data IGR = IGR {ml :: QHBoxLayout (), gle :: GridLineEdits}
type Prefs = [GridLineEdits]

data ImgAs = ImgAs {zi, zo, ns, fw :: QAction ()}
data NblAs = NblAs {sv, pa :: QAction ()}

main :: IO ()
main
  = do
    app <- qApplication ()
    mainWindow <- createMainWindow app
    i <- qImage ()
    p <- qPixmapFromImage i
    qshow mainWindow ()
    ok <- qApplicationExec ()
    returnGC

createMainWindow :: QApplication () -> IO (MyQMainWindow)
createMainWindow qapp
  = do
    mw <- myQMainWindow
    imageLabel <- qLabel ()
    setBackgroundRole imageLabel eBase
    setSizePolicy imageLabel (eIgnored, eIgnored)
    setScaledContents imageLabel True
    scrollArea <- qScrollArea ()
    setBackgroundRole scrollArea eDark
    setWidget scrollArea imageLabel
    setCentralWidget mw scrollArea
    ti <- qImage ()
    tp <- qPixmapFromImage ti
    npi <- newIORef ti
    npm <- newIORef tp
    nw <- newVar 256
    nh <- newVar 192
    nb <- newVar 32
    nd <- newVar 2
    nfw <- newVar 0
    nfh <- newVar 0
    ns <- newVar 0
    ne <- newVar 0
    nn <- newVar 2 
    nss <- newVar 0 
    nse <- newVar 0 
    ntm <- newVar 0.0
    nfp <- newVar 24.0
    ndir <- newVar ""
    nprf <- newVar "dgi"
    let iv = ImgVec npi npm nw nh nb nd nfw nfh ns ne nn nss nse ntm nfp ndir nprf 
    sf <- newIORef (0.0)
    d <- myQDialog
    mainLayout <- qVBoxLayout ()
    tw <- myQTabWidget
    prefs <- mapM (createTab iv tw)
      [("Image", addImageGrid),
       ("Sequence", addSequenceGrid),
       ("Files", addNamesGrid)]
    addWidget mainLayout tw
    addWidget mainLayout =<< createButtonBox prefs d
    setLayout d mainLayout
    createMenus imageLabel scrollArea sf mw qapp iv d prefs
    setWindowTitle mw "Image Viewer"
    resize mw (500::Int, 400::Int)
    return mw

createTab :: ImgVec -> MyQTabWidget -> (String, (QHBoxLayout () -> ImgVec -> IO GridLineEdits)) -> IO GridLineEdits
createTab iv tw (title, gf)
  = do
    w <- qWidget ()
    l <- qHBoxLayout ()
    gle <- gf l iv
    setLayout w l
    addTab tw (w, title)
    return gle
 
createButtonBox :: Prefs -> MyQDialog -> IO (QWidget a)
createButtonBox prefs dlg
  = do
    buttonBox <- qDialogButtonBox ((fOk + fCancel)::QDialogButtonBoxStandardButtons)
    connectSlot buttonBox "accepted()" dlg "myaccept()" (myAccept prefs)
    connectSlot buttonBox "rejected()" dlg "reject()" ()
    return $ objectCast buttonBox

myAccept :: Prefs -> MyQDialog -> IO ()
myAccept prefs dlg
  = do
    mapM_ readGle prefs
    accept dlg ()

readGle :: GridLineEdits -> IO ()
readGle gle
  = mapM_ readCle gle

writeGle :: GridLineEdits -> IO ()
writeGle gle
  = mapM_ writeCle gle

readCle :: ColumnLineEdits -> IO ()
readCle cle
  = mapM_ readCell cle

writeCle :: ColumnLineEdits -> IO ()
writeCle cle
  = mapM_ writeCell cle

class QrwCell a where
  readCell :: a -> IO ()
  writeCell :: a -> IO ()
  updateCell :: a -> Maybe String -> IO ()

instance QrwCell CellLineEdit where
 readCell (CellLineEdit a) = readCell a
 writeCell (CellLineEdit a) = writeCell a
 updateCell (CellLineEdit a) = updateCell a

instance QrwCell (CellLineEdit_ Int) where
 readCell (ri, re)
  = do
    tw <- text re ()
    case (maybeRead tw) of
     Just x -> setVar ri $ (x :: Int)
     _      -> return ()

 writeCell (ri, re)
  = do
    i <- getVar ri :: IO Int
    clear re ()
    insert re $ show i

 updateCell (ri, re) ms = udc re ms

instance QrwCell (CellLineEdit_ Double) where
 readCell (ri, re)
  = do
    tw <- text re ()
    case (maybeRead tw) of
     Just x -> setVar ri $ (x :: Double)
     _      -> return ()

 writeCell (ri, re)
  = do
    d <- getVar ri :: IO Double
    clear re ()
    insert re $ show d

 updateCell (ri, re) ms = udc re ms

instance QrwCell (CellLineEdit_ String) where
 readCell (ri, re)
  = setVar ri =<< text re ()

 writeCell (ri, re)
  = do
    s <- getVar ri :: IO String
    clear re ()
    insert re s

 updateCell (ri, re) ms = udc re ms

udc :: QLineEdit () -> Maybe String -> IO ()
udc le ms
  = case ms of
     Just s
      -> do
         clear le ()
         insert le s
     Nothing
      -> return ()

addImageGrid :: QHBoxLayout () -> ImgVec -> IO GridLineEdits
addImageGrid grid iv
  = createGGBs grid
      [("Image Dimensions",
        [(iwidth iv, "Width", "90000000"),
         (iheight iv, "Height", "90000000")]),
       ("Trace Parameters",
        [(tblock_size iv, "Block Size", "90000000"),
         (tdepth iv, "Depth", "9000")]),
       ("Final Dimensions",
        [(fwidth iv, "Width", "9000000"),
         (fheight iv, "Height", "9000000")])]

addSequenceGrid :: QHBoxLayout () -> ImgVec -> IO GridLineEdits
addSequenceGrid grid iv
  = createGGB grid
      "Timing"
      [(tim iv, "Elapsed Time", "Xxxxxxxxx"),
       (fps iv, "Frames Per Second", "Xxxxxxxxx")] >>= \nglef ->
    createGGBs grid
      [("Steps",
        [(strt iv, "Start", "9000000"),
         (s_end iv, "End", "9000000")]),
       ("Skip Frames",
        [(skp_s iv, "Start", "9000000"),
         (skp_e iv, "End", "9000000")])] >>= \nglei ->
    return $ nglef:nglei

addNamesGrid :: QHBoxLayout () -> ImgVec -> IO GridLineEdits
addNamesGrid grid iv
  = do
    ng <- createGGBs grid
            [("Image Names",
              [(drr iv, "Directory", ""),
               (prf iv, "Prefix", "")])]
    chooseGroupBox <- qGroupBox "Select"
    cl <- qVBoxLayout ()
    setLayout chooseGroupBox cl
    cb <- myQPushButton "Choose Names"
    addWidget cl cb
    addWidget grid chooseGroupBox
    cbg <- qButtonGroup ()
    clb <- qHBoxLayout ()
    drb <- qRadioButton "Directory"
    prb <- qRadioButton "Prefix"
    brb <- qRadioButton "Both"
    setChecked brb True
    addButton cbg drb
    addButton cbg prb
    addButton cbg brb
    addWidget clb drb
    addWidget clb prb
    addWidget clb brb
    addLayout cl clb
    connectSlot cb "clicked()" cb "chooseNames()" $ chooseNames (drr iv) (prf iv) ng drb prb brb
    return ng

createGGBs _ [] = return []
createGGBs grid ((title, fields):tfs)
  = do
    cgle <- createGGB grid title fields
    ngle <- createGGBs grid tfs
    return (cgle:ngle)

createGGB grid title fields
  = do
    gridGroupBox <- qGroupBox title
    gridLayout <- qGridLayout ()
    gle <- add_lablins gridLayout fields
    setLayout gridGroupBox gridLayout
    addWidget grid gridGroupBox
    return gle

add_lablins :: QrwCell (CellLineEdit_ a) => QGridLayout () -> [(IORef a, String, String)] -> IO ColumnLineEdits
add_lablins lt tms = add_lablinsi lt tms 0 

add_lablinsi :: QrwCell (CellLineEdit_ a) => QGridLayout () -> [(IORef a, String, String)] -> Int -> IO ColumnLineEdits
add_lablinsi _ [] _ = return [] 
add_lablinsi lt ((ioi, t, m):tms) cc
  = do
    nlb <- qLabel t
    nln <- qLineEdit ()
    setInputMask nln m
    addWidget lt (nlb, cc, 0::Int)
    addWidget lt (nln, cc, 1::Int)
    nlns <- add_lablinsi lt tms (cc + 1)
    return ((CellLineEdit (ioi, nln)):nlns)

createMenus :: QLabel () -> QScrollArea () -> IORef Double -> MyQMainWindow -> QApplication () -> ImgVec -> MyQDialog -> Prefs -> IO ()
createMenus il sa sf mw qapp iv d prefs
  = do
    openAct <- cfa "&Open..." "Ctrl+O" True
    saveAct <- cfa "&Save as..." "Ctrl+S" False
    printAct <- cfa "&Print..." "Ctrl+P" False
    exitAct <- cfa "E&xit" "Ctrl+Q" True
    fileMenu <- qMenu ("&File", mw)
    aam fileMenu True [openAct, saveAct, printAct, exitAct]

    zoomInAct <- cva "Zoom &In (25%)" "Ctrl++" False
    zoomOutAct <- cva "Zoom &Out (25%)" "Ctrl+-" False
    normalSizeAct <- cva "&Normal Size" "Ctrl+N" False
    fitToWindowAct <- cva "&Fit to Window" "Ctrl+F" True
    viewMenu <- qMenu ("&View", mw)
    aam viewMenu True [zoomInAct, zoomOutAct, normalSizeAct, fitToWindowAct]

    genAct <- csa "&Generate..." "Ctrl+G"
    prefAct <- csa "&Preferences..." "Ctrl+R"
    toolsMenu <- qMenu ("&Tools", mw)
    scenesMenu <- addMenu toolsMenu "&Scenes"
    gdnScnAct <- qAction ("Geometric Garden", mw)
    setCheckable gdnScnAct True
    sdsScnAct <- qAction ("Colored Shadows", mw)
    setCheckable sdsScnAct True
    cscnum <- getVar (scnum iv)
    aam scenesMenu False [gdnScnAct, sdsScnAct]
    aam toolsMenu False [genAct, prefAct]

    aboutAct <- qAction ("&About", mw);
    aboutQtAct <- qAction ("About &Qt", mw);
    helpMenu <- qMenu ("&Help", mw)
    aam helpMenu False [aboutAct, aboutQtAct]

    mb <- menuBar mw ()
    mapM_ (addMenu mb) [fileMenu, viewMenu, toolsMenu, helpMenu]
    let imgas = ImgAs zoomInAct zoomOutAct normalSizeAct fitToWindowAct
        nblas = NblAs saveAct printAct
    let scnvec = [(1, gdnScnAct), (2, sdsScnAct)]
    mapM_ (\(s, a) -> if (s == cscnum) then setChecked a True else return ()) scnvec
    mapM_ (\(a, ss, sf) -> connectSlot a "triggered()" mw ss sf)
          [(openAct, "open()", (myOpen il sa sf nblas imgas iv)),
           (saveAct, "saveAs()", (saveAs saveAct iv)),
           (printAct, "print()", myPrint),
           (zoomInAct, "zoomIn()", (zoomIn il sa sf zoomInAct zoomOutAct)),
           (zoomOutAct, "zoomOut()", (zoomOut il sa sf zoomInAct zoomOutAct)),
           (normalSizeAct, "normalSize()", (normalSize il sf)),
           (fitToWindowAct, "fitToWindow()", (fitToWindow il sa sf imgas)),
           (genAct, "genScene()", (genScene il sa sf nblas imgas iv)),
           (prefAct, "preferences()", (preferences d prefs)),
           (aboutAct, "about()", myAbout)]
    mapM_ (\a -> connectSlot a "triggered()" mw "switchScene()" (switchScene scnvec (scnum iv)))
          [gdnScnAct, sdsScnAct]
    connectSlot exitAct "triggered()" mw "close()" ()
    connectSlot aboutQtAct "triggered()" qapp "aboutQt()" ()
  where
    cfa txt key ebl = ca txt key ebl False
    cva txt key chk = ca txt key False chk
    csa txt key = ca txt key True False
    ca txt key ebl chk
      = do
        na <- qAction (txt, mw)
        setShortcut na =<< qKeySequence key
        if (not ebl) then setEnabled na False else return ()
        if (chk) then setCheckable na True else return ()
        return na
    aam _ _ [] = return ()
    aam mnu True (a:[])
      = do
        addSeparator mnu ()
        addAction mnu a
    aam mnu ps (a:as)
      = do
        addAction mnu a
        aam mnu ps as

switchScene :: [(Int, QAction ())] -> IORef Int -> MyQMainWindow -> IO ()
switchScene scnvec ioi mw
  = do
    mapM_ (\(s, a) -> setChecked a False) scnvec
    ca <- qCast_QAction =<< sender mw ()
    setChecked ca True
    mapM_ (\(s, a) ->
      do
      ic <- isChecked a ()
      if (ic) then setVar ioi s else return ()
      ) scnvec

genScene :: QLabel () -> QScrollArea () -> IORef Double -> NblAs -> ImgAs -> ImgVec -> MyQMainWindow -> IO ()
genScene il sa sf nas ias iv mw
  = do
    bcp <- qDirCurrentPath ()
    sw <- getVar $ iwidth iv
    sh <- getVar $ iheight iv
    bs <- getVar $ tblock_size iv
    dp <- getVar $ tdepth iv
    sb <- getVar $ strt iv
    se <- getVar $ s_end iv
    sn <- getVar $ scnum iv
    st <- getVar $ tim iv
    sp <- getVar $ fps iv
    csk_s <- getVar $ skp_s iv
    csk_e <- getVar $ skp_e iv
    fnw <- getVar $ fwidth iv
    fnh <- getVar $ fheight iv
    cdr <- getVar $ drr iv
    cpf <- getVar $ prf iv
    let ss = se <= sb
        fsw = fromIntegral sw
        fsh = fromIntegral sh
        sts = se - sb + 1
        rto = if (st == 0.0)
         then 1.0
         else (fromIntegral sts) / (st * sp)
        fms = if (st == 0.0)
         then (fromIntegral sts)
         else floor (st * sp)
        sbf = fromIntegral sb
        cp = if (cdr /= "")
              then cdr
              else bcp
    mb <- qMessageBox mw
    ni <- qImage (sw, sh, eQImageFormat_RGB888)
    progress <- qProgressDialog ("Generating Image...", "Abort", 0::Int, sw, mw)
    setValue progress (0::Int)
    qshow progress ()
    mapM_ 
      (\t ->
          do
          qCoreApplicationProcessEvents ()
          pc <- wasCanceled progress ()
          if (pc)
           then
            return ()
           else
            do
            setValue progress (0::Int)
            qshow progress ()
            qCoreApplicationProcessEvents ()
            let rltm = sbf + ((fromIntegral t) * rto)
            scene <- scn sn sb se (sbf + ((fromIntegral t) * rto))
            gen_blocks_list fsw fsh 32 scene ni progress dp
            qCoreApplicationProcessEvents ()
            pc <- wasCanceled progress ()
            if (pc)
             then
              return ()
             else
              do
              ni_s <- if (((fnw /= sw) && (fnh /= sh)) && ((fnw > 0) && (fnh > 0)))
                       then scaled ni (fnw, fnh)
                       else return ni
              np <- qPixmapFromImage ni_s
              setPixmap il np
              setIVpxm iv np
              setIVimg iv ni_s
              modifyIORef sf (\_ -> 1.0)
              setEnabled (pa nas) True
              setEnabled (fw ias) True
              setEnabled (zi ias) True
              setEnabled (zo ias) True
              setEnabled (ns ias) True
              setEnabled (sv nas) True
              let filename = cp ++ "/" ++ cpf ++ "_" ++ (sr t sb se) ++ ".png"
              save ni filename
              fwchk <- isChecked (fw ias) ()
              if (not fwchk)
               then
                adjustSize il ()
               else
                return ()
          qCoreApplicationProcessEvents ()
          returnGC)
      [csk_s..(fms-1-csk_e)]
    qProgressDialog_delete progress
    returnGC

sr :: Int -> Int -> Int -> String
sr t b e
  = let m = Prelude.max b e
        ml = Prelude.length $ show m
        tl = Prelude.length $ show t
        pl = ml - tl
    in
    (take pl "0000000000") ++ (show t)

preferences :: MyQDialog -> Prefs -> MyQMainWindow -> IO ()
preferences d prefs mw
  = do
    mapM_ writeGle prefs
    qshow d ()

chooseNames :: IORef String -> IORef String -> GridLineEdits -> QRadioButton () -> QRadioButton () -> QRadioButton () -> MyQPushButton -> IO ()
chooseNames dv pv ng drb prb brb this
  = do
    fileName <- qFileDialogGetOpenFileName (this, "Choose Image File Names")
    if (fileName /= "")
     then
      do
      icd <- isChecked drb ()
      icp <- isChecked prb ()
      icb <- isChecked brb ()
      fi <- qFileInfo fileName
      mfp <-
        if (icd || icb)
         then
          do
          fd <- dir fi ()
          fp <- path fd ()
          return $ Just fp
         else
          return Nothing
      mpf <-
        if (icp || icb)
         then
          do
          bn <- baseName fi ()
          return $ Just $ fst $ break ('_'==) bn
         else
          return Nothing          
      updateCle (head ng) [mfp, mpf]
     else
      return ()

updateCle :: ColumnLineEdits -> [Maybe String] -> IO ()
updateCle _ [] = return ()
updateCle [] _ = return ()
updateCle (le:cle) (ms:mss)
  = do
    updateCell le ms
    updateCle cle mss

myOpen :: QLabel () -> QScrollArea () -> IORef Double -> NblAs -> ImgAs -> ImgVec -> MyQMainWindow -> IO ()
myOpen il sa sf nas ias iv mw
  = do
    fileName <- qFileDialogGetOpenFileName (mw, "Open File")
    if (fileName /= "")
     then
      do
      ni <- qImage fileName
      if (objectIsNull ni)
       then
        do
        rb <- qMessageBoxInformation (mw, "Image Viewer", ("Cannot load " ++ fileName ++ ".")) :: IO QMessageBoxStandardButton
        return ()
       else
        do
        w <- qwidth ni ()
        h <- qheight ni ()
        np <- qPixmapFromImage ni
        setPixmap il np
        setIVpxm iv np
        modifyIORef sf (\_ -> 1.0)
        setEnabled (pa nas) True
        setEnabled (fw ias) True
        setEnabled (sv nas) False
        updateActions (fw ias) (zi ias) (zo ias) (ns ias)
        fwchk <- isChecked (fw ias) ()
        if (not fwchk)
         then
          adjustSize il ()
         else
          return ()
      else
       return ()
    returnGC

saveAs :: QAction () -> ImgVec -> MyQMainWindow -> IO ()
saveAs sv iv mw
  = do
    cp <- qDirCurrentPath ()
    fileName <- qFileDialogGetSaveFileName (mw, "Save File As", cp)
    if (fileName /= "")
     then
      do
      civ <- getIVimg iv
      save civ fileName
      setEnabled sv False
     else
      return ()

updateActions :: QAction () -> QAction () -> QAction () -> QAction () -> IO ()
updateActions fw zi zo ns
  = do
    fwchk <- isChecked fw ()
    let nfwchk = not fwchk
     in
      do
      setEnabled zi nfwchk
      setEnabled zo nfwchk
      setEnabled ns nfwchk

scaleImage :: QLabel () -> QScrollArea () -> IORef Double -> Double -> QAction () -> QAction () -> IO ()
scaleImage il sa sf f zi zo
  = do
    pm <- pixmap il ()
    if (objectIsNull pm)
     then
      return ()
     else
      do
      csf <- readIORef sf
      let nsf = csf * f
      modifyIORef sf (\_ -> nsf)
      w <- qwidth pm ()
      h <- qheight pm ()
      resize il ((round (nsf * (fromIntegral w)))::Int, (round (nsf * (fromIntegral h)))::Int)
      adjustScrollBar f =<< horizontalScrollBar sa ()
      adjustScrollBar f =<< verticalScrollBar sa ()
      setEnabled zi $ nsf < 3.0
      setEnabled zo $ nsf > 0.333

adjustScrollBar :: Double -> QScrollBar () -> IO ()
adjustScrollBar f sb
  =
  do
  v <- value sb ()
  ps <- pageStep sb ()
  setValue sb (round ((f * (fromIntegral v)) + ((f - 1.0) * ((fromIntegral ps) / 2.0)))::Int)

zoomIn :: QLabel () -> QScrollArea () -> IORef Double -> QAction () -> QAction () -> MyQMainWindow -> IO ()
zoomIn il sa sf zi zo mw
  = scaleImage il sa sf 1.25 zi zo

zoomOut :: QLabel () -> QScrollArea () -> IORef Double -> QAction () -> QAction () -> MyQMainWindow -> IO ()
zoomOut il sa sf zi zo mw
  = scaleImage il sa sf 0.8 zi zo

normalSize :: QLabel () -> IORef Double -> MyQMainWindow -> IO ()
normalSize il sf mw
  = do
    adjustSize il ()
    modifyIORef sf (\_ -> 1.0)

fitToWindow :: QLabel () -> QScrollArea () -> IORef Double -> ImgAs -> MyQMainWindow -> IO ()
fitToWindow il sa sf ias mw
  = do
    fwchk <- isChecked (fw ias) ()
    setWidgetResizable sa fwchk
    if (not fwchk)
     then
      normalSize il sf mw
     else
      return ()
    updateActions (fw ias) (zi ias) (zo ias) (ns ias)

myPrint :: MyQMainWindow -> IO ()
myPrint mw
  = do
    return ()

myAbout :: MyQMainWindow -> IO ()
myAbout mw
  = do
    return ()

