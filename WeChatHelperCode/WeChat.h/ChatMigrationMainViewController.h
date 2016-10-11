//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt.h"

@class MMLoadingView, UIButton, UILabel, UIScrollView, UIView;

@interface ChatMigrationMainViewController : MMUIViewController <CNetworkStatusExt>
{
    _Bool bNetWorkStateOk;
    _Bool bEnoughBatteryLevel;
    _Bool bEnoughDiskSpace;
    unsigned long long m_MoreDiskSpace;
    UIView *m_IconView;
    UIScrollView *m_ScrollView;
    UILabel *m_tipsLabel;
    UILabel *m_statusLabel;
    UIButton *m_actionButton;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)doCleanCache;
- (void)cleanCache;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)stateDetect;
- (void)stopLoading;
- (void)startLoading;
- (void)initLoadingView;
- (void)startLoadSessionData;
- (void)onShowSelectSessionViewController;
- (void)onActionButtonPress;
- (void)onBackBtnDone:(id)arg1;
- (void)makeMainViewWithShowDiskWarning:(_Bool)arg1;
- (void)makeMainView;
- (void)makeIconView;
- (void)makeScrollView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

