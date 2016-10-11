//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDiskUsageConfig : NSObject <PBCoding>
{
    _Bool m_isDelete;
    _Bool m_isDeleteUnknow;
    _Bool m_isReportDelUnknow;
    unsigned int m_timeIntervalBetweenReport;
    unsigned int m_timeIntervalBetweenScan;
    unsigned int m_timeForEachScan;
}

+ (id)LoadDataFromFile:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool m_isReportDelUnknow; // @synthesize m_isReportDelUnknow;
@property(nonatomic) _Bool m_isDeleteUnknow; // @synthesize m_isDeleteUnknow;
@property(nonatomic) _Bool m_isDelete; // @synthesize m_isDelete;
@property(nonatomic) unsigned int m_timeForEachScan; // @synthesize m_timeForEachScan;
@property(nonatomic) unsigned int m_timeIntervalBetweenScan; // @synthesize m_timeIntervalBetweenScan;
@property(nonatomic) unsigned int m_timeIntervalBetweenReport; // @synthesize m_timeIntervalBetweenReport;
@property(readonly, copy) NSString *description;
- (_Bool)IsDataValid;
- (_Bool)SaveDataToPath:(id)arg1;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

