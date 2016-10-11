//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "ILocationMgrExt.h"
#import "ILocationThumbMgrExt.h"
#import "UIAlertViewDelegate.h"

@class MMImageView, MMLoadingView, NSString, UIActivityIndicatorView, UILabel;

@interface LocationMessageNodeView : BaseMessageNodeView <ILocationThumbMgrExt, ILocationMgrExt, UIAlertViewDelegate>
{
    CDStruct_2c43369c m_coordinate;
    unsigned long long m_geotag;
    MMLoadingView *m_oImageLoadingView;
    MMImageView *m_oImageView;
    MMImageView *m_oLabelBkgImageView;
    UILabel *m_oLocationLabel;
    UIActivityIndicatorView *m_oLoadingView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onMoreOperate:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)showOpearation;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (void)layoutSubviewsInternal;
- (struct CGPoint)getSendOKViewOrgin;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)createNewRequest;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

