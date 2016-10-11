//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCSNSRewardInfo, WCUserComment;

@interface WCSNSMessage : NSObject
{
    NSString *msgID;
    NSString *objID;
    NSString *parentObjID;
    WCUserComment *comment;
    WCUserComment *refComment;
    _Bool hasRead;
    unsigned int delStatus;
    WCSNSRewardInfo *rewardInfo;
}

+ (id)fromSnsActionGroup:(id)arg1;
@property(retain, nonatomic) WCSNSRewardInfo *rewardInfo; // @synthesize rewardInfo;
@property(nonatomic) unsigned int delStatus; // @synthesize delStatus;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(retain, nonatomic) WCUserComment *comment; // @synthesize comment;
@property(retain, nonatomic) NSString *parentObjID; // @synthesize parentObjID;
@property(retain, nonatomic) NSString *objID; // @synthesize objID;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
- (void).cxx_destruct;
- (_Bool)isWCDataItemDeleted;
- (_Bool)isWCMessageDeleted;
- (id)description;
- (id)init;

@end

