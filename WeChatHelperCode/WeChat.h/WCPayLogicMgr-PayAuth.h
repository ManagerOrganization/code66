//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (PayAuth)
- (void)GetTransferPrepayRequest:(id)arg1;
- (void)GetFetchPrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2 FetchAll:(_Bool)arg3;
- (void)GetSavePrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2;
- (void)GetA8Key:(id)arg1;
- (void)GetMallPaypreRequest:(id)arg1;
- (void)GetCheckPayPwdVerifyCodeByToken:(id)arg1;
- (void)GetCheckPayPwdByToken:(id)arg1;
- (void)GetCheckWCPayAuthorityRequest:(id)arg1;
- (void)GetGenPaypreRequest:(id)arg1;
- (void)GetAppAuthVerifyRequest:(id)arg1;
- (void)insideCallBackOnVerifyPayPwdVerifyCodeResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnVerifyPayPwdResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetTransferPrepayResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetA8KeyLogicErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnGetBalanceFetchResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetBalanceSaveResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetA8KeyLogicResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGenPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGenPrepayErrorResponse:(id)arg1 Request:(id)arg2;
@end

