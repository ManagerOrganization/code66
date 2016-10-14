//
//  SliderCell.h
//  AutoWXHB
//
//  Created by hp on 16/10/14.
//  Copyright © 2016年 hp. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SliderDelegate <NSObject>

-(void)SliderValueChanged:(CGFloat)value withCell:(id)cell;

@end

@interface SliderCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UISlider *ctlSlider;


@property (assign, nonatomic) id <SliderDelegate> delegate;
@end
