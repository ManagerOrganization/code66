//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSDictionary, NSString, UIWebView;

@protocol FTSJSEventDelegate <NSObject>

@optional
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onOpenMsgSession:(CContact *)arg1;
- (void)didFinishLoadWebView:(UIWebView *)arg1;
- (void)onOpenSnsDetail:(NSDictionary *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onBeginOnlineSearchContact:(NSString *)arg1;
- (void)onOpenBrandContact:(CContact *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchPage:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1;
- (void)onSearchRecmdDataFail;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(NSDictionary *)arg1;
@end

