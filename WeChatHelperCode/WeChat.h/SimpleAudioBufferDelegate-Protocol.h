//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SimpleAudioBufferDelegate <NSObject>
- (double)simpleRateForBuffer;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (void)onAudioBufferPlayEnd;
- (unsigned int)fillPcmBuffer:(short *)arg1 startPacket:(long long)arg2 bufferSize:(unsigned int)arg3;
@end

