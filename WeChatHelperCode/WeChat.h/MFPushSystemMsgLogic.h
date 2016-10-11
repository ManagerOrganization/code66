//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "INetworkStatusMgrExt.h"
#import "IPushSystemMsgExt.h"
#import "PushSystemMsgViewDelegate.h"

@class MMTimer, NSString, PushSystemMsgView, UIViewController;

@interface MFPushSystemMsgLogic : MMObject <INetworkStatusMgrExt, IPushSystemMsgExt, PushSystemMsgViewDelegate>
{
    PushSystemMsgView *m_banner;
    unsigned int m_uiTipStatus;
    MMTimer *m_OOBTimer;
    id <MFPushSystemMsgDelegate> _delegate;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MFPushSystemMsgDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PushSystemMsgView *bannerBtn; // @synthesize bannerBtn=m_banner;
- (void).cxx_destruct;
- (void)showOOBData;
- (void)onOOBTimer;
- (void)stopOOBTimer;
- (void)showNetworkTip:(id)arg1;
- (void)updateSystemNetworkNotification:(unsigned int)arg1;
- (void)shouldShowSystemMsg:(id)arg1;
- (void)OnGetOOBData;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)dismissSystemMsg;
- (void)dismissSystemMessage;
- (void)updateMessage:(id)arg1;
- (void)makeNewPushSymtemView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

