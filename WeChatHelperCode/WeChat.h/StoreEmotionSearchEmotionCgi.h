//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSString;

@interface StoreEmotionSearchEmotionCgi : StoreEmotionBaseCgi
{
    NSString *m_keyword;
    unsigned int m_reqType;
    _Bool m_newQuery;
    id <StoreEmotionSearchEmotionCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionSearchEmotionCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (_Bool)startRequestForKeyword:(id)arg1 ReqType:(unsigned int)arg2 PageBufferStr:(id)arg3;
- (_Bool)startRequestForKeyword:(id)arg1 ReqType:(unsigned int)arg2;
- (id)init;

@end

