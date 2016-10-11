//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

#import "ReaderItemViewDelegate.h"

@class NSString;

@interface MultiReaderMessageNodeView : ReaderNewMessageNodeView <ReaderItemViewDelegate>
{
    unsigned int m_selectIndex;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void)onLongTouchForMiss3dTouch;
- (id)getCurrentNodeAccessibilityDescription:(id)arg1;
- (void)onMoreOperate:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onReaderItemLongPress:(unsigned int)arg1;
- (void)onReaderItemClick:(unsigned int)arg1;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
- (void)onMenuItemWillHide;
- (void)handleLongPressEx:(id)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (void)BlogItemClickedUp:(id)arg1;
- (void)ReaderItemClicked:(id)arg1;
- (double)appendNodeViewHeightIfIndex:(long long)arg1;
- (void)clickNodeViewBtn:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)updateBkgImage:(_Bool)arg1;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)getHighlightedImage:(unsigned int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

