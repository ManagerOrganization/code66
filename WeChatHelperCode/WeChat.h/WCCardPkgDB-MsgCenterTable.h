//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardPkgDB.h"

@interface WCCardPkgDB (MsgCenterTable)
- (_Bool)setConsumedMsgRead:(id)arg1;
- (_Bool)cleanAllMsg;
- (_Bool)setAllMsgRead;
- (id)getLastMsg;
- (unsigned int)insertWCCardPkgMsg:(id)arg1 XML:(id)arg2;
- (_Bool)deleteWCCardMsgByLocalMsgID:(unsigned int)arg1;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1 HasSmaller:(_Bool *)arg2;
- (id)getFirstPageMsgList;
- (id)getUnreadMsgList;
- (unsigned int)getUnreadMessageCount;
- (unsigned int)getMessageCount;
@end

