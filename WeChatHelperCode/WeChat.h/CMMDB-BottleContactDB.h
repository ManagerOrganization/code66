//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMMDB.h"

@interface CMMDB (BottleContactDB)
- (_Bool)DeleteBottleContact:(id)arg1;
- (unsigned int)GetCountOfBottleContact;
- (id)GetAllBottleContact:(const vector_24c76cbd *)arg1;
- (id)GetBottleContact:(id)arg1 onProperty:(const vector_24c76cbd *)arg2;
- (_Bool)UpdateBottleContact:(id)arg1 onProperty:(const vector_24c76cbd *)arg2 byUserName:(id)arg3;
- (_Bool)InsertBottleContact:(id)arg1 onProperty:(const vector_24c76cbd *)arg2;
@end
