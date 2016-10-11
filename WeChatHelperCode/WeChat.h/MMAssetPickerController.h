//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePreviewBrowserControllerDataSource.h"
#import "MMImagePreviewBrowserControllerDelegate.h"
#import "MMVideoPreviewBrowserControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class MMAlbum, MMAssetPickerControllerProxyObject, MMTableView, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, UIButton, UIImageView;

@interface MMAssetPickerController : MMUIViewController <MMImagePreviewBrowserControllerDataSource, UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, MMImagePreviewBrowserControllerDelegate, MMVideoPreviewBrowserControllerDelegate>
{
    NSOperationQueue *_queue;
    NSMutableArray *_imageDictionaries;
    double _previousOffset;
    UIImageView *_bottomBar;
    UIButton *_previewButton;
    UIButton *_sendButton;
    UIButton *_sendBadge;
    UIImageView *_sendBadgeBackImageView;
    double _realBottomBarHeight;
    NSMutableDictionary *m_dicAssetViewsCache;
    _Bool _isOriginalImageForSend;
    _Bool _needThumbImage;
    int _compressType;
    unsigned long long _colNum;
    long long _preInterfaceOrientation;
    _Bool m_isJustReturnMMAsset;
    _Bool m_hasClickSendButton;
    id <MMImagePickerControlCenter> controlCenter;
    MMAlbum *m_album;
    NSMutableArray *_selectedAssetInfos;
    MMTableView *_tableView;
    MMAssetPickerControllerProxyObject *m_proxyPreviewObject;
    unsigned long long m_adjustRevertIndex;
}

@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex;
@property(retain, nonatomic) MMAssetPickerControllerProxyObject *m_proxyPreviewObject; // @synthesize m_proxyPreviewObject;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (id)backupImageToJPEGWithImage:(id)arg1 andImageData:(id)arg2;
- (void)sendVideoWithURL:(id)arg1;
- (void)onSelectedInfoChange;
- (void)sendImageByOriginal:(_Bool)arg1;
- (void)processingImageAtIndex:(id)arg1;
- (void)stopLoadingAfterSent;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)adjustTableViewInitOffset;
- (void)addOutterSelectInfo;
- (_Bool)isSelected:(id)arg1;
- (id)getHeaderView;
- (void)OnPreview:(id)arg1;
- (void)OnBack:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)sendImage;
- (void)prepareSend;
- (void)previewVideo:(id)arg1;
- (void)previewImageOfSelected;
- (void)previewImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)preparePreview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)prepareOnlyPhotos;
- (void)preparePhotosAndVideos;
- (void)preparePhotos:(_Bool)arg1;
- (void)reloadBottomBar;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)reloadPhotoView;
- (void)fixOffset;
- (void)reloadSelectedDisplayView;
- (void)adjustSubviewRects;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)initBottomBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

