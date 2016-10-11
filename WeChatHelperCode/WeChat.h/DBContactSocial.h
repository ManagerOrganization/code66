//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface DBContactSocial : NSObject <PBCoding>
{
    unsigned int wcFlag;
    NSString *mobileHash;
    NSString *mobileFullHash;
    unsigned long long qqUin;
    NSString *linkedInID;
    NSString *linkedInName;
    NSString *linkedInPublicUrl;
    NSString *wcBGImgObjectID;
    NSString *wcBGImgID;
    NSString *cardUrl;
    NSMutableArray *phoneList;
    NSString *weiDianInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *weiDianInfo; // @synthesize weiDianInfo;
@property(retain, nonatomic) NSMutableArray *phoneList; // @synthesize phoneList;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl;
@property(retain, nonatomic) NSString *wcBGImgID; // @synthesize wcBGImgID;
@property(retain, nonatomic) NSString *wcBGImgObjectID; // @synthesize wcBGImgObjectID;
@property(nonatomic) unsigned int wcFlag; // @synthesize wcFlag;
@property(retain, nonatomic) NSString *linkedInPublicUrl; // @synthesize linkedInPublicUrl;
@property(retain, nonatomic) NSString *linkedInName; // @synthesize linkedInName;
@property(retain, nonatomic) NSString *linkedInID; // @synthesize linkedInID;
@property(nonatomic) unsigned long long qqUin; // @synthesize qqUin;
@property(retain, nonatomic) NSString *mobileFullHash; // @synthesize mobileFullHash;
@property(retain, nonatomic) NSString *mobileHash; // @synthesize mobileHash;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

