//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileSealer.h"

@interface FileSealer (bridge)
+ (void)bridgeWithFd:(int)arg1 data:(const void *)arg2 size:(unsigned long long)arg3;
+ (void)reportKV:(id)arg1 fd:(int)arg2 from:(const void *)arg3 length:(unsigned long long)arg4 isEmpty:(_Bool)arg5;
+ (void)dump;
+ (_Bool)isDataEmpty:(const char *)arg1 length:(int)arg2;
@end

