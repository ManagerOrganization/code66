//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCGroupMgrExt.h"

@class NSArray, NSString, WCDataItem, WCMediaItem, WCSNSMessage;

@protocol WCFacadeExt <WCGroupMgrExt>

@optional
- (void)onHomepageTotalCountChanged:(long long)arg1;
- (void)onHomepageUpdate:(int)arg1 withAdded:(NSArray *)arg2 andChanged:(NSArray *)arg3 andDeleted:(NSArray *)arg4;
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onWCPostPrivacyChanged;
- (void)onNotificationShowSettingChanged;
- (void)onDatabaseReloaded;
- (void)onNetworkActivityStatusChanged;
- (void)onBGStorageUpdated;
- (void)onWCBackgroundChanged;
- (void)onCommentReturn:(WCDataItem *)arg1;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onDeleteUploadFailedHBDataItem:(WCDataItem *)arg1;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onReveiceWCDeleteMessage:(NSArray *)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(WCSNSMessage *)arg1;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;
@end

