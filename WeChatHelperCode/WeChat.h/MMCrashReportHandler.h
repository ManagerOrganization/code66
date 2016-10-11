//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "crashReportConnectionDelegate.h"

@class CrashReportInfo, MMCrashReportConnection, NSString;

@interface MMCrashReportHandler : MMObject <crashReportConnectionDelegate>
{
    MMCrashReportConnection *m_crashReportConnection;
    CrashReportInfo *m_oCrashReportInfo;
}

+ (id)shareCrashReportHandler;
+ (void)initialize;
@property(retain, nonatomic) CrashReportInfo *m_oCrashReportInfo; // @synthesize m_oCrashReportInfo;
- (void).cxx_destruct;
- (void)reportCrashReportCount:(_Bool)arg1 withCrashReportWrap:(id)arg2;
- (void)reportCrashReportResult:(_Bool)arg1 withCrashReportWrap:(id)arg2;
- (void)reportCrash:(unsigned long long)arg1;
- (_Bool)isRepeatReport:(unsigned long long)arg1;
- (_Bool)isNeedCrashReportOnJaiBreak;
- (void)setLastCrashLogTime;
- (id)getJaiBreakCrashFilePath;
- (double)getLastCrashLogTime;
- (_Bool)doCrashReportOnJaiBreak;
- (_Bool)reportCrashLogFile;
- (id)getAppleWatchExtensionCrashDumpData;
- (id)getJailBreakCrashDumpData;
- (void)onUploadCrashCompleted:(_Bool)arg1 CrashWrap:(id)arg2;
- (_Bool)isReachable;
- (_Bool)doCrashReport:(unsigned long long)arg1;
- (_Bool)reportAppleWatchExtensionCrashLogFile;
- (_Bool)doAppleWatchExtensionCrashReport;
- (_Bool)isNeedAppleWatchExtensionCrashReport;
- (_Bool)isNeedCrashReport;
- (void)enableCrashReportHandler;
- (id)getCrashReportData;
- (void)ClearAppleWatchExtensionCrashData;
- (void)ClearCrashData;
- (void)disableExceptionHandle;
- (_Bool)tryCrashReportAfterRun;
- (_Bool)reportCrashReportOnSafeMode;
- (_Bool)needReportCrashOnSafeMode;
- (void)SaveCrashReportInfo;
- (void)LoadCrashReportInfo;
- (id)GetCrashReportInfoPath;
- (id)getCurDate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

