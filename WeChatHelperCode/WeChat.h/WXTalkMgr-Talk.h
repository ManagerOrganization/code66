//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXTalkMgr.h"

#import "AUAudioDataSource.h"
#import "AVAudioPlayerDelegate.h"
#import "IRemoteControlCheckExt.h"

@class NSString;

@interface WXTalkMgr (Talk) <AUAudioDataSource, IRemoteControlCheckExt, AVAudioPlayerDelegate>
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)isGetDataReady;
- (void)DumpToRecordFile:(char *)arg1 withDataLen:(unsigned int)arg2;
- (void)NotifyMainThreadCurrentSpeakingStatus:(id)arg1;
- (void)NotifyMainThreadHasTalkingData;
- (void)NotifyMainThreadNoTalkingData;
- (void)PlayBeginSound;
- (void)StopReportNobodyTalking;
- (void)ReportNobodyTalking;
- (void)SetCurrentSpeakingMember:(id)arg1;
- (void)GetUnknowMemberByMemberId:(unsigned int)arg1;
- (void)StopRecord;
- (void)StartPlay;
- (void)StartRecord;
- (void)StopTalk;
- (void)StartTalk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

