{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Core.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:36
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Enums.Classes.Core (
  QeAbort(..)
  , QeAborted(..)
  , QeAcceptRole(..)
  , QeActionRole(..)
  , QeActive(..)
  , QeAlignBottom(..)
  , QeAlignCenter(..)
  , QeAlignLeft(..)
  , QeAlignRight(..)
  , QeAlignTop(..)
  , QeAllPages(..)
  , QeAnchorHref(..)
  , QeAnchorName(..)
  , QeAntialiasing(..)
  , QeAny(..)
  , QeApply(..)
  , QeApplyRole(..)
  , QeArabic(..)
  , QeArmenian(..)
  , QeBeginning(..)
  , QeBengali(..)
  , QeBold(..)
  , QeBottomToTop(..)
  , QeCacheNone(..)
  , QeCancel(..)
  , QeCaseSensitive(..)
  , QeClipboard(..)
  , QeClose(..)
  , QeClosing(..)
  , QeColor(..)
  , QeConnected(..)
  , QeConnecting(..)
  , QeConnectionRefused(..)
  , QeCritical(..)
  , QeCurrent(..)
  , QeCursor(..)
  , QeCustom(..)
  , QeDashDotDotLine(..)
  , QeDashDotLine(..)
  , QeDestructiveRole(..)
  , QeDisabled(..)
  , QeDiscard(..)
  , QeDotLine(..)
  , QeDown(..)
  , QeEnd(..)
  , QeExeGroup(..)
  , QeExeOther(..)
  , QeExeOwner(..)
  , QeFileType(..)
  , QeFirstButton(..)
  , QeFixed(..)
  , QeFlat(..)
  , QeFont(..)
  , QeForward(..)
  , QeGeorgian(..)
  , QeGreek(..)
  , QeGujarati(..)
  , QeHasMenu(..)
  , QeHebrew(..)
  , QeHelp(..)
  , QeHelpRole(..)
  , QeHostLookup(..)
  , QeHostNotFound(..)
  , QeIgnore(..)
  , QeInformation(..)
  , QeInvalid(..)
  , QeInvalidRole(..)
  , QeInvalidFormat(..)
  , QeItemIsSelectable(..)
  , QeJapanese(..)
  , QeKannada(..)
  , QeKeyboard(..)
  , QeKorean(..)
  , QeLao(..)
  , QeLastButton(..)
  , QeLatin(..)
  , QeLeft(..)
  , QeLeftToRight(..)
  , QeLight(..)
  , QeLine(..)
  , QeList(..)
  , QeMalayalam(..)
  , QeMaxUser(..)
  , QeMenuButtonPopup(..)
  , QeMiddle(..)
  , QeMouse(..)
  , QeMyanmar(..)
  , QeNRoles(..)
  , QeName(..)
  , QeNativeFormat(..)
  , QeNextIsSelected(..)
  , QeNo(..)
  , QeNoButton(..)
  , QeNoError(..)
  , QeNoIcon(..)
  , QeNoRole(..)
  , QeNoSelection(..)
  , QeNoToAll(..)
  , QeNoWrap(..)
  , QeNone(..)
  , QeNormal(..)
  , QeNotAdjacent(..)
  , QeNotRunning(..)
  , QeNull(..)
  , QeOk(..)
  , QeOnlyOne(..)
  , QeOnlyOneTab(..)
  , QeOpen(..)
  , QeOriya(..)
  , QeOther(..)
  , QePageRange(..)
  , QePaused(..)
  , QePen(..)
  , QePolish(..)
  , QePreviousIsSelected(..)
  , QeProxyAuthenticationRequiredError(..)
  , QeReadCorruptData(..)
  , QeReadGroup(..)
  , QeReadOther(..)
  , QeReadOwner(..)
  , QeReadPastEnd(..)
  , QeRectangle(..)
  , QeRefresh(..)
  , QeRegExp(..)
  , QeRejectRole(..)
  , QeReserved(..)
  , QeReset(..)
  , QeResetRole(..)
  , QeRestoreDefaults(..)
  , QeRetry(..)
  , QeRight(..)
  , QeRightToLeft(..)
  , QeRunning(..)
  , QeSave(..)
  , QeSaveAll(..)
  , QeScientificNotation(..)
  , QeSelection(..)
  , QeSingleSelection(..)
  , QeSize(..)
  , QeSyriac(..)
  , QeSystem(..)
  , QeTamil(..)
  , QeTelugu(..)
  , QeText(..)
  , QeTextFormat(..)
  , QeThai(..)
  , QeTibetan(..)
  , QeTime(..)
  , QeToolTip(..)
  , QeTopToBottom(..)
  , QeTrigger(..)
  , QeType(..)
  , QeUnconnected(..)
  , QeUnknownError(..)
  , QeUp(..)
  , QeUser(..)
  , QeUserType(..)
  , QeVersion(..)
  , QeVertical(..)
  , QeVietnamese(..)
  , QeWarning(..)
  , QeWhatsThis(..)
  , QeWindow(..)
  , QeWriteGroup(..)
  , QeWriteOther(..)
  , QeWriteOwner(..)
  , QeYes(..)
  , QeYesRole(..)
  , QeYesToAll(..)
  , QfAbort(..)
  , QfAntialiasing(..)
  , QfApply(..)
  , QfCancel(..)
  , QfClose(..)
  , QfDiscard(..)
  , QfFirstButton(..)
  , QfFlat(..)
  , QfHasMenu(..)
  , QfHelp(..)
  , QfIgnore(..)
  , QfItemIsSelectable(..)
  , QfLastButton(..)
  , QfNo(..)
  , QfNoButton(..)
  , QfNoToAll(..)
  , QfNone(..)
  , QfOk(..)
  , QfOpen(..)
  , QfReset(..)
  , QfRestoreDefaults(..)
  , QfRetry(..)
  , QfSave(..)
  , QfSaveAll(..)
  , QfYes(..)
  , QfYesToAll(..)
  ) where

class QeAbort a where
  eAbort :: a

class QeAborted a where
  eAborted :: a

class QeAcceptRole a where
  eAcceptRole :: a

class QeActionRole a where
  eActionRole :: a

class QeActive a where
  eActive :: a

class QeAlignBottom a where
  eAlignBottom :: a

class QeAlignCenter a where
  eAlignCenter :: a

class QeAlignLeft a where
  eAlignLeft :: a

class QeAlignRight a where
  eAlignRight :: a

class QeAlignTop a where
  eAlignTop :: a

class QeAllPages a where
  eAllPages :: a

class QeAnchorHref a where
  eAnchorHref :: a

class QeAnchorName a where
  eAnchorName :: a

class QeAntialiasing a where
  eAntialiasing :: a

class QeAny a where
  eAny :: a

class QeApply a where
  eApply :: a

class QeApplyRole a where
  eApplyRole :: a

class QeArabic a where
  eArabic :: a

class QeArmenian a where
  eArmenian :: a

class QeBeginning a where
  eBeginning :: a

class QeBengali a where
  eBengali :: a

class QeBold a where
  eBold :: a

class QeBottomToTop a where
  eBottomToTop :: a

class QeCacheNone a where
  eCacheNone :: a

class QeCancel a where
  eCancel :: a

class QeCaseSensitive a where
  eCaseSensitive :: a

class QeClipboard a where
  eClipboard :: a

class QeClose a where
  eClose :: a

class QeClosing a where
  eClosing :: a

class QeColor a where
  eColor :: a

class QeConnected a where
  eConnected :: a

class QeConnecting a where
  eConnecting :: a

class QeConnectionRefused a where
  eConnectionRefused :: a

class QeCritical a where
  eCritical :: a

class QeCurrent a where
  eCurrent :: a

class QeCursor a where
  eCursor :: a

class QeCustom a where
  eCustom :: a

class QeDashDotDotLine a where
  eDashDotDotLine :: a

class QeDashDotLine a where
  eDashDotLine :: a

class QeDestructiveRole a where
  eDestructiveRole :: a

class QeDisabled a where
  eDisabled :: a

class QeDiscard a where
  eDiscard :: a

class QeDotLine a where
  eDotLine :: a

class QeDown a where
  eDown :: a

class QeEnd a where
  eEnd :: a

class QeExeGroup a where
  eExeGroup :: a

class QeExeOther a where
  eExeOther :: a

class QeExeOwner a where
  eExeOwner :: a

class QeFileType a where
  eFileType :: a

class QeFirstButton a where
  eFirstButton :: a

class QeFixed a where
  eFixed :: a

class QeFlat a where
  eFlat :: a

class QeFont a where
  eFont :: a

class QeForward a where
  eForward :: a

class QeGeorgian a where
  eGeorgian :: a

class QeGreek a where
  eGreek :: a

class QeGujarati a where
  eGujarati :: a

class QeHasMenu a where
  eHasMenu :: a

class QeHebrew a where
  eHebrew :: a

class QeHelp a where
  eHelp :: a

class QeHelpRole a where
  eHelpRole :: a

class QeHostLookup a where
  eHostLookup :: a

class QeHostNotFound a where
  eHostNotFound :: a

class QeIgnore a where
  eIgnore :: a

class QeInformation a where
  eInformation :: a

class QeInvalid a where
  eInvalid :: a

class QeInvalidRole a where
  eInvalidRole :: a

class QeInvalidFormat a where
  eInvalidFormat :: a

class QeItemIsSelectable a where
  eItemIsSelectable :: a

class QeJapanese a where
  eJapanese :: a

class QeKannada a where
  eKannada :: a

class QeKeyboard a where
  eKeyboard :: a

class QeKorean a where
  eKorean :: a

class QeLao a where
  eLao :: a

class QeLastButton a where
  eLastButton :: a

class QeLatin a where
  eLatin :: a

class QeLeft a where
  eLeft :: a

class QeLeftToRight a where
  eLeftToRight :: a

class QeLight a where
  eLight :: a

class QeLine a where
  eLine :: a

class QeList a where
  eList :: a

class QeMalayalam a where
  eMalayalam :: a

class QeMaxUser a where
  eMaxUser :: a

class QeMenuButtonPopup a where
  eMenuButtonPopup :: a

class QeMiddle a where
  eMiddle :: a

class QeMouse a where
  eMouse :: a

class QeMyanmar a where
  eMyanmar :: a

class QeNRoles a where
  eNRoles :: a

class QeName a where
  eName :: a

class QeNativeFormat a where
  eNativeFormat :: a

class QeNextIsSelected a where
  eNextIsSelected :: a

class QeNo a where
  eNo :: a

class QeNoButton a where
  eNoButton :: a

class QeNoError a where
  eNoError :: a

class QeNoIcon a where
  eNoIcon :: a

class QeNoRole a where
  eNoRole :: a

class QeNoSelection a where
  eNoSelection :: a

class QeNoToAll a where
  eNoToAll :: a

class QeNoWrap a where
  eNoWrap :: a

class QeNone a where
  eNone :: a

class QeNormal a where
  eNormal :: a

class QeNotAdjacent a where
  eNotAdjacent :: a

class QeNotRunning a where
  eNotRunning :: a

class QeNull a where
  eNull :: a

class QeOk a where
  eOk :: a

class QeOnlyOne a where
  eOnlyOne :: a

class QeOnlyOneTab a where
  eOnlyOneTab :: a

class QeOpen a where
  eOpen :: a

class QeOriya a where
  eOriya :: a

class QeOther a where
  eOther :: a

class QePageRange a where
  ePageRange :: a

class QePaused a where
  ePaused :: a

class QePen a where
  ePen :: a

class QePolish a where
  ePolish :: a

class QePreviousIsSelected a where
  ePreviousIsSelected :: a

class QeProxyAuthenticationRequiredError a where
  eProxyAuthenticationRequiredError :: a

class QeReadCorruptData a where
  eReadCorruptData :: a

class QeReadGroup a where
  eReadGroup :: a

class QeReadOther a where
  eReadOther :: a

class QeReadOwner a where
  eReadOwner :: a

class QeReadPastEnd a where
  eReadPastEnd :: a

class QeRectangle a where
  eRectangle :: a

class QeRefresh a where
  eRefresh :: a

class QeRegExp a where
  eRegExp :: a

class QeRejectRole a where
  eRejectRole :: a

class QeReserved a where
  eReserved :: a

class QeReset a where
  eReset :: a

class QeResetRole a where
  eResetRole :: a

class QeRestoreDefaults a where
  eRestoreDefaults :: a

class QeRetry a where
  eRetry :: a

class QeRight a where
  eRight :: a

class QeRightToLeft a where
  eRightToLeft :: a

class QeRunning a where
  eRunning :: a

class QeSave a where
  eSave :: a

class QeSaveAll a where
  eSaveAll :: a

class QeScientificNotation a where
  eScientificNotation :: a

class QeSelection a where
  eSelection :: a

class QeSingleSelection a where
  eSingleSelection :: a

class QeSize a where
  eSize :: a

class QeSyriac a where
  eSyriac :: a

class QeSystem a where
  eSystem :: a

class QeTamil a where
  eTamil :: a

class QeTelugu a where
  eTelugu :: a

class QeText a where
  eText :: a

class QeTextFormat a where
  eTextFormat :: a

class QeThai a where
  eThai :: a

class QeTibetan a where
  eTibetan :: a

class QeTime a where
  eTime :: a

class QeToolTip a where
  eToolTip :: a

class QeTopToBottom a where
  eTopToBottom :: a

class QeTrigger a where
  eTrigger :: a

class QeType a where
  eType :: a

class QeUnconnected a where
  eUnconnected :: a

class QeUnknownError a where
  eUnknownError :: a

class QeUp a where
  eUp :: a

class QeUser a where
  eUser :: a

class QeUserType a where
  eUserType :: a

class QeVersion a where
  eVersion :: a

class QeVertical a where
  eVertical :: a

class QeVietnamese a where
  eVietnamese :: a

class QeWarning a where
  eWarning :: a

class QeWhatsThis a where
  eWhatsThis :: a

class QeWindow a where
  eWindow :: a

class QeWriteGroup a where
  eWriteGroup :: a

class QeWriteOther a where
  eWriteOther :: a

class QeWriteOwner a where
  eWriteOwner :: a

class QeYes a where
  eYes :: a

class QeYesRole a where
  eYesRole :: a

class QeYesToAll a where
  eYesToAll :: a

class QfAbort a where
  fAbort :: a

class QfAntialiasing a where
  fAntialiasing :: a

class QfApply a where
  fApply :: a

class QfCancel a where
  fCancel :: a

class QfClose a where
  fClose :: a

class QfDiscard a where
  fDiscard :: a

class QfFirstButton a where
  fFirstButton :: a

class QfFlat a where
  fFlat :: a

class QfHasMenu a where
  fHasMenu :: a

class QfHelp a where
  fHelp :: a

class QfIgnore a where
  fIgnore :: a

class QfItemIsSelectable a where
  fItemIsSelectable :: a

class QfLastButton a where
  fLastButton :: a

class QfNo a where
  fNo :: a

class QfNoButton a where
  fNoButton :: a

class QfNoToAll a where
  fNoToAll :: a

class QfNone a where
  fNone :: a

class QfOk a where
  fOk :: a

class QfOpen a where
  fOpen :: a

class QfReset a where
  fReset :: a

class QfRestoreDefaults a where
  fRestoreDefaults :: a

class QfRetry a where
  fRetry :: a

class QfSave a where
  fSave :: a

class QfSaveAll a where
  fSaveAll :: a

class QfYes a where
  fYes :: a

class QfYesToAll a where
  fYesToAll :: a

