//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, NSString;

@protocol EmoticonDownloadProxyDelegate <NSObject>
- (void)onEmoticonDownloadMd5Failed:(NSString *)arg1 withUserInfo:(NSObject *)arg2;
- (void)onEmoticonDownloadMd5Ok:(NSString *)arg1 AndFilePath:(NSString *)arg2 withUserInfo:(NSObject *)arg3;
- (void)onEmoticonDownloadMd5Failed:(NSString *)arg1;
- (void)onEmoticonDownloadMd5Ok:(NSString *)arg1 AndFilePath:(NSString *)arg2;
@end

