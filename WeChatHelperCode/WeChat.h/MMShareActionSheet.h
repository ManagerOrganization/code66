//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIView;

@interface MMShareActionSheet : NSObject
{
    NSString *m_title;
    NSString *m_cancelButtonTitle;
    NSMutableArray *m_sections;
    UIView *m_transparentView;
    UIView *m_contentView;
    long long m_lastOri;
    _Bool m_dismissAfterSelected;
    id <MMShareActionSheetDelegate> m_delegate;
}

+ (long long)getIconActionSheetWidth;
@property(nonatomic) _Bool m_dismissAfterSelected; // @synthesize m_dismissAfterSelected;
@property(nonatomic) __weak id <MMShareActionSheetDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)onMMShareActionSheetSection:(id)arg1 didSelectItem:(id)arg2 atPosition:(long long)arg3;
- (void)OnCancel:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissAnimate:(_Bool)arg1;
- (void)reloadInnerView;
- (void)removeFromView;
- (void)cancel;
- (void)dealloc;
- (void)show;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 title:(id)arg4;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 headerView:(id)arg4;

@end

