//
//  SwitchCell.m
//  AutoWXHB
//
//  Created by hp on 16/10/9.
//  Copyright © 2016年 hp. All rights reserved.
//

#import "SwitchCell.h"

@implementation SwitchCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}
- (IBAction)switchChangeAction:(UISwitch *)sender {
    
    BOOL switchOn = sender.on;
    if (self.delegate && [self.delegate respondsToSelector:@selector(switchChangeWithOn:withCell:)]) {
        [self.delegate switchChangeWithOn:switchOn withCell:self];
    }
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
