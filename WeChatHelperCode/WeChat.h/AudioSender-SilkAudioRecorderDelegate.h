//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AudioSender.h"

#import "SilkAudioRecorderDelegate.h"

@interface AudioSender (SilkAudioRecorderDelegate) <SilkAudioRecorderDelegate>
- (void)onSilkPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)onSilkEndRecording:(id)arg1;
- (void)onSilkBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)onPrepareSendSilk:(id)arg1;
- (_Bool)silkCheckIfButtonPressing:(id)arg1;
@end

