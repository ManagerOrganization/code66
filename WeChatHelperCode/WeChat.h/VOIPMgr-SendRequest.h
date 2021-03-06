//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VOIPMgr.h"

@interface VOIPMgr (SendRequest)
- (void)SendSpeedTestResultReq:(unsigned long long)arg1 ResultArray:(id)arg2;
- (void)SendSpeedTestReq;
- (void)SendRedirectRequest;
- (void)SendNewStatReport:(id)arg1 daiReport:(id)arg2 channelReport:(id)arg3 engineReport:(id)arg4 engineExtReport:(id)arg5;
- (void)SendStatReportRequest;
- (void)SendHeartbeatRequest;
- (void)SendDoubleLinkSwitchRequest:(int)arg1;
- (void)SendShutdownRequest;
- (void)SendAnswerRequestBy:(id)arg1 AnswerType:(unsigned int)arg2 forceToVoice:(_Bool)arg3;
- (void)SendCancelInviteRequest;
- (void)SendInviteRequestBy:(id)arg1 InviteType:(unsigned int)arg2 CallType:(unsigned int)arg3;
- (void)SetReportData:(id *)arg1 dailReport:(id *)arg2 channelReport:(id *)arg3 engineReport:(id *)arg4 engineExtReport:(id *)arg5;
@end

