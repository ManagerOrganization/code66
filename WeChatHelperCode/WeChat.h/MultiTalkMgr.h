//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AVVideoDataSource.h"
#import "AVVideoDeviceDelegate.h"
#import "AVVideoDeviceSessionDelegate.h"
#import "AVVideoDeviceSetupSessionDelegate.h"
#import "CNetworkStatusExt.h"
#import "IMsgExt.h"
#import "ISysCallCheckExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MonoServiceMsgDelegate.h"
#import "MonoServiceMsgLogicDelegate.h"
#import "MultiTalkCgiDelegate.h"
#import "MultiTalkMainViewControllerDelegate.h"
#import "MultitalkMinimizeWindowDelegate.h"
#import "VoIPPushKitExt.h"
#import "WXCAssistHelperDelegate.h"
#import "WXCMultiTalkApiDelegate.h"

@class AVAudioPlayer, AVVideoDevice, MMTimer, MultiTalkWindow, MultitalkMinimizeWindow, NSMutableArray, NSString, SafeMutableDictionary;

@interface MultiTalkMgr : MMService <MMKernelExt, WXCMultiTalkApiDelegate, WXCAssistHelperDelegate, MultiTalkCgiDelegate, IMsgExt, MultiTalkMainViewControllerDelegate, MultitalkMinimizeWindowDelegate, AVVideoDeviceSessionDelegate, AVVideoDeviceDelegate, AVVideoDataSource, AVVideoDeviceSetupSessionDelegate, CNetworkStatusExt, ISysCallCheckExt, MonoServiceMsgLogicDelegate, MonoServiceMsgDelegate, VoIPPushKitExt, MMService>
{
    _Bool _m_videoDeviceRunning;
    _Bool _m_multiTalkReady;
    _Bool _m_blockDisplayVideo;
    _Bool _m_useLowQualityVideo;
    unsigned int _currentMessageId;
    unsigned int _m_uploadFpsCount;
    NSMutableArray *m_cgiList;
    MultiTalkWindow *m_mainWindow;
    MultitalkMinimizeWindow *m_statusWindow;
    SafeMutableDictionary *_m_renderDic;
    SafeMutableDictionary *_m_videoInfoDic;
    AVVideoDevice *_m_videoDevice;
    AVAudioPlayer *_m_audioPlayer;
    MMTimer *_m_uploadFpsTimer;
}

@property(nonatomic) _Bool m_useLowQualityVideo; // @synthesize m_useLowQualityVideo=_m_useLowQualityVideo;
@property(nonatomic) _Bool m_blockDisplayVideo; // @synthesize m_blockDisplayVideo=_m_blockDisplayVideo;
@property(retain, nonatomic) MMTimer *m_uploadFpsTimer; // @synthesize m_uploadFpsTimer=_m_uploadFpsTimer;
@property(nonatomic) unsigned int m_uploadFpsCount; // @synthesize m_uploadFpsCount=_m_uploadFpsCount;
@property(nonatomic) _Bool m_multiTalkReady; // @synthesize m_multiTalkReady=_m_multiTalkReady;
@property(nonatomic) unsigned int currentMessageId; // @synthesize currentMessageId=_currentMessageId;
@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
@property(nonatomic) _Bool m_videoDeviceRunning; // @synthesize m_videoDeviceRunning=_m_videoDeviceRunning;
@property(retain, nonatomic) AVVideoDevice *m_videoDevice; // @synthesize m_videoDevice=_m_videoDevice;
@property(retain, nonatomic) SafeMutableDictionary *m_videoInfoDic; // @synthesize m_videoInfoDic=_m_videoInfoDic;
@property(retain, nonatomic) SafeMutableDictionary *m_renderDic; // @synthesize m_renderDic=_m_renderDic;
@property(retain, nonatomic) MultitalkMinimizeWindow *m_statusWindow; // @synthesize m_statusWindow;
@property(retain, nonatomic) MultiTalkWindow *m_mainWindow; // @synthesize m_mainWindow;
@property(retain, nonatomic) NSMutableArray *m_cgiList; // @synthesize m_cgiList;
- (void).cxx_destruct;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)updateNetworkTacticsWithNotify:(_Bool)arg1;
- (_Bool)checkLowNetworkWithNotify:(_Bool)arg1;
- (_Bool)checkHighWWanWithNotify:(_Bool)arg1;
- (_Bool)checkWiFiWithNotify:(_Bool)arg1;
- (_Bool)checkUnReachableWithNotify:(_Bool)arg1;
- (_Bool)isLowNetwork;
- (void)checkLowPerformanceWithNotify;
- (_Bool)isLowPerformanceDevice;
- (int)GetFrmType;
- (void)DidCapturedImage:(id)arg1;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 imageWidth:(unsigned int)arg3 imageHeight:(unsigned int)arg4;
- (void)videoDevice:(id)arg1 didFailWithError:(id)arg2;
- (void)videoDeviceSessionFinished:(id)arg1;
- (void)videoDeviceSessionBegan:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)onVideoSessionSetupComplete;
- (void)onVideoSessionChangeCameraComplete;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionStartComplete;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (_Bool)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (_Bool)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(id)arg1 withGroup:(id)arg2;
- (void)onMultiTalkMainViewControllerVideoSelected:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(id)arg1;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(id)arg1 duration:(unsigned int)arg2 messageId:(unsigned int)arg3;
- (void)onMultitalkMinimizeWindowClicked;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)clearMultiTalkStatus;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (struct CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (const char *)notifyDataString;
- (id)subTypeString;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onRespBuffer:(id)arg1 functionId:(unsigned int)arg2 seq:(unsigned int)arg3 retCode:(int)arg4;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onReceiveReawakeOrPokerMsg:(id)arg1 extData:(id)arg2;
- (void)onReawakeFriendOrSendPokerToFriendResult:(_Bool)arg1;
- (void)onRespActiveGroupBriefInfoList:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onReceiveMutilTalkPokerMsg;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(id)arg2;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkReady;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (int)inviteUserType:(id)arg1;
- (void)stopRingSound;
- (void)playRingSoundWithVibration:(_Bool)arg1;
- (void)playWhenEnterForeground;
- (void)rejectCall:(id)arg1;
- (void)sendMultiTalkRequset:(int)arg1 reqData:(id)arg2 cgiType:(int)arg3;
- (void)writeLog:(int)arg1 tag:(id)arg2 content:(id)arg3;
- (void)onPreQuit;
- (void)onAuthOK;
- (void)createMultiTalkWithContacts:(id)arg1 withChatroomUsername:(id)arg2;
- (void)enterMultiTalkWithGroup:(id)arg1;
- (void)alertHangup;
- (id)getTalkIngMember:(id)arg1;
- (id)getRenderForUsername:(id)arg1;
- (id)getRenderForMemberId:(unsigned int)arg1;
- (_Bool)isPhoneCalling;
- (_Bool)isMultiTalkActive;
- (_Bool)canStartANewCall;
- (void)startCgiWithFunctionId:(unsigned int)arg1 buffer:(id)arg2 seq:(unsigned int)arg3;
- (void)uploadFpsCountCheck;
- (void)stopVideoDevice;
- (void)startVideoDevice;
- (void)resetVideoDevice;
- (void)clearVideoDevice;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

