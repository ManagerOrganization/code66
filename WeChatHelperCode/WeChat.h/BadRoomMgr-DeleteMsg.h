//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BadRoomMgr.h"

@interface BadRoomMgr (DeleteMsg)
- (void)saveDeleteMsg:(id)arg1;
- (id)loadDeleteMsg;
- (id)getPBPath;
- (void)AddDeletedMsg:(long long)arg1 createTime:(unsigned int)arg2;
- (_Bool)existsInDeletedMsg:(long long)arg1;
@end

