//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EmoticonDownloadProxy : NSObject
{
    NSObject *_m_userInfo;
    NSString *_m_productId;
    NSString *_m_designerId;
    NSString *_m_filePath;
}

@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath=_m_filePath;
@property(retain, nonatomic) NSString *m_designerId; // @synthesize m_designerId=_m_designerId;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId=_m_productId;
@property(retain, nonatomic) NSObject *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
- (void).cxx_destruct;
- (void)clearDelegate;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithMd5:(id)arg1;

@end

