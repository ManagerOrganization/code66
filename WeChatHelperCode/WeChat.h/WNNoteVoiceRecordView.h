//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IFavAudioRecorderExt.h"
#import "IRecordPermissionCheckExt.h"
#import "ISysCallCheckExt.h"
#import "IVOIPUILogicMgrExt.h"

@class FavAudioRecorder, MMTimer, MMUILabel, NSString, UIView;

@interface WNNoteVoiceRecordView : MMUIView <IRecordPermissionCheckExt, IFavAudioRecorderExt, ISysCallCheckExt, IVOIPUILogicMgrExt>
{
    UIView *_signView;
    MMUILabel *_lengthLabel;
    int _recordStatus;
    FavAudioRecorder *_recorder;
    MMTimer *_recordTimer;
    unsigned int _voiceFmt;
    NSString *_lastFilePath;
    _Bool _isCancelRecord;
    unsigned int _startRecordTime;
    unsigned int _endRecordTime;
    float _curPeakPower;
    id _voiceObj;
    id <WNNoteVoiceRecordDelegate> _delegate;
}

@property(nonatomic) __weak id <WNNoteVoiceRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id voiceObj; // @synthesize voiceObj=_voiceObj;
- (void).cxx_destruct;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)BeginInterruption;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavEndRecording:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)finishWithError;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavLevelMeter:(float)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (unsigned int)GetTmpAudioTime:(id)arg1;
- (void)FinishRecord:(id)arg1;
- (id)formatTimeCount:(int)arg1;
- (void)stopTime;
- (void)onTimeCount;
- (void)cancelWithCode:(unsigned short)arg1;
- (void)realStartRecord;
- (void)startRecord;
- (void)dealloc;
- (void)cancelRecord;
- (void)stopRecord;
- (void)showStopRecordAlert;
- (void)resetView;
- (id)initWithWNNoteVoiceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

