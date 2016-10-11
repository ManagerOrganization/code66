//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "C2ObjcServerCallBackExt.h"

@class NSDate, NSString;

@interface LocalAreaNetworkServer : MMObject <C2ObjcServerCallBackExt>
{
    NSString *client_ip;
    unsigned short client_port;
    unsigned int totalReciveLength;
    unsigned int totalSendLength;
    NSDate *start_date;
    id <LocalAreaNetworkServerDelegate> m_delegate;
}

@property(nonatomic) __weak id <LocalAreaNetworkServerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onConnected:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (float)GetServerSendSpeed;
- (void)initTransferStartTime;
- (unsigned long long)Server_SendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)Server_Stop;
- (_Bool)Server_Start:(id *)arg1 port:(unsigned short *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

