//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonDescMgrExt.h"
#import "IRecordPermissionCheckExt.h"
#import "ISysCallCheckExt.h"
#import "MMGrowTextViewDelegate.h"
#import "MMTransparentButtonDelegate.h"
#import "SelectAttachmentViewControllerDelegate.h"
#import "ShortVideoBarDelegate.h"
#import "UITextViewDelegate.h"
#import "VoiceInputViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class ALAssetsLibrary, CAGradientLayer, EmoticonBoardView, MMEmoticonView, MMGrowTextView, MMTransparentButton, NSString, NSURL, RecordView, SelectAttachmentView, SelectAttachmentViewController, ShortVideoToolbar, UIButton, UIView, VoiceInputView;

@interface MMInputToolView : MMUIView <UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, MMGrowTextViewDelegate, MMTransparentButtonDelegate, SelectAttachmentViewControllerDelegate, VoiceInputViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IRecordPermissionCheckExt, EmoticonDescMgrExt, ShortVideoBarDelegate>
{
    UIButton *_inputModeChangeButton;
    UIView *_toolView;
    VoiceInputView *_voiceInputView;
    SelectAttachmentView *_attachmentView;
    EmoticonBoardView *_expressionView;
    MMGrowTextView *_textView;
    UIButton *_attachmentButton;
    UIButton *_expressionDoneButton;
    UIView *_recordingTipsView;
    MMTransparentButton *_recordButton;
    UIButton *_expressionButton;
    RecordView *_recordView;
    UIButton *_sendCaptrueView;
    UIButton *m_quickSendEmoticonBackView;
    UIView *m_quickSendEmoticonView;
    MMEmoticonView *m_emoticonView;
    long long _keyboardHeight;
    int _inputMode;
    int _positionMode;
    int _contentMode;
    id <MMInputToolViewDelegate> _delegate;
    SelectAttachmentViewController *m_selectAttachmentViewController;
    long long iMuteCount;
    int _recordStatus;
    id <MMInputToolViewCustomizationDelegate> _uiDelegate;
    NSURL *_nsLastCaptrueAssetURL;
    ALAssetsLibrary *_oLibrary;
    _Bool m_bPositioning;
    UIButton *_disBandView;
    ShortVideoToolbar *_sightToolbar;
    int _preSightInputMode;
    int _preSightPositionMode;
    int _preSightContentMode;
    double _bizInputBtnWidth;
    _Bool _showToolViewAfterAnimation;
    double _keyboardTop;
    UIView *_bkgView;
    _Bool _isDetectingExternalKeyboard;
    SEL mRecordSelector;
    unsigned long long _fMaxLength;
    CAGradientLayer *_toolViewShadowLayer;
}

@property(retain, nonatomic) CAGradientLayer *toolViewShadowLayer; // @synthesize toolViewShadowLayer=_toolViewShadowLayer;
@property(nonatomic) unsigned long long fMaxLength; // @synthesize fMaxLength=_fMaxLength;
@property(retain, nonatomic) UIView *m_quickSendEmoticonView; // @synthesize m_quickSendEmoticonView;
@property(retain, nonatomic) MMEmoticonView *m_emoticonView; // @synthesize m_emoticonView;
@property(retain, nonatomic) UIButton *m_quickSendEmoticonBackView; // @synthesize m_quickSendEmoticonBackView;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic) __weak id <MMInputToolViewCustomizationDelegate> _uiDelegate; // @synthesize _uiDelegate;
@property(nonatomic) _Bool m_bPositioning; // @synthesize m_bPositioning;
@property(retain, nonatomic) RecordView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) int positionMode; // @synthesize positionMode=_positionMode;
@property(nonatomic) int inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) __weak id <MMInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMTransparentButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIView *recordingTipsView; // @synthesize recordingTipsView=_recordingTipsView;
@property(retain, nonatomic) UIButton *expressionDoneButton; // @synthesize expressionDoneButton=_expressionDoneButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) EmoticonBoardView *expressionView; // @synthesize expressionView=_expressionView;
@property(retain, nonatomic) ShortVideoToolbar *sightToolbar; // @synthesize sightToolbar=_sightToolbar;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *inputModeChangeButton; // @synthesize inputModeChangeButton=_inputModeChangeButton;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (_Bool)CheckVoiceBtnState;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)expressionClicked:(unsigned int)arg1;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)onDragTableViewEnd:(double)arg1;
- (void)onDragTableView:(struct CGPoint)arg1;
- (_Bool)tryDetectExtenalKeyboard;
- (_Bool)isFocusOnTextInput;
- (void)onCameraResign;
- (void)onSightPictureTaken:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3;
- (void)onShortVideoToolBtnClick:(int)arg1;
- (void)changeToSightToolView;
- (void)initSightToolView;
- (void)hideSightCamera;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setVoiceEnabled:(_Bool)arg1;
- (void)resetSelectAttachmentView;
- (void)resetVoiceInputView;
- (void)resetRecordView;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isPointInRecordGarbageView:(struct CGPoint)arg1;
- (_Bool)isPointInRecordButton:(struct CGPoint)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)resetGrowTextView;
- (void)insertString:(id)arg1;
- (void)ShowCountingTips:(long long)arg1;
- (void)HideRecordTips;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)showRecord:(id)arg1;
- (void)showCancel:(id)arg1;
- (void)cancelRecording;
- (void)stopRecording:(id)arg1;
- (void)resalStartRecording;
- (void)startRecording:(id)arg1;
- (void)setContentMode:(int)arg1 animated:(_Bool)arg2;
- (void)NotifyViewControllerPostionChanged:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)setPoisitionMode:(int)arg1 animated:(_Bool)arg2 fromShake:(_Bool)arg3;
- (void)setPoisitionMode:(int)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (float)getContentViewHeight:(int)arg1;
- (void)onPositionAnimationEnd;
- (void)setInputMode:(int)arg1 animated:(_Bool)arg2;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)onRedEnvelopesClicked:(id)arg1;
- (void)onTransferButtonClicked:(id)arg1;
- (void)onServiceButtonClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)onCameraControllerClicked:(id)arg1;
- (void)onMediaBrowserClicked:(id)arg1;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)onMultiTalkButtonClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onLocationButtonClicked:(id)arg1;
- (void)videoVoipBtnRealClicked;
- (_Bool)isEnableVoiceVoipFromPlugin;
- (void)onVideoVoipButtonClicked:(id)arg1;
- (void)asyncStartNetDetect;
- (_Bool)canShowCardPkgEntry;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowFavEntry;
- (_Bool)canShowSight;
- (_Bool)canShowRedEnvelopesEntey;
- (_Bool)canShowTransferMoneyEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (_Bool)canShowServiceEntry;
- (_Bool)hasServiceEntry;
- (id)getServiceAppList;
- (id)getAttachmentViewServiceAppList;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (void)voiceInputBtnRealClicked;
- (void)demoSendShortVideo:(id)arg1;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)voiceVoipBtnRealClicked;
- (void)onVoiceVoipButtonClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)tryShowCaptrueButton;
- (void)tryShowCaptureButtonForIos8Plus;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)onWillDisappear;
@property(nonatomic) __weak NSString *text;
- (void)hideToolView:(_Bool)arg1;
- (void)Reset;
- (id)initWithUIDelegate:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)initSubView;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (_Bool)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)updateCustomToolView;
- (void)UpdateTabBarSendButtonState;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidDeleteToNil;
- (_Bool)TextViewDidDelete;
- (void)deleteEmoticon;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)updateRecordButtonDisabled;
- (void)updateToolViewHeight:(_Bool)arg1;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)showSendCaptrueViewAnimated:(_Bool)arg1;
- (void)hideSendCaptrueView;
- (void)hideSendCaptrueViewAnimated:(_Bool)arg1;
- (void)initVoiceInputView;
- (void)OnVoiceInputSendBtnClicked;
- (void)OnVoiceInputKeyboardBtnClicked;
- (void)OnClearText;
- (void)OnTextRecoged:(id)arg1;
- (id)GetCurrentText;
- (void)initAttachmentView;
- (void)updateAttachmentView;
- (void)setIsAllowShareCard:(_Bool)arg1;
- (void)setIsAllowNameCardFollowRedEnveLope:(_Bool)arg1;
- (void)setIsAllowWxTalkFollowSight:(_Bool)arg1;
- (void)setIsAllowRecommendApp:(_Bool)arg1;
- (void)setIsAllowMultiTalk:(_Bool)arg1;
- (void)setIsAllowWxTalk:(_Bool)arg1;
- (void)setIsAllowVoiceInput:(_Bool)arg1;
- (void)setIsAllowVoip:(_Bool)arg1 VoiceVoip:(_Bool)arg2;
- (void)initEmoticonView;
- (void)onClickQuickSendEmoticonView:(id)arg1;
- (void)quickSendEmoticonViewHideDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)quickSendEmoticonViewShowDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideQuickSendEmoticonView;
- (void)showQuickSendEmoticonView;
- (void)clearQuickSendEmoticonViewAnimation;
- (id)genQuickSendEmoticonView;
@property(nonatomic) long long iKeyboardAnimationCurve;
@property(nonatomic) double fKeyboardAnimationDuration;
- (void)fixBtnY;
- (double)getDefaultTextViewHeight;
- (void)lighterToolView;
- (void)initToolView;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

