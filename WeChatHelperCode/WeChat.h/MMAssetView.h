//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIAlertViewDelegate.h"
#import "WCForceTouchPreviewProtocol.h"

@class MMAsset, NSString, UIImageView, UILabel, UIView;

@interface MMAssetView : MMUIView <UIAlertViewDelegate, WCForceTouchPreviewProtocol>
{
    UIView *_overlayView;
    UIImageView *_markSelectedImageView;
    _Bool bSelected;
    int index;
    _Bool selected;
    MMAsset *asset;
    id parent;
    UIImageView *m_assetImageView;
    UIView *_m_tagBackgroundView;
    UILabel *_m_lengthLabel;
    UIImageView *_m_videoLogoView;
}

@property(retain, nonatomic) UIImageView *m_videoLogoView; // @synthesize m_videoLogoView=_m_videoLogoView;
@property(retain, nonatomic) UILabel *m_lengthLabel; // @synthesize m_lengthLabel=_m_lengthLabel;
@property(retain, nonatomic) UIView *m_tagBackgroundView; // @synthesize m_tagBackgroundView=_m_tagBackgroundView;
@property(retain, nonatomic) UIImageView *m_assetImageView; // @synthesize m_assetImageView;
@property(nonatomic) int index; // @synthesize index;
@property(nonatomic) __weak id parent; // @synthesize parent;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset;
- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)timeStringBySeconds:(double)arg1;
- (_Bool)checkThumbImage;
@property(nonatomic) _Bool selected; // @synthesize selected;
- (void)tagAseetToPreview;
- (void)toggleSelection;
- (void)showedSelectedMark:(_Bool)arg1;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)updateVoiceOver;
- (id)initWithAsset:(id)arg1;
- (void)updateAsset:(id)arg1;
- (void)hideToggle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

