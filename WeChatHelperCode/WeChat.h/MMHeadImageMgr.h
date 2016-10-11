//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "HeadImgDelegate.h"
#import "IBottleContactMgrExt.h"
#import "IClearDataMgrExt.h"
#import "IContactMgrExt.h"
#import "IQQContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"

@class CUploadHDHeadImg, MMHeadImageCacher, MMHeadImageDownloader, NSString;

@interface MMHeadImageMgr : MMService <HeadImgDelegate, IContactMgrExt, IQQContactMgrExt, IBottleContactMgrExt, IStrangerContactMgrExt, MessageObserverDelegate, IClearDataMgrExt, MMService>
{
    MMHeadImageCacher *_headImgCacher;
    MMHeadImageDownloader *_headImgDownloader;
    CUploadHDHeadImg *_headImgUploader;
}

+ (id)getUsrHeadImgForLogin:(id)arg1;
- (void).cxx_destruct;
- (void)internalUpdateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)internalUpdateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (_Bool)checkIsNeedUpdateBrandIcon:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateKFBrandHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateEnterpriseHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)isMobileName:(id)arg1;
- (_Bool)checkIsNeedUpdate:(id)arg1 category:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)handleModUserImg:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyBottleContact:(id)arg1;
- (void)onModifyQQContactHeadImage:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onGetUsrImage:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)notifyHeadImageChange:(id)arg1;
- (_Bool)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)deleteUsrHeadImg:(id)arg1;
- (_Bool)isNeedGetHDImg:(id)arg1;
- (_Bool)isUploadIngHeadImg;
- (unsigned int)uploadHDBottleImg:(id)arg1;
- (unsigned int)uploadHDHeadImg:(id)arg1 qualityType:(unsigned int)arg2;
- (unsigned int)uploadHDHeadImg:(id)arg1;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)fixSelfHeadImgByLocalImg;
- (void)cancelDownloadRequest:(id)arg1;
- (_Bool)createEmptyUsrImgInLocal:(id)arg1;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4 forceReload:(_Bool)arg5 saveAsTemp:(_Bool)arg6;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4 forceReload:(_Bool)arg5;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4;
- (_Bool)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(_Bool)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(_Bool)arg4;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (id)getOriginalHDHeadImg:(id)arg1 withCategory:(unsigned char)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1 isHD:(_Bool)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned int)arg3 withCategory:(unsigned char)arg4;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 withCategory:(unsigned char)arg3;
- (id)getOriginalHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getHeadImageWithUseScene:(id)arg1 withScene:(unsigned char)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(_Bool *)arg4;
- (id)getHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

