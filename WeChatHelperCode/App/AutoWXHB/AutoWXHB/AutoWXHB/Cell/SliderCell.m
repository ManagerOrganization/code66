//
//  SliderCell.m
//  AutoWXHB
//
//  Created by hp on 16/10/14.
//  Copyright © 2016年 hp. All rights reserved.
//

#import "SliderCell.h"

@implementation SliderCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}
- (IBAction)sliderValueChanged:(UISlider *)sender {
    
    _titleLabel.text = [NSString stringWithFormat:@"延时: %.1f 秒",sender.value];
    
    if (self.delegate && [self.delegate respondsToSelector:@selector(SliderValueChanged:withCell:)]) {
        [self.delegate SliderValueChanged:sender.value withCell:self];
    }
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
