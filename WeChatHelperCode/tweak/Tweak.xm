#import "tweak.h"

static BOOL hbSwitch;

static void NotificationReceivedCallback(CFNotificationCenterRef center,
                                         void *observer, CFStringRef name,
                                         const void *object, CFDictionaryRef
                                         userInfo)
{
    NSLog(@"get notifi");
    NSDictionary *dict = [[NSDictionary alloc] initWithContentsOfFile:LOCATION_PATH];
    if (dict)
    {
        NSNumber *switchNumber = dict[@"hbSwitch"];
        hbSwitch = switchNumber.boolValue;
    }
}

%hook MicroMessengerAppDelegate
// - (void)applicationWillEnterForeground:(id)arg1
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(),
                                        NULL,
                                        &NotificationReceivedCallback,
                                        CFSTR("com.AutoWXHB.HBSwitchChange"),
                                        NULL,
                                        CFNotificationSuspensionBehaviorCoalesce);


    NSDictionary *dict = [[NSDictionary alloc] initWithContentsOfFile:LOCATION_PATH];
    if (dict)
    {
        NSNumber *switchNumber = dict[@"hbSwitch"];
        hbSwitch = switchNumber.boolValue;
    }

    return %orig;
}



%end

%hook CMessageMgr

-(void)AsyncOnAddMsg:(id)message MsgWrap:(CMessageWrap* )msgWrap {
    %log;
    %orig;

    // if(msgWrap.m_uiMessageType == 49){
        // CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
        // CContact *selfContact = [contactManager getSelfContact];

    //     if ([msgWrap.m_nsContent rangeOfString:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao"].location != NSNotFound) { // 红包


    //         WCRedEnvelopesLogicMgr *mgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];

    //         WCRedEnvelopesReceiveControlLogic *Logic = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesReceiveControlLogic) class]];
    //         MMExtension *ext = [[MMExtension alloc] initWithKey:@protocol(WCRedEnvelopesLogicMgrExt)];
    //         [ext registerExtension:Logic];


    //         NSString *nativeUrl = [[msgWrap m_oWCPayInfoItem] m_c2cNativeUrl];
    //         NSString *tempNativeUrl = [NSString stringWithString:nativeUrl];
    //         nativeUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];

    //         NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];

    //         NSMutableDictionary *args = [[%c(NSMutableDictionary) alloc] init];
    //         [args setObject:nativeUrlDict[@"msgtype"] forKey:@"msgType"];
    //         [args setObject:nativeUrlDict[@"sendid"] forKey:@"sendId"];
    //         [args setObject:nativeUrlDict[@"channelid"] forKey:@"channelId"];
    //         // [args setObject:[selfContact getContactDisplayName] forKey:@"nickName"];
    //         // [args setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
    //         [args setObject:tempNativeUrl forKey:@"nativeUrl"];
    //         // [args setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];
    //         // [args setObject:@"1" forKey:@"agreeDuty"];
    //         // [args setObject:@"0" forKey:@"inWay"];

    //         NSLog(@"args = %@", args);

    //         [[[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]] QueryRedEnvelopesDetailRequest:args];
    //     }
    // }
    if (!hbSwitch)
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

            [[[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]] OpenRedEnvelopesRequest:args];
        }
    }
    
}

%end

