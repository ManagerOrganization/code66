//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class NSString, UIButton, UILabel;

@interface GameCenterIntroDescCell : MMTableViewCell
{
    UILabel *_descLabel;
    UIButton *_foldButton;
    NSString *_descContent;
    _Bool _isFolded;
    id <GameCenterIntroDescCellDelegate> _delegate;
}

+ (double)heightForCellWithDesc:(id)arg1 isFolded:(_Bool)arg2;
+ (double)heightForLabel:(id)arg1 isFolded:(_Bool)arg2;
@property(nonatomic) __weak id <GameCenterIntroDescCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldShowFoldButton:(id)arg1;
- (void)buttonClicked;
- (void)layoutContent;
- (void)reloadData;
- (void)initializeSubview;
- (void)updateWithDesc:(id)arg1 isFolded:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

