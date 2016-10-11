//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "CNetworkStatusExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMScrollView, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CameraScanViewController : MMUIViewController <MMImagePickerManagerDelegate, UIAlertViewDelegate, IVOIPUILogicMgrExt, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    int _cameraScanType;
    int _cameraScanCodeType;
    _Bool _hideBottomBar;
    _Bool _hideIntroButton;
    NSString *_desc;
    id <CameraScanUIDelegate> _delegate;
    MMScrollView *_bottomScrollView;
    NSMutableDictionary *_logicDict;
    NSMutableDictionary *_buttonDict;
    UIView *_overlayLeftView;
    UIView *_overlayRightView;
    UIView *_overlayTopView;
    UIView *_overlayBottomView;
    UIView *_loadingBgView;
    UIView *_alertBgView;
    UIImageView *_scanLineImgView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIImageView *_leftTopCropImageView;
    UIImageView *_rightTopCropImageView;
    UIImageView *_leftBottomCropImageView;
    UIImageView *_rightBottomCropImageView;
    UILabel *_infoLabel;
    UILabel *_descLabel;
    UILabel *_alertLabel;
    UILabel *_smallAlertLabel;
    UIButton *_introButton;
    unsigned int _beepSound;
    _Bool _navibarTranslucent;
    _Bool _hasInit;
    _Bool _animating;
}

@property(readonly, nonatomic) int cameraScanCodeType; // @synthesize cameraScanCodeType=_cameraScanCodeType;
@property(nonatomic) __weak id <CameraScanUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool hideIntroButton; // @synthesize hideIntroButton=_hideIntroButton;
@property(nonatomic) _Bool hideBottomBar; // @synthesize hideBottomBar=_hideBottomBar;
@property(nonatomic) int cameraScanType; // @synthesize cameraScanType=_cameraScanType;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreAction:(id)arg1;
- (void)onShowScanHistory;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowAlertWording;
- (void)onUpdateWording;
- (id)getMainViewController;
- (void)onStopScanAnimation;
- (void)onStartScanAnimation;
- (void)onPlaySound;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onPopFromStack;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)tapAtPoint:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker;
- (void)onIKnowItBtnClick;
- (void)reportAfterExit;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)onQRCodeAction:(id)arg1;
- (float)getBottomBarHeight;
- (struct CGRect)getContentRect;
- (float)getContentHeight;
- (id)getButtonTitle:(int)arg1;
- (id)getFunctionTitle:(int)arg1;
- (id)getScanBookWording:(id)arg1;
- (float)getPreviewScale:(int)arg1;
- (void)scrollButtonToVisible:(int)arg1;
- (id)getButtonByTag:(int)arg1;
- (void)addButtonWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(struct CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)hideIntroView;
- (void)hideAlertWording;
- (void)showAlertWording:(id)arg1 Animated:(_Bool)arg2;
- (void)onIntroButtonClicked;
- (void)updateIntroButton;
- (void)updateWording;
- (void)stopScanAnimation;
- (void)startScanAnimation;
- (void)doScanAnimation;
- (void)updateAnimationStoped;
- (void)updateScanViewAnimated:(_Bool)arg1;
- (void)openView:(int)arg1 Animated:(_Bool)arg2;
- (void)switchView:(int)arg1;
- (id)getScanLogicController:(int)arg1;
- (id)getActiveLogicController;
- (void)playsound;
- (void)stopLoadingDark;
- (void)startLoadingDarkAnimated:(_Bool)arg1;
- (void)stopScan;
- (void)startScan;
- (void)alignTop:(id)arg1;
- (void)drawCropAreaRect:(struct CGRect)arg1;
- (void)onButtonDown:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setScannerDelegate:(id)arg1 cameraScanType:(int)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setNavigationBarTranslucent:(_Bool)arg1;
- (void)initGesture;
- (void)updateBottomBarInset;
- (void)initView;
- (void)dealloc;
- (void)initMember;
- (id)initWithCameraScanType:(int)arg1 CodeType:(int)arg2 presentModal:(_Bool)arg3;
- (id)initWithCameraScanType:(int)arg1 presentModal:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

