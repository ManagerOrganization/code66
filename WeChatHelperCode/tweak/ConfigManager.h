//
//  ConfigManager.h
//  code66_tweak_helper
//
//  Created by hp on 16/10/14.
//  Copyright © 2016年 hp. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LOCATION_PATH @"/var/mobile/Library/Preferences/controlCf"

@class ConfigModel;

@interface ConfigManager : NSObject

+ (ConfigManager *)shareInstance;

@property (nonatomic, strong) ConfigModel *configModel;

-(ConfigModel *)reSetupConfigure;

@end



@interface ConfigModel : NSObject

@property (nonatomic, assign) BOOL hbSwitch;
@property (nonatomic, assign) float hbDelay;

-(id)initWithDic:(NSDictionary *)dic;

@end
