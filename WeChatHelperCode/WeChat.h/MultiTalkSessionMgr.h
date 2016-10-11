//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCDataBase, WCDataBaseTable;

@interface MultiTalkSessionMgr : MMService <MMService>
{
    WCDataBase *_dataBase;
    WCDataBaseTable *_contactTable;
    WCDataBaseTable *_messageTable;
    WCDataBaseTable *_sessionTable;
}

@property(retain, nonatomic) WCDataBaseTable *sessionTable; // @synthesize sessionTable=_sessionTable;
@property(retain, nonatomic) WCDataBaseTable *messageTable; // @synthesize messageTable=_messageTable;
@property(retain, nonatomic) WCDataBaseTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) WCDataBase *dataBase; // @synthesize dataBase=_dataBase;
- (void).cxx_destruct;
- (id)getSubMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)arg1 subContent:(id)arg2 sessionItem:(id)arg3 msgLocalID:(unsigned int)arg4;
- (_Bool)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 sessionItem:(id)arg2 msgLocalID:(unsigned int)arg3 isSelfCaller:(_Bool)arg4 sessionState:(unsigned int)arg5;
- (_Bool)addNewMultiTalkSessionMsgWithGroupData:(id)arg1;
- (_Bool)isGroupDataValid:(id)arg1;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)arg1;
- (_Bool)insertOrUpdateRowInSessionTable:(id)arg1;
- (_Bool)insertNewRowInSessionTable:(id)arg1;
- (_Bool)insertOrUpdateRowInMessageTable:(id)arg1;
- (_Bool)insertNewRowInMessageTable:(id)arg1;
- (_Bool)insertOrUpdateRowInContactTable:(id)arg1;
- (_Bool)insertNewRowInContactTable:(id)arg1;
- (void)fillSessionItemUpdatePropertiesForSessionObject:(vector_24c76cbd *)arg1;
- (void)fillMessageItemUpdatePropertiesForMessageObject:(vector_24c76cbd *)arg1;
- (void)fillContactItemUpdatePropertiesForContactObject:(vector_24c76cbd *)arg1;
- (id)genSessionItemWithGroupData:(id)arg1;
- (id)genMessageItemWithGroupData:(id)arg1;
- (id)genContactItemWithGroupData:(id)arg1;
- (id)getMultiTalkMsgDigestFromMessageContent:(id)arg1;
- (id)getMessageItemWitgMsgLocalID:(unsigned int)arg1;
- (_Bool)isMessageExist:(unsigned int)arg1;
- (_Bool)isSessionExist:(id)arg1;
- (id)genGroupDataFromSessionItem:(id)arg1;
- (_Bool)deleteSessionWithSessionItem:(id)arg1;
- (id)getMessageArrayFromSessionWithSessionItem:(id)arg1;
- (id)getLastMessageItemWithSessionItem:(id)arg1;
- (id)getContactItemFromSession:(id)arg1;
- (id)getMemberListFromSessionItem:(id)arg1;
- (id)getAllSessionItem;
- (_Bool)insertOrUpdateSessionWithMultiTalkGroupData:(id)arg1;
- (_Bool)updateMessageWithMessageID:(unsigned int)arg1 multiTalkGroup:(id)arg2 duration:(unsigned int)arg3;
- (_Bool)updateHasGenMessageWithMessageID:(unsigned int)arg1;
- (_Bool)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(_Bool)arg3 sessionState:(unsigned int)arg4;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)arg1;
- (_Bool)hasHistorySession;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createTables;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (void)initDatabase;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

