//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface MMToastWithBtnViewController : MMWindowViewController
{
    double m_fShowDuration;
    UIButton *m_backgroundBtn;
    UIView *m_bkgView;
    UIImageView *m_tipIconView;
    UILabel *m_label;
    UIButton *m_Btn;
    UIView *m_seperateLineView;
    id <MMToastWithBtnViewControllerDelegate> _delegate;
    _Bool isSupportLandscape;
    _Bool m_bShowBtn;
}

@property(nonatomic) _Bool m_bShowBtn; // @synthesize m_bShowBtn;
@property(nonatomic) double m_fShowDuration; // @synthesize m_fShowDuration;
- (void).cxx_destruct;
- (void)onBtnClick;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)hideWithAnimated:(int)arg1;
- (void)viewDidLoad;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2 btnText:(id)arg3 andDelegate:(id)arg4;
- (void)dealloc;
- (id)init;

@end

