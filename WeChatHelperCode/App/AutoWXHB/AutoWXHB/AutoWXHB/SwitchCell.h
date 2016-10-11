//
//  SwitchCell.h
//  AutoWXHB
//
//  Created by hp on 16/10/9.
//  Copyright © 2016年 hp. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SwitchDelegate <NSObject>

-(void)switchChangeWithOn:(BOOL)on withCell:(id)cell;

@end

@interface SwitchCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UISwitch *stateSwitch;

@property (assign, nonatomic) id <SwitchDelegate> delegate;

@end
