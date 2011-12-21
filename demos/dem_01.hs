{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : dem_01.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qth.ClassTypes.Core
import Qth.Core.Size
import Qth.Core.Rect
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Base
import Qtc.ClassTypes.Core
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QCoreApplication
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.Core.QTextStream
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.ClassTypes.Tools
import Qtc.Tools.QUiLoader
import Qtc.Tools.QUiLoader_h
import Qtc.Gui.QMainWindow
import Qtc.Gui.QAction
import Qtc.Gui.QTextEdit
import Qtc.Gui.QFileDialog
import Qtc.Core.QDir
import Qtc.Gui.QImage
import Qtc.Gui.QPixmap
import Qtc.Gui.QLabel
import Qtc.Gui.QScrollArea
import Qtc.Gui.QAbstractScrollArea
import Qtc.Gui.QScrollBar
import Qtc.Gui.QAbstractSlider
import Qtc.Enums.Gui.QPalette
import Qtc.Enums.Gui.QSizePolicy
import Qtc.Core.QRect
import Qtc.Core.QSize
import Qtc.Core.QFileInfo
import Data.IORef
import Data.Array.IO
import Data.Array.MArray
import Data.Array.Unboxed
import Data.List
import Numeric
import System.CPUTime

type MainWindow = QMainWindowSc (CMainWindow)
data CMainWindow = CMainWindow

mainWindow :: IO (MainWindow)
mainWindow = qSubClass (qMainWindow ())

type MdiGC = QMainWindowSc (CMdiGC)
data CMdiGC = CMdiGC

mdiGC :: MainWindow -> IO (MdiGC)
mdiGC mw = qSubClass (qMainWindow mw)

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "dem_01.rcc"
    loader <- qUiLoader ()
    mw <- mainWindow
    gcList <- newIORef []
    setHandler loader "(QWidget*)createWidget(const QString&,QWidget*,const QString&)" $ myCreateWidget mw
    uiFile <- qFile ":/dem_01.ui"
    open uiFile fReadOnly
    ui <- load loader uiFile
    close uiFile ()
    ui_init mw gcList ui
    qshow ui ()
    ok <- qApplicationExec ()
    return ()

myCreateWidget :: MainWindow -> QUiLoader () -> String -> QWidget a -> String -> IO (QWidget ())
myCreateWidget mw this cname this_parent name
  = do
    case (cname) of
     _ | cname == "QMainWindow"
      -> do
         setParent mw this_parent
         tp <- qObjectParentSc mw
         setObjectName tp name
         return (objectCast tp)
     _
      -> createWidget_h this (cname, this_parent, name)

ui_init :: MainWindow -> IORef [MdiGC] -> QWidget () -> IO ()
ui_init mw gcList ui
  = do
    ui_c <- findChild ui ("<QTextEdit*>", "centralwidget")
    ui_s <- findChild ui ("<QAction*>", "action_Shape_from_Shading")
    ui_l <- findChild ui ("<QAction*>", "action_Load_Image")
    connectSlot ui_s "triggered()" mw "sfs()" sfs
    connectSlot ui_l "triggered()" mw "load_image()" (load_image ui_c gcList)
    return ()

load_image :: QTextEdit () -> IORef [MdiGC] -> MainWindow -> IO ()
load_image te gcList this
  = do
    hp <- qDirHomePath ()
    let hpi = hp ++ "/tq/dem_01/bmp"
    fileName <- qFileDialogGetOpenFileName (this, "Load Image", hpi, "Bitmap Files (*.bmp)")
    if (fileName /= "")
     then
      do
      insertPlainText te "Image File Name: "
      insertPlainText te =<< qDirToNativeSeparators fileName 
      insertPlainText te "\n"
      (ngc, gcv) <- new_gc te this gcList
      lok <- loadFile_gc te this gcList ngc gcv fileName False
      if (lok)
       then qshow (ui gcv) ()
       else return ()
     else
      return ()
    return ()

sfs :: MainWindow -> IO ()
sfs this
  = return ()

new_gc :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> IO (MdiGC, GCv)
new_gc te this gcList
  = do
    loader <- qUiLoader ()
    ngc <- mdiGC this
    setHandler loader "(QWidget*)createWidget(const QString&,QWidget*,const QString&)" $ myCreateWidget_gc ngc
    uiFile <- qFile ":/dem_01_mdigc_mw.ui"
    open uiFile fReadOnly
    nui <- load loader uiFile
    close uiFile ()
    gcv <- ui_init_gc te this ngc gcList nui
    return (ngc, gcv)

loadFile_gc :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> MdiGC -> GCv -> String -> Bool -> IO (Bool)
loadFile_gc te this gcList cm gcv fn dem
  = do
    tfi <- qFileInfo fn
    tdr <- dir tfi ()
    tpth <- path tdr ()
    tbfn <- baseName tfi ()
    tsuf <- suffix tfi ()
    modifyIORef (pth gcv) (\_ -> tpth)
    modifyIORef (bfn gcv) (\_ -> tbfn)
    modifyIORef (suf gcv) (\_ -> tsuf)
    ti <- qImage ()
    if (not dem)
     then
      do
      lok <- load ti fn
      if (lok)
       then
        do
        tp <- qPixmapFromImage ti
        tg <- allGray ti ()
        insertPlainText te "allGray: "
        if (tg)
         then
          insertPlainText te "true"
         else
          insertPlainText te "false"
        insertPlainText te ", numColors: "
        tn <- numColors ti ()
        insertPlainText te $ show tn
        insertPlainText te "\n"
        lfgc_s1 ti tp gcv cm fn
        return True
       else
        return False
     else
      return False

lfgc_s1 ti tp gcv cm fn
  = do
    modifyIORef (gc_image gcv) (\_ -> ti)
    modifyIORef (gc_pixmap gcv) (\_ -> tp)
    setCurrentFile cm gcv fn
    w <- qwidth ti ()
    h <- qheight ti ()
    let r = rect 0 0 w h
    setGeometry (label gcv) r
    setPixmap (label gcv) tp
    modifyIORef (scaleFactor gcv) (\_ -> 1.0)
    setEnabled (a_fw gcv) True
    updateActions gcv
    ic <- isChecked (a_fw gcv) ()
    if (not ic)
     then adjustSize (label gcv) ()
     else return ()

updateActions :: GCv -> IO ()
updateActions gcv
  = do
    ic <- isChecked (a_fw gcv) ()
    setEnabled (a_zi gcv) (not ic)
    setEnabled (a_zo gcv) (not ic)
    setEnabled (a_ns gcv) (not ic)
    
setCurrentFile :: MdiGC -> GCv -> String -> IO ()
setCurrentFile cm gcv fn
  = do
    tfi <- qFileInfo fn
    cf <- canonicalFilePath tfi ()
    modifyIORef (curFile gcv) (\_ -> cf)
    tuf <- userFriendlyCurrentFile gcv
    setWindowTitle cm $ tuf ++ "[*]"

userFriendlyCurrentFile :: GCv -> IO String
userFriendlyCurrentFile gcv
  = do
    cf <- readIORef $ curFile gcv
    strippedName cf

strippedName :: String -> IO String
strippedName ffn
  = do
    fi <- qFileInfo ffn
    fileName fi ()

myCreateWidget_gc :: MdiGC -> QUiLoader () -> String -> QWidget a -> String -> IO (QWidget ())
myCreateWidget_gc cm this cname this_parent name
  = do
    case (cname) of
     _ | cname == "QMainWindow"
      -> do
         setParent cm this_parent
         tp <- qObjectParent cm
         setObjectName tp name
         return (objectCast tp)
     _
      -> createWidget_h this (cname, this_parent, name)

data GCv = GCv {ui :: QWidget (),
                a_zi,
                a_zo,
                a_ns,
                a_fw :: QAction (),
                label :: QLabel (),
                scrollArea :: QScrollArea (),
                scaleFactor :: IORef Double,
                gc_image :: IORef (QImage ()),
                gc_pixmap :: IORef (QPixmap ()),
                curFile :: IORef String,
                pth :: IORef String,
                bfn :: IORef String,
                suf :: IORef String
               }

ui_init_gc :: QTextEdit () -> MainWindow -> MdiGC -> IORef [MdiGC] -> QWidget () -> IO (GCv)
ui_init_gc te mw cm gcList ui
  = do
    label <- qLabel ()
    setObjectName label "label"
    setSizePolicy label (eIgnored, eIgnored)
    setScaledContents label True
    scrollArea <- qScrollArea cm
    setBackgroundRole scrollArea eDark
    setWidget scrollArea label
    setCentralWidget cm scrollArea
    ui_si <- findChild ui ("<QAction*>", "action_Save_Image")
    ui_V1 <- findChild ui ("<QAction*>", "action_V1")
    ui_V2 <- findChild ui ("<QAction*>", "action_V2")
    ui_V3 <- findChild ui ("<QAction*>", "action_V3")
    ui_zi <- findChild ui ("<QAction*>", "action_Zoom_In")
    ui_zo <- findChild ui ("<QAction*>", "action_Zoom_Out")
    ui_ns <- findChild ui ("<QAction*>", "action_Normal_Size")
    ui_fw <- findChild ui ("<QAction*>", "action_Fit_to_Window")
    sf <- newIORef 0.0
    ti <- newIORef objectNull
    tp <- newIORef objectNull
    ts <- newIORef ""
    td <- newIORef ""
    tb <- newIORef ""
    tu <- newIORef ""
    let gcv = GCv ui ui_zi ui_zo ui_ns ui_fw label scrollArea sf ti tp ts td tb tu
    connectSlot ui_si "triggered()" cm "save_image()" (save_image te mw gcList gcv)
    connectSlot ui_V1 "triggered()" cm "v1()" (v1 te mw gcList gcv)
    connectSlot ui_V2 "triggered()" cm "v2()" (v2 te mw gcList gcv)
    connectSlot ui_V3 "triggered()" cm "v3()" (v3 te mw gcList gcv)
    setEnabled ui_zi False
    connectSlot ui_zi "triggered()" cm "zoomIn()" (zmIn gcv)
    setEnabled ui_zo False
    connectSlot ui_zo "triggered()" cm "zoomOut()" (zmOut gcv)
    setEnabled ui_ns False
    connectSlot ui_ns "triggered()" cm "normalSize()" (normalSize gcv)
    setCheckable ui_fw True
    connectSlot ui_fw "triggered()" cm "fitToWindow()" (fitToWindow gcv)
    return (gcv)

save_image :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> GCv -> MdiGC -> IO ()
save_image te mw gcList gcv cm
  = do
    return ()

v1 :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> GCv -> MdiGC -> IO ()
v1 te mw gcList gcv cm
  = do
    return ()

v2 :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> GCv -> MdiGC -> IO ()
v2 te mw gcList gcv cm
  = do
    return ()

v3 :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> GCv -> MdiGC -> IO ()
v3 te mw gcList gcv cm
  = do
    (ngc, ngcv) <- new_gc te mw gcList
    tpth <- readIORef (pth gcv)
    tbfn <- readIORef (bfn gcv)
    tsuf <- readIORef (suf gcv)
    timg <- readIORef (gc_image gcv)
    let nbfn = tbfn ++ "_V3"
        nfn = tpth ++ "/" ++ nbfn ++ "." ++ tsuf
    modifyIORef (pth ngcv) (\_ -> tpth)
    modifyIORef (bfn ngcv) (\_ -> nbfn)
    modifyIORef (suf ngcv) (\_ -> tsuf)
    modifyIORef (gc_image ngcv) (\_ -> timg)
    modifyIORef gcList (\cl -> ngc:cl)
    do_v3 te mw gcList ngcv ngc nfn
    qshow (ui ngcv) ()
    return ()

data Region_ds = Region_ds {ptr :: Int, done :: Bool}
data Da1_map_ds = Da1_map_ds {avg :: Double, cnt, ctr, prt :: Int}
data Pdf_glb_ds_V3 = Pdf_glb_ds_V3 {g_act :: Bool, g_min_tsh :: Double}
data Pdf_row_ds_V3 = Pdf_row_ds_V3 {r_act :: Bool, r_rf, r_min_tsh :: Double}
data Pdf_pix_ds_V3 = Pdf_pix_ds_V3 {p_act :: Bool, p_rf, p_min_tsh :: Double}

rds_ud = -2
rds_na = -1

udf = -2

do_v3 :: QTextEdit () -> MainWindow -> IORef [MdiGC] -> GCv -> MdiGC -> String -> IO ()
do_v3 te mw gcList gcv cm fn
  = do
    bfn <- readIORef (bfn gcv)
    image <- readIORef (gc_image gcv)
    pixmap <- readIORef (gc_pixmap gcv)
    setWindowTitle cm $ bfn ++ "[*]"
    w <- qwidth image ()
    h <- qheight image ()
    let sz = w * h
    apt_map <- newArray (0, (sz - 1)) False :: IO (IOUArray Int Bool)
    da1_pro <- newArray (0, (sz - 1)) False :: IO (IOUArray Int Bool)
    da1_reg <- newArray (0, (sz - 1)) 0 :: IO (IOUArray Int Int)
    da1_reg_pro <- newArray (0, (sz - 1)) 0 :: IO (IOUArray Int Int)
    ref_map <- newArray (0, (sz - 1)) 0.0 :: IO (IOUArray Int Double)
    da1_ind <- newArray (0, (sz - 1)) udf :: IO (IOUArray Int Int)
    pdf_glb <- newIORef (Pdf_glb_ds_V3 False 0.0)
    pdf_row <- newArray (0, (h - 1)) (Pdf_row_ds_V3 False 0.0 0.0) :: IO (IOArray Int Pdf_row_ds_V3)
    pdf_pix <- newArray (0, (sz - 1)) (Pdf_pix_ds_V3 False 0.0 0.0) :: IO (IOArray Int Pdf_pix_ds_V3)
    da1_map <- newArray (0, (sz - 1)) (Da1_map_ds 0.0 0 0 0) :: IO (IOArray Int Da1_map_ds)
    da1_ndn <- newArray (0, ((sz * 8) - 1)) (Region_ds rds_ud False) :: IO (IOArray Int Region_ds)
    let pdf_nam = fn ++ "." ++ "pdf"
    pdf <- qFile pdf_nam
    ook <- open pdf (fReadOnly + fText)
    if (ook)
     then
      do
      ins <- qTextStream pdf
      process_line_V3 te ins pdf_glb pdf_row pdf_pix w
     else
      return ()
    cur_glb <- readIORef pdf_glb
    im_pdf_row <- freeze pdf_row :: IO (Array Int Pdf_row_ds_V3)
    let min_tsh
         = if (g_act cur_glb)
            then
             g_min_tsh cur_glb
            else
             40
    mapM_ (\i ->
      do
      cur_row <- readArray pdf_row i
      (cur_row_rf, cur_row_min_tsh)
       <- if (r_act cur_row)
           then
            do
            let rf = r_rf cur_row
                min_tsh = r_min_tsh cur_row
            insertPlainText te $ "Act Row: " ++
                                 (show i) ++ ", " ++
                                 (show rf) ++ ", " ++
                                 (show min_tsh) ++ "\n"
            return (rf, min_tsh)
           else
            return (0.0, 0.0)
      mapM_ (\(i, j) ->
        do
        let map_ptr = (i * w) + j
        cur_pix <- readArray pdf_pix map_ptr
        (cur_pix_rf, cur_pix_min_tsh)
         <- if (p_act cur_pix)
             then
              do
              let rf = p_rf cur_pix
                  min_tsh = p_min_tsh cur_pix
              insertPlainText te $ "Act Pix: " ++
                                   (show i) ++ ", " ++
                                   (show j) ++ ", " ++
                                   (show rf) ++ ", " ++
                                   (show min_tsh) ++ "\n"
              return (rf, min_tsh)
             else
              return (0.0, 0.0)
        pi <- pixelIndex image (j, i)
        let cur_val = fromIntegral pi
        writeArray ref_map map_ptr cur_val
        let apt = not $ cur_val < (min_tsh + cur_row_min_tsh + cur_pix_min_tsh)
        writeArray apt_map map_ptr apt
        writeArray da1_pro map_ptr False
        writeArray da1_ind map_ptr map_ptr
        )
        [(i, j) | j <- [0..(w - 1)]]
      )
      [0..(h - 1)]
    insertPlainText te $ "new image: \n" ++
                         "- width, height: " ++
                         (show w) ++ ", " ++
                         (show h) ++ "\n"
    mi <- mapM (\i ->
      do
      mr <- mapM (\(i, j) ->
        do
        let map_ptr = (i * w) + j
        dl <- mapM (\(i, j, map_ptr, k) ->
          do
          let m8k = (map_ptr * 8) + k
              m8p = case k of
                     0 | ((i > 0) && (j > 0))
                      -> map_ptr - w - 1
                     1 | (i > 0)
                      -> map_ptr - w
                     2 | ((i > 0) && (j < (w - 1)))
                      -> map_ptr - w + 1
                     3 | (j < (w - 1))
                      -> map_ptr + 1
                     4 | ((i < (h - 1)) && (j < (w - 1)))
                      -> map_ptr + w + 1
                     5 | (i < (h - 1))
                      -> map_ptr + w
                     6 | ((i < (h - 1)) && (j > 0))
                      -> map_ptr + w - 1
                     7 | (j > 0)
                      -> map_ptr - 1
                     _
                      -> udf
          writeArray da1_ndn m8k $ Region_ds m8p False
          if (m8p /= udf)
           then
            do
            cur_val <- readArray ref_map map_ptr
            dif_val <- readArray ref_map m8p
            return $ cur_val - dif_val
           else
            return 0.0
          )
          [(i, j, map_ptr, k) | k <-[0..7]]
        let dlf = filter (/= 0.0) dl
            cdc = length dlf
            cda = if (cdc > 0) then (sum dlf) / (fromIntegral cdc) else 0.0
            cdm = abs ((h `div` 2) - i) + abs ((w `div` 2) - j)
        if (map_ptr < 21)
         then
          insertPlainText te $ "dl, dlf, cdc, cda, cdm: " ++
                               (show dl) ++ ", " ++
                               (show dlf) ++ ", " ++
                               (show cdc) ++ ", " ++
                               (show cda) ++ ", " ++
                               (show cdm) ++ "\n"
         else
          return ()
        writeArray da1_map map_ptr $ Da1_map_ds cda cdc cdm 0
        return cda 
        )
        [(i, j) | j <- [0..(w - 1)]]
      return (minimum mr, maximum mr)
      )
      [0..(h - 1)]
    let uzmi = unzip mi
        da1_min = minimum $ fst uzmi
        da1_max = maximum $ snd uzmi
        da1_dif = da1_max - da1_min
    cpu_bs <- getCPUTime
    da1_srt <- da1_sort te da1_map [0..(sz - 1)] 1  1
    cpu_as <- getCPUTime
    insertPlainText te $ "sort time: " ++ (show (cpu_as - cpu_bs)) ++ "\n"
    let da1_ind = listArray (0, sz - 1) da1_srt :: UArray Int Int
    da1_pro_cnt <- newIORef 0
    da1_chk_cnt <- newIORef 0 
    da1_reg_cnt <- newIORef 0
    mapM_ (\i ->
      do
      let da1_map_ptr = da1_ind ! i
      c_pro <- readArray da1_pro da1_map_ptr
      c_apt <- readArray apt_map da1_map_ptr
      c_map <- readArray da1_map da1_map_ptr
      c_pro_cnt <- readIORef da1_pro_cnt
      c_chk_cnt <- readIORef da1_chk_cnt
      c_reg_cnt <- readIORef da1_reg_cnt
      if (i < 100)
       then
        insertPlainText te $ "i, mp, c_pro, c_apt, avg c_map: " ++
                             (show i) ++ ", " ++
                             (show da1_map_ptr) ++ ", " ++
                             (show c_pro) ++ ", " ++
                             (show c_apt) ++ ", " ++
                             (show (avg c_map)) ++ "\n"
       else
        return ()
      if ((not c_pro) && c_apt && ((avg c_map) < 5))
       then
        do
        writeArray da1_pro da1_map_ptr True
        writeArray da1_reg da1_map_ptr c_reg_cnt
        let ti = div i w
            tj = mod i w
        insertPlainText te $ "new region: " ++
                             (show c_reg_cnt) ++ "\n" ++
                             "- ind, ptr, i, j: " ++
                             (show i) ++ ", " ++
                             (show da1_map_ptr) ++ ", " ++
                             (show ti) ++ ", " ++
                             (show tj) ++ "\n"
        do_region (-1) da1_map_ptr da1_map apt_map da1_pro da1_pro_cnt ref_map da1_reg da1_reg_cnt da1_ndn True
        check_region da1_map_ptr da1_map da1_pro da1_pro_cnt da1_reg da1_reg_cnt da1_ndn
        nc_pro_cnt <- readIORef da1_pro_cnt
        if (nc_pro_cnt == 1)
         then 
          do
          writeArray da1_pro da1_map_ptr False;
          modifyIORef da1_pro_cnt (\_ -> 0)
         else
          return ()
        ncf_pro_cnt <- readIORef da1_pro_cnt
        insertPlainText te $ "- pro: " ++
                             (show ncf_pro_cnt) ++ "\n"
        if (ncf_pro_cnt == 0)
         then
          return ()
         else
          do
          writeArray da1_reg_pro c_reg_cnt ncf_pro_cnt
          modifyIORef da1_pro_cnt (\_ -> 0)
          modifyIORef da1_chk_cnt (\_ -> 0)
          modifyIORef da1_reg_cnt (\_ -> c_reg_cnt + 1)
       else
        return ()
      )
      [1..(sz - 1)]
    mapM_ (\i ->
      do
      mapM_ (\(i, j) ->
        do
        let map_ptr = (i * w) + j
        c_pro <- readArray da1_pro map_ptr
        if (not c_pro)
         then
          setPixel image (j, i, 255::Int)
         else
          do
          tr <- readArray da1_reg map_ptr
          if (tr < 12)
           then
            setPixel image (j, i, 230::Int)
           else
            setPixel image (j, i, ((mod tr 20) * 10))
        )
        [(i, j) | j <- [0..(w - 1)]]
      )
      [i | i <- [0..(h - 1)]]
    cpu_ar <- getCPUTime
    insertPlainText te $ "regions time: " ++ (show (cpu_ar - cpu_as)) ++ "\n"
    c_pmp <- qPixmapFromImage image
    let gr = rect 0 0 w h
    setGeometry (label gcv) gr
    setPixmap (label gcv) c_pmp
    modifyIORef (scaleFactor gcv) (\_ -> 1.0)
    setEnabled (a_fw gcv) True
    ic <- isChecked (a_fw gcv) ()
    if (not ic)
     then adjustSize (label gcv) ()
     else return ()

undo_region :: Int -> IOArray Int Da1_map_ds -> IOUArray Int Bool -> IORef Int -> IOArray Int Region_ds -> IO ()
undo_region mp map pro pc ndn
  = do
    writeArray pro mp False
    modifyIORef pc (\x -> x - 1)
    c_map <- readArray map mp 
    writeArray map mp $ Da1_map_ds (avg c_map) (cnt c_map) (ctr c_map) (-1)
    mapM_ (\i ->
      do
      c_ndn <- readArray ndn ((mp * 8) + i)
      let td_ptr = ptr c_ndn
      if (td_ptr /= udf)
       then
        do
        t_map <- readArray map td_ptr
        if ((prt t_map) == mp)
         then
          undo_region td_ptr map pro pc ndn
         else
          return ()
       else
        return ()
      )
      [0..7]
        
check_region :: Int -> IOArray Int Da1_map_ds -> IOUArray Int Bool -> IORef Int -> IOUArray Int Int -> IORef Int -> IOArray Int Region_ds -> IO ()
check_region mp map pro pc reg rc ndn
  = do
    cpc <- readIORef pc
    crc <- readIORef rc
    (trc, pn) <- check_region_sl1 0 0 (-2) mp pro reg crc ndn
    if ((not pn) && (trc <= 2))
     then
      check_region_sl2 0 mp map pro pc ndn
     else
      check_region_sl3 0 mp map pro pc reg rc ndn
    npc <- readIORef pc
    if (cpc > npc)
     then
      check_region mp map pro pc reg rc ndn
     else
      return ()
  where
    check_region_sl1 8 trc _ _ _ _ _ _
      = return (trc, False)
    check_region_sl1 i trc ptrc mp pro reg crc ndn
      = do
        c_ndn <- readArray ndn ((mp * 8) + i)
        let td_ptr = ptr c_ndn
        (ntrc, nptrc, pn)
         <- if (td_ptr /= udf)
             then
              do
              td_pro <- readArray pro td_ptr
              td_reg <- readArray reg td_ptr
              if (td_pro && (td_reg == crc))
               then
                if ((i == (ptrc + 1)) || ((i == 7) && (ptrc == 0)))
                 then
                  return (0, 0, True)
                 else
                  return ((trc + 1), i, False)
               else
                return (trc, ptrc, False)
             else
              return (trc, ptrc, False)
        if (pn)
         then
          return (0, True)
         else
          check_region_sl1 (i + 1) ntrc nptrc mp pro reg crc ndn
    check_region_sl2 8 _ _ _ _ _
      = return ()
    check_region_sl2 i mp map pro pc ndn
      = do
        c_ndn <- readArray ndn ((mp * 8) + i)
        let td_ptr = ptr c_ndn
        dr
         <- if (td_ptr /= udf)
             then
              do
              c_map <- readArray map td_ptr
              if ((prt c_map) == mp)
               then
                do
                undo_region td_ptr map pro pc ndn
                return False
               else
                return True
             else
              return True
        if (dr)
         then
          check_region_sl2 (i + 1) mp map pro pc ndn
         else
          return () 
    check_region_sl3 8 _ _ _ _ _ _ _
      = return ()
    check_region_sl3 i mp map pro pc reg rc ndn
      = do
        c_ndn <- readArray ndn ((mp * 8) + i)
        let td_ptr = ptr c_ndn
        if (td_ptr /= udf)
         then
          do
          c_map <- readArray map td_ptr
          if ((prt c_map) == mp)
           then
            check_region td_ptr map pro pc reg rc ndn
           else
            return ()
         else
          return () 
        check_region_sl3 (i + 1) mp map pro pc reg rc ndn

do_region :: Int -> Int -> IOArray Int Da1_map_ds -> IOUArray Int Bool -> IOUArray Int Bool -> IORef Int -> IOUArray Int Double -> IOUArray Int Int -> IORef Int -> IOArray Int Region_ds -> Bool -> IO ()
do_region m mp map apt pro pc ref reg rc ndn pts
  = do
    modifyIORef pc (\x -> x + 1)
    writeArray pro mp True
    crc <- readIORef rc
    writeArray reg mp crc
    c_map <- readArray map mp 
    writeArray map mp $ Da1_map_ds (avg c_map) (cnt c_map) (ctr c_map) m
    if (not pts)
     then
      return ()
     else
      do
      c_ref <- readArray ref mp
      trc <- do_region_sl1 0 0 mp map apt pro c_ref ndn
      if (trc > 2)
       then
        do_region_sl2 0 mp map apt pro pc reg ref rc c_ref ndn pts
       else
        return () 
  where
    do_region_sl1 8 trc _ _ _ _ _ _
      = return trc
    do_region_sl1 i trc mp map apt pro c_ref ndn
      = do
        c_ndn <- readArray ndn ((mp * 8) + i)
        let td_ptr = ptr c_ndn
        ntrc
         <- if (td_ptr /= udf)
             then
              do
              td_pro <- readArray pro td_ptr
              td_apt <- readArray apt td_ptr
              td_map <- readArray map td_ptr
              if ((not td_pro) && td_apt && ((avg td_map) < 5))
               then
                do
                td_ref <- readArray ref td_ptr
                let td_dif = abs $ td_ref - c_ref
                if (td_dif >= 5)
                 then
                  return trc
                 else
                  return $ trc + 1
               else
                return trc
             else
              return trc
        do_region_sl1 (i + 1) ntrc mp map apt pro c_ref ndn
    do_region_sl2 8 _ _ _ _ _ _ _ _ _ _ _
      = return ()
    do_region_sl2 i mp map apt pro pc reg ref rc c_ref ndn pts
      = do
        c_ndn <- readArray ndn ((mp * 8) + i)
        let td_ptr = ptr c_ndn
        ntrc
         <- if (td_ptr /= udf)
             then
              do
              td_pro <- readArray pro td_ptr
              td_apt <- readArray apt td_ptr
              td_map <- readArray map td_ptr
              if ((not td_pro) && td_apt && ((avg td_map) < 5))
               then
                do
                td_ref <- readArray ref td_ptr
                let td_dif = abs $ td_ref - c_ref
                if (td_dif >= 5)
                 then
                  return ()
                 else
                  do_region mp td_ptr map apt pro pc ref reg rc ndn pts
               else
                return ()
             else
              return ()
        do_region_sl2 (i + 1) mp map apt pro pc reg ref rc c_ref ndn pts

da1_sort :: QTextEdit () -> IOArray Int Da1_map_ds -> [Int] -> Int -> Int -> IO [Int]
da1_sort _ _ [] _ _ = return []
da1_sort _ _ [di] _ _ = return [di]
da1_sort te da1_map da1_ind level rl
  = do
    sl <- mapM (\i ->
      do
      cur_map <- readArray da1_map i
      case level of
       1 -> return $ avg cur_map
       2 -> return $ fromIntegral $ cnt cur_map
       3 -> return $ fromIntegral $ ctr cur_map
       otherwise -> return 0.0
      )
      da1_ind
    let zl = zip da1_ind sl
        smp_avg = (sum sl) / (fromIntegral (length sl))
        tp = head sl
        td = abs $ smp_avg - tp
        pivot = da1_pivot tp td smp_avg $ tail sl
        less = fst $ unzip $ filter (\i -> (snd i) < pivot) zl
        eqls = fst $ unzip $ filter (\i -> (snd i) == pivot) zl
        more = fst $ unzip $ filter (\i -> (snd i) > pivot) zl
{-
    insertPlainText te $ "sl 0-20, sum sl, len sl: " ++
                         (show (take 21 sl)) ++ ", " ++
                         (show (sum sl)) ++ ", " ++
                         (show (length sl)) ++ "\n"
    insertPlainText te $ "smp_avg, tp, td, pivot, len less, len eqls, len more: " ++
                         (show smp_avg) ++ ", " ++
                         (show tp) ++ ", " ++
                         (show td) ++ ", " ++
                         (show pivot) ++ ", " ++
                         (show (length less)) ++ "," ++
                         (show (length eqls)) ++ "," ++
                         (show (length more)) ++ "\n"
-}
    if (level < 3)
     then
      do
      tsl <- da1_sort te da1_map less level (rl + 1)
      tse <- da1_sort te da1_map eqls (level + 1) (rl + 1)
      tsm <- da1_sort te da1_map more level (rl + 1)
      return $ tsl ++ tse ++ tsm
     else
      do
      tsl <- da1_sort te da1_map less 3 (rl + 1)
      tsm <- da1_sort te da1_map more 3 (rl + 1)
      return $ tsl ++ eqls ++ tsm

da1_pivot :: Double -> Double -> Double -> [Double] -> Double
da1_pivot tp _ _ [] = tp
da1_pivot tp td smp_avg (s:ss)
  = let ttd = abs $ smp_avg - s
    in
    if (ttd < td)
     then da1_pivot s ttd smp_avg ss
     else da1_pivot tp td smp_avg ss

process_line_V3 :: QTextEdit () -> QTextStream () -> IORef Pdf_glb_ds_V3 -> IOArray Int Pdf_row_ds_V3 -> IOArray Int Pdf_pix_ds_V3 -> Int -> IO ()
process_line_V3 te ins pdf_glb pdf_row pdf_pix w
  = do
    ae <- atEnd ins ()
    if (not ae)
     then
      do
      line <- readLine ins ()
      case (line) of
       _ | isPrefixOf "Global" line
        -> do
           let ds1 = drop 7 line
           let ls1 = takeWhile (/= ' ') ds1
           lf1 <- case readFloat ls1 of
                   [(f, s)] -> return $ realToFrac f 
                   _        -> return 0.0
           insertPlainText te $ "PDF Global: " ++ (show lf1) ++ "\n"
           modifyIORef pdf_glb (\_ -> Pdf_glb_ds_V3 True lf1)
       _ | isPrefixOf "Row" line
        -> do
           let ds1 = drop 4 line
           let ts1 = takeWhile (/= ' ') ds1
           td1 <- case readDec ts1 of
                   [(d, s)] -> return $ d
                   _        -> return 0
           let ds2 = drop ((length ts1) + 1) ds1
           let ls2 = takeWhile (/= ' ') ds2
           lf2 <- case readFloat ls2 of
                   [(f, s)] -> return $ realToFrac f
                   _        -> return 0.0
           let ds3 = drop ((length ls2) + 1) ds2
           let ls3 = takeWhile (/= ' ') ds3
           lf3 <- case readFloat ls3 of
                   [(f, s)] -> return $ realToFrac f
                   _        -> return 0.0
           insertPlainText te $ "PDF Row: " ++
                                (show td1) ++ "," ++
                                (show lf2) ++ "," ++
                                (show lf3) ++ "\n"
           writeArray pdf_row td1 $ Pdf_row_ds_V3 True lf2 lf3
       _ | isPrefixOf "Pixel" line
        -> do
           let ds1 = drop 6 line
           let ts1 = takeWhile (/= ' ') ds1
           td1 <- case readDec ts1 of
                   [(d, s)] -> return $ d
                   _        -> return 0
           let ds2 = drop ((length ts1) + 1) ds1
           let ts2 = takeWhile (/= ' ') ds2
           td2 <- case readDec ts2 of
                   [(d, s)] -> return $ d
                   _        -> return 0
           let ds3 = drop ((length ts2) + 1) ds2
           let ls3 = takeWhile (/= ' ') ds3
           lf3 <- case readFloat ls3 of
                   [(f, s)] -> return $ realToFrac f
                   _        -> return 0.0
           let ds4 = drop ((length ls3) + 1) ds3
           let ls4 = takeWhile (/= ' ') ds4
           lf4 <- case readFloat ls4 of
                   [(f, s)] -> return $ realToFrac f
                   _        -> return 0.0
           insertPlainText te $ "PDF Pix: " ++
                                (show td1) ++ "," ++
                                (show td2) ++ "," ++
                                (show lf3) ++ "," ++
                                (show lf4) ++ "\n"
           writeArray pdf_pix (td1 + (w * td2)) $ Pdf_pix_ds_V3 True lf3 lf4
       _
        -> return ()
      process_line_V3 te ins pdf_glb pdf_row pdf_pix w
     else
      return ()

zmIn :: GCv -> MdiGC -> IO ()
zmIn gcv cm
  = scaleImage gcv 1.25

zmOut :: GCv -> MdiGC -> IO ()
zmOut gcv cm
  = scaleImage gcv 0.8

normalSize :: GCv -> MdiGC -> IO ()
normalSize gcv cm
  = do
    adjustSize (label gcv) ()
    modifyIORef (scaleFactor gcv) (\_ -> 1.0)

fitToWindow :: GCv -> MdiGC -> IO ()
fitToWindow gcv cm
  = do
    ic <- isChecked (a_fw gcv) ()
    setWidgetResizable (scrollArea gcv) ic
    if (not ic)
     then normalSize gcv cm
     else return ()
    updateActions gcv
    return ()

scaleImage :: GCv -> Double -> IO ()
scaleImage gcv factor
  = do
    let l = label gcv
        f = scaleFactor gcv
        a = scrollArea gcv
        zi = a_zi gcv
        zo = a_zo gcv
    cf <- readIORef f
    let nf = cf * factor
    modifyIORef f (\_ -> nf)
    p <- pixmap l ()
    pw <- qwidth p ()
    ph <- qheight p ()
    let npw = (round $ (fromIntegral pw) * nf) :: Int
        nph = (round $ (fromIntegral ph) * nf) :: Int
        ns = size npw nph
    resize l ns
    h <- horizontalScrollBar a ()
    v <- verticalScrollBar a ()
    adjustScrollBar h nf
    adjustScrollBar v nf
    setEnabled zi $ nf < 3.0
    setEnabled zo $ nf > 0.333

adjustScrollBar :: QScrollBar () -> Double -> IO ()
adjustScrollBar b f
  = do
    v <- value b ()
    p <- pageStep b ()
    let vf = f * (fromIntegral v)
        fp = (f - 1) * ((fromIntegral p) / 2)
    setValue b $ (round (vf + fp)::Int)
    
