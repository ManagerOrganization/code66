//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDataProviderDelegate.h"

@class MyWCDB, NSMutableArray, NSMutableDictionary, NSString, WCAdvertiseDataHelper, WCAdvertiseLogicMgr, WCTimelineDataProvider;

@interface WCTimelineMgr : MMObject <WCDataProviderDelegate>
{
    id <WCTimelineDelegate> m_delegate;
    NSMutableArray *m_cache;
    NSMutableArray *m_timelineDataList;
    NSMutableArray *m_advertiseDataList;
    MyWCDB *m_database;
    WCAdvertiseDataHelper *m_adDataHelper;
    WCTimelineDataProvider *m_dataProvider;
    WCAdvertiseLogicMgr *m_adLogicMgr;
    _Bool isNoMoreData;
    unsigned int m_showFlag;
    NSString *nsLatestID;
    _Bool m_needWriteBackDataItemUpdateTime;
    _Bool m_needLoadDataItemUpdateTime;
    NSMutableDictionary *m_dataUpdateTime;
    NSMutableDictionary *m_dicUpdateDataList;
}

@property(nonatomic) unsigned int m_showFlag; // @synthesize m_showFlag;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData;
@property(retain, nonatomic) WCAdvertiseLogicMgr *m_adLogicMgr; // @synthesize m_adLogicMgr;
@property(retain, nonatomic) WCTimelineDataProvider *m_dataProvider; // @synthesize m_dataProvider;
@property(retain, nonatomic) WCAdvertiseDataHelper *m_adDataHelper; // @synthesize m_adDataHelper;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
@property(retain, nonatomic) NSMutableArray *m_cache; // @synthesize m_cache;
@property(nonatomic) __weak id <WCTimelineDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onPreDownloadCanvasDataItemResrc:(id)arg1;
- (_Bool)hasAdvertiseInCache;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (void)setChangedTimeForDatas:(id)arg1 withChangedTime:(unsigned int)arg2;
- (unsigned int)getMinChangedTimeBetween:(id)arg1 andMinID:(id)arg2;
- (void)trySaveDataItemUpdateTime;
- (void)tryDeleteDataItemUpdateTime;
- (void)tryLoadDataItemUpdateTime;
- (id)pathForDataItemUpdateTime;
- (void)onServiceCleanDataProviderMd5Cache;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceMemoryWarning;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)modifyCache:(id)arg1;
- (void)deleteDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)addDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)onReturnServerConfig:(id)arg1;
- (void)onReturnShowFlag:(unsigned int)arg1;
- (void)onNoMoreDataWithRet:(int)arg1;
- (void)onReturnIsAllData:(id)arg1 andAdData:(id)arg2;
- (void)onDataUpdated:(id)arg1 withChangedTime:(unsigned int)arg2;
- (void)onDataUpdated:(id)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 withChangedTime:(unsigned int)arg4;
- (void)onDataUpdated:(id)arg1 andData:(id)arg2 andAdData:(id)arg3 withChangedTime:(unsigned int)arg4;
- (id)getCachedAdItemList;
- (void)removeAllCacheAdvertiseMsgXml;
- (id)getAdMsgXmlList;
- (_Bool)hasExistAdInLocal:(id)arg1;
- (_Bool)updateDataTail:(id)arg1;
- (unsigned int)getNextPageCount;
- (unsigned int)getFirstPageCount;
- (_Bool)updateDataHead:(id)arg1;
- (_Bool)updateData:(id)arg1 WithReferID:(id)arg2;
- (id)getDataItem:(id)arg1 OfIndex:(long long)arg2;
- (long long)countOfDataItem:(id)arg1;
- (void)endSession;
- (void)beginSession;
- (id)safeAddAdvertiseData:(id)arg1;
- (void)removeItemNotInCacheFrom:(id)arg1;
- (unsigned int)getMaxTimeFromDataList:(id)arg1;
- (unsigned int)getMinTimeFromDataList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

