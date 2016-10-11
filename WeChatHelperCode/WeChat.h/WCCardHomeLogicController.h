//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMemberCardListLogicExt.h"
#import "IWCCardPkgExt.h"
#import "IWCShareCardPkgExt.h"

@class NSArray, NSString, WCCardMemberCardListLogicController, WCNewShareCardListLogicController;

@interface WCCardHomeLogicController : MMObject <IWCShareCardPkgExt, IWCCardPkgExt, IMemberCardListLogicExt>
{
    NSString *_shareCardEntryTip;
    NSArray *_shareCardEntryIcons;
    NSString *_cardEntryTip;
    _Bool _hasAlreadyGetCardLayout;
    WCCardMemberCardListLogicController *_memberCardLogicController;
    WCNewShareCardListLogicController *_shareCardLogicController;
    CDUnknownBlockType _reloadUIBlcok;
    NSArray *_sectionIdArray;
    NSArray *_memberArray;
}

@property(retain, nonatomic) NSArray *memberArray; // @synthesize memberArray=_memberArray;
@property(retain, nonatomic) NSArray *sectionIdArray; // @synthesize sectionIdArray=_sectionIdArray;
@property(copy, nonatomic) CDUnknownBlockType reloadUIBlcok; // @synthesize reloadUIBlcok=_reloadUIBlcok;
@property(readonly, nonatomic) WCNewShareCardListLogicController *shareCardLogicController; // @synthesize shareCardLogicController=_shareCardLogicController;
@property(readonly, nonatomic) WCCardMemberCardListLogicController *memberCardLogicController; // @synthesize memberCardLogicController=_memberCardLogicController;
- (void).cxx_destruct;
- (void)memberCardListLogicUpdateMemberCard:(id)arg1 atIdx:(unsigned long long)arg2;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetCardLayout;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardMessageUnreadCountChanged;
- (void)onGetShareCardsLayoutError;
- (void)onGetShareCardsHomePageLayout:(id)arg1 andOtherCityList:(id)arg2 withCityName:(id)arg3 isLocalCityEnd:(_Bool)arg4 isOtherCityEnd:(_Bool)arg5 isFirstPageData:(_Bool)arg6 entryTip:(id)arg7 entryIcons:(id)arg8;
- (id)getCardWording;
- (_Bool)isShareCardEntryShowRedDot;
- (_Bool)isShareCardEntryShowNew;
- (void)clearDataWhenWillDealloc;
- (id)getShareCardIcons;
- (id)getShareCardWording;
- (_Bool)isMemberCardDisplaying:(id)arg1;
- (void)removeMemberCard:(id)arg1;
- (void)delMemberCard:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)getTopMemberCards;
- (unsigned int)getMemberCardsCount;
- (id)getMessageIconUrl;
- (id)getMessageWording;
- (_Bool)hasBubbleMessage;
- (void)calcCollectionViewSessionAndRow;
- (void)fetchDataWithShareOnly:(_Bool)arg1;
- (void)startLoadShareCardHomePageLayout;
- (void)startLoadMyCardLayout;
- (void)loadCacheData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

