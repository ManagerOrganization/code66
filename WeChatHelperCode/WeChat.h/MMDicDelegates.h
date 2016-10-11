//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDicDelegates : NSObject
{
    void *m_ownerId;
    _Bool m_ownerShouldBeNotify;
    struct map<unsigned long, MMDelegateProxy *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MMDelegateProxy *>>> *m_mapDelegates;
}

- (void)clearOwner;
- (_Bool)clearOneDelegateInDic:(id)arg1;
- (_Bool)setDelegateToDic:(id)arg1;
- (id)getDelegateFromDic:(id)arg1;
- (void)setOwnerId:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

