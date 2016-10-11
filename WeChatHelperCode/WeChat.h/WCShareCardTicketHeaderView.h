//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCShareCardBaseHeaderView.h"

@class MMUIView, WCCardSunkenBgView;

@interface WCShareCardTicketHeaderView : WCShareCardBaseHeaderView
{
    id <WCShareCardTicketCardHeaderDelegate> _delegate;
    WCCardSunkenBgView *_cardBgView;
    MMUIView *_cardContentView;
}

@property(retain, nonatomic) MMUIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) WCCardSunkenBgView *cardBgView; // @synthesize cardBgView=_cardBgView;
@property(nonatomic) __weak id <WCShareCardTicketCardHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)getRealHeight;
- (void)onClickApplyBtn:(id)arg1;
- (void)initTicketCardContentView;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 cardStatus:(int)arg3 isNeedHideAcceptBtn:(_Bool)arg4 delegate:(id)arg5;

@end

