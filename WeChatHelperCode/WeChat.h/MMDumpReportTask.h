//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "crashReportConnectionDelegate.h"

@class MMCrashReportConnection, NSMutableArray, NSString;

@interface MMDumpReportTask : NSObject <crashReportConnectionDelegate>
{
    NSString *m_nsTag;
    NSMutableArray *m_arrUploadingItems;
    NSMutableArray *m_arrReportData;
    MMCrashReportConnection *m_connect;
    _Bool m_bUploading;
    NSString *m_nsUsrName;
    unsigned long long m_totalUploadCount;
    unsigned long long m_uploadedCount;
    id <MMDumpReporterDelegate> m_delegate;
    unsigned long long m_reportCntOneTime;
}

@property(nonatomic) unsigned long long m_reportCntOneTime; // @synthesize m_reportCntOneTime;
@property(nonatomic) __weak id <MMDumpReporterDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (unsigned long long)getUploadFilesCount;
- (_Bool)filesEmpty;
- (id)getUsrName;
- (void)onUploadCrashCompleted:(_Bool)arg1 CrashWrap:(id)arg2;
- (void)uploadOneReportData;
- (void)upload;
- (_Bool)uploadTaskData:(id)arg1;
- (void)cancelTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

