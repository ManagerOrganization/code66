//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GameCenterMsgUserInfo : NSObject
{
    NSString *_username;
    NSString *_iconUrl;
    NSString *_nickname;
    NSString *_profileUrl;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end

