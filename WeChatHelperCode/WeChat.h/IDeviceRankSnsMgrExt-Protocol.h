//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSString;

@protocol IDeviceRankSnsMgrExt

@optional
- (void)onGotUserRankList:(NSString *)arg1 aryUserRankList:(NSArray *)arg2 aryLikeMeList:(NSArray *)arg3 aryAffectedUserList:(NSArray *)arg4 championCoverUrl:(NSString *)arg5 championMotto:(NSString *)arg6 jumpChampionUrl:(NSString *)arg7 shareUrl:(NSString *)arg8 isCacheExist:(_Bool)arg9 shareTitle:(NSString *)arg10 focusList:(NSMutableArray *)arg11 isLikedCover:(_Bool)arg12 donationUrl:(NSString *)arg13 hasCoverUrl:(_Bool)arg14 err:(int)arg15;
- (void)onLikeFriendRank:(NSString *)arg1 optype:(unsigned int)arg2 err:(int)arg3;
@end

