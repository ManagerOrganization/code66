//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ThrowBottleLogicView.h"

#import "IBottleMgrExt.h"

@interface ThrowBottleLogicView (BottleMgrDelegate) <IBottleMgrExt>
- (void)OnThrowBottleFail:(unsigned int)arg1;
- (void)OnThrowBottleOK:(unsigned int)arg1 throwCount:(unsigned int)arg2 distance:(unsigned int)arg3;
@end

