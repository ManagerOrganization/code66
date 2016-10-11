//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMDumpReporterDelegate.h"

@class MMDumpReportTask, NSMutableArray, NSRecursiveLock, NSString;

@interface MMDumpReporterMgr : MMObject <MMDumpReporterDelegate>
{
    id <MMDumpReporterDelegate> m_delegate;
    _Bool m_bUploading;
    _Bool m_bShouldUpload;
    NSMutableArray *m_arrUploadTask;
    MMDumpReportTask *m_uploadTask;
    NSRecursiveLock *m_lock;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <MMDumpReporterDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onTaskProgress:(double)arg1;
- (void)onTaskUploadResult:(_Bool)arg1 onTag:(id)arg2;
- (_Bool)taskDataFilesEmpty:(id)arg1;
- (void)removeFistTaskData;
- (_Bool)addOneTaskData:(id)arg1;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1 withReprotCntOneTime:(unsigned long long)arg2;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadAllDump;
- (void)autoUploadDump;
- (void)uploadOneTaskData;
- (_Bool)shouldUpload;
- (void)onEnterBackGround;
- (void)onEnterForgeGround;
- (_Bool)limitUpload:(id)arg1;
- (void)willTerminate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

