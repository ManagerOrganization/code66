#import "tweak.h"

static void NotificationReceivedCallback(CFNotificationCenterRef center,
                                         void *observer, CFStringRef name,
                                         const void *object, CFDictionaryRef
                                         userInfo)
{
    NSLog(@"get notifi");
    [[ConfigManager shareInstance] reSetupConfigure];
}

%group WeChat_2
%hook MicroMessengerAppDelegate
// - (void)applicationWillEnterForeground:(id)arg1
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(),
                                        NULL,
                                        &NotificationReceivedCallback,
                                        CFSTR("com.AutoWXHB.HBConfigChange"),
                                        NULL,
                                        CFNotificationSuspensionBehaviorCoalesce);


    [[ConfigManager shareInstance] reSetupConfigure];

    return %orig;
}



%end

%hook CMessageMgr

-(void)AsyncOnAddMsg:(id)message MsgWrap:(CMessageWrap* )msgWrap {
    %log;
    %orig;

    if (![ConfigManager shareInstance].configModel.hbSwitch)
    {
        NSLog(@"hbswitch is off");
        return;
    }

    if(msgWrap.m_uiMessageType == 49){
        CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
        CContact *selfContact = [contactManager getSelfContact];

        if ([msgWrap.m_nsContent rangeOfString:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao"].location != NSNotFound) { // 红包

            NSString *nativeUrl = [[msgWrap m_oWCPayInfoItem] m_c2cNativeUrl];
            nativeUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];

            NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];

            NSMutableDictionary *args = [[%c(NSMutableDictionary) alloc] init];
            [args setObject:nativeUrlDict[@"msgtype"] forKey:@"msgType"];
            [args setObject:nativeUrlDict[@"sendid"] forKey:@"sendId"];
            [args setObject:nativeUrlDict[@"channelid"] forKey:@"channelId"];
            [args setObject:[selfContact getContactDisplayName] forKey:@"nickName"];
            [args setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
            [args setObject:nativeUrl forKey:@"nativeUrl"];
            [args setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];

            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)([ConfigManager shareInstance].configModel.hbDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                [[[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]] OpenRedEnvelopesRequest:args];
            });
            
            //透视
            // NSLog(@"check hbStatus ++++++++++++++++++++++++++++++++++++++++++");

            //  NSString *nativeUrlForCheck = [[msgWrap m_oWCPayInfoItem] m_c2cNativeUrl];
            //  NSString *tempNativeUrl = [NSString stringWithString:nativeUrlForCheck];
            //  nativeUrlForCheck = [nativeUrlForCheck substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];
    
            //  NSDictionary *nativeUrlDictForCheck = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrlForCheck separator:@"&"];
    
            //  NSMutableDictionary *argsForCheck = [[%c(NSMutableDictionary) alloc] init];
            //  [argsForCheck setObject:nativeUrlDictForCheck[@"msgtype"] forKey:@"msgType"];
            //  [argsForCheck setObject:nativeUrlDictForCheck[@"sendid"] forKey:@"sendId"];
            //  [argsForCheck setObject:nativeUrlDictForCheck[@"channelid"] forKey:@"channelId"];
            //  // [args setObject:[selfContact getContactDisplayName] forKey:@"nickName"];
            //  // [args setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
            //  [argsForCheck setObject:tempNativeUrl forKey:@"nativeUrl"];
            //  // [args setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];
            //  // [args setObject:@"1" forKey:@"agreeDuty"];
            //  // [args setObject:@"0" forKey:@"inWay"];
    
            //  NSLog(@"args = %@", args);
            //  [[[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]] QueryRedEnvelopesDetailRequest:argsForCheck];
            

            
             


        }
    }
}
%end

%hook WCRedEnvelopesReceiveControlLogic

- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2
{
    %log;
    %orig;
}

%end
%end

// %group WeChat_Main
// %hook CMessageMgr

// -(void)AsyncOnAddMsg:(id)message MsgWrap:(CMessageWrap* )msgWrap {
//     %log;
//     %orig;
    
//     NSLog(@"WeChat_Main get HB");
// }
// %end
// %end


%ctor {
    
   %init(WeChat_2);
    
    // NSString *identifier = [[NSBundle mainBundle] bundleIdentifier];
    
    // if([identifier isEqualToString:@"P99.tencent.xin"])
    // {
    //     %init(WeChat_2);
    // }
    // else if ([identifier isEqualToString:@"com.tencent.xin"])
    // {
    //     %init(WeChat_Main);
    // }
    
}




