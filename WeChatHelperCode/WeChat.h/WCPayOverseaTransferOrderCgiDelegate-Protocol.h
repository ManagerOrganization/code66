//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayOverseaTransferOrderResp;

@protocol WCPayOverseaTransferOrderCgiDelegate <NSObject>
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(WCPayOverseaTransferOrderResp *)arg1;
@end

