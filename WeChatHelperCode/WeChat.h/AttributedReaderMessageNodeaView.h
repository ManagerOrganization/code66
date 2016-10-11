//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

@class CTRichTextView;

@interface AttributedReaderMessageNodeaView : ReaderNewMessageNodeView
{
    CTRichTextView *m_ctRichTextView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onClicked;
- (void)onForward:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)forwardMessage;
- (void)ShowReader:(id)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (_Bool)isTouchInView:(id)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (void)reLayoutSubviews;
- (void)clickNodeViewBtn:(id)arg1;
- (void)layoutSubviewsInternal;
- (id)getItemLabel:(id)arg1 with:(double)arg2 size:(double)arg3;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (id)getItemDesc:(double)arg1 forReaderWrap:(id)arg2;
- (id)getItemTitle:(double)arg1;
- (id)getTitleString:(id)arg1 bBig:(_Bool)arg2 bGray:(_Bool)arg3;
- (id)getBigVideoImage;
- (id)getSmallVideoImage;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (double)attributedNodeItemWidth;

@end

