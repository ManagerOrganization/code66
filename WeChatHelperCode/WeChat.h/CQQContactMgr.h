//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactProfileMgrExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"

@class CQQContactDB, NSMutableDictionary, NSString;

@interface CQQContactMgr : MMService <MMService, MessageObserverDelegate, IContactProfileMgrExt>
{
    CQQContactDB *m_oDB;
    NSMutableDictionary *m_dicContacts;
    _Bool m_bDataNeedReload;
}

- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)DidGetQQContactProfile:(id)arg1 withImage:(_Bool)arg2;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)saveContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3;
- (_Bool)syncAllQQContact;
- (_Bool)syncContacts:(id)arg1;
- (_Bool)syncContact:(id)arg1;
- (_Bool)RemoveContactFromChatList:(id)arg1;
- (_Bool)setContact:(id)arg1 chatState:(unsigned int)arg2;
- (_Bool)addContact:(id)arg1;
- (id)getContactByName:(id)arg1;
- (id)getAllContactInChatList;
- (void)initDB:(id)arg1 lock:(id)arg2;
- (_Bool)autoReload;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

