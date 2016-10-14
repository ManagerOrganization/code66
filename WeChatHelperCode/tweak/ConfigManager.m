//
//  ConfigManager.m
//  code66_tweak_helper
//
//  Created by hp on 16/10/14.
//  Copyright © 2016年 hp. All rights reserved.
//

#import "ConfigManager.h"

@implementation ConfigManager

static ConfigManager *manager;

+(ConfigManager *)shareInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[ConfigManager alloc] init];
    });
    
    return manager;
}

//收到配置改变的通知时候，调用这个
-(ConfigModel *)reSetupConfigure
{
    NSDictionary *dict = [[NSDictionary alloc] initWithContentsOfFile:LOCATION_PATH];
    NSLog(@"cfdic = %@", dict);
    self.configModel = [[ConfigModel alloc] initWithDic:dict];
    return _configModel;
}

@end

@implementation ConfigModel
-(id)initWithDic:(NSDictionary *)dic
{
    self = [super init];
    if (self) {
        _hbSwitch = [dic[@"hbSwitch"] boolValue];
        _hbDelay = [dic[@"hbDelay"] floatValue];
    }
    
    return self;
   
}

@end
