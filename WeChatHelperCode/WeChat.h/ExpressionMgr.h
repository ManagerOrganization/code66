//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt.h"
#import "MMService.h"

@class NSArray, NSString, UIImage;

@interface ExpressionMgr : MMService <MMService, IMMLanguageMgrExt>
{
    NSArray *m_ExpressionWordsArray;
    NSArray *m_ExpressionSymbolArray;
    NSArray *m_EmoticonZnArray;
    NSArray *m_EmoticonTwArray;
    NSArray *m_EmoticonEnArray;
    NSArray *m_EmoticonThArray;
    NSString *m_nsTotalEmoticonRegex;
    NSArray *m_emojiDescription;
    UIImage *m_ExpressionImages[200];
}

@property(retain, nonatomic) NSArray *m_emojiDescription; // @synthesize m_emojiDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getEmojiDescriptionAtIndex:(unsigned long long)arg1;
- (void)onLanguageChange;
- (id)getExpressionDescriptionAtIndex:(unsigned int)arg1;
- (unsigned int)countOfEmoji:(id)arg1;
- (struct _NSRange)rangeOfEmoticon:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)getExpressionCount;
- (id)getSymbolStringByExpressionOrder:(unsigned int)arg1;
- (id)getStringByExpressionOrder:(unsigned int)arg1;
- (id)getImageByExpressionOrder:(unsigned int)arg1;
- (id)getImageByExpression:(id)arg1;
- (void)releaseExpressionImages;
- (void)onLocalMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

