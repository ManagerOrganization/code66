//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMScrollView.h"

#import "WCImageScrollViewDelegate.h"

@class NSMutableSet, NSString;

@interface PageScrollView : MMScrollView <WCImageScrollViewDelegate>
{
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    _Bool _reloading;
    _Bool _supportOrientation;
    id <PageScrollViewDataSource> _pageDataSource;
    id <PageScrollViewDelegate> _pageDelegate;
    double m_padding;
}

@property(nonatomic) double m_padding; // @synthesize m_padding;
@property(nonatomic) __weak id <PageScrollViewDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(nonatomic) __weak id <PageScrollViewDataSource> pageDataSource; // @synthesize pageDataSource=_pageDataSource;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(retain, nonatomic) NSMutableSet *recycledPages; // @synthesize recycledPages=_recycledPages;
@property(nonatomic) _Bool supportOrientation; // @synthesize supportOrientation=_supportOrientation;
- (void).cxx_destruct;
- (void)updatePageAtIndex:(unsigned long long)arg1;
- (void)removeVisiblePageAtIndex:(unsigned long long)arg1;
- (void)foreceReloadData;
- (void)reloadData;
- (void)onDoubleTapWCImageScrollView;
- (void)onSingleTapWCImageScrollView;
- (double)Padding;
- (void)configPadding:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

