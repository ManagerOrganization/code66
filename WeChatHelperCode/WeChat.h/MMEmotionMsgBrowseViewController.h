//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomManageAddLogicDelegate.h"
#import "EmoticonDescMgrExt.h"
#import "EmoticonStoreCellDelegate.h"
#import "EmoticonStoreItemExt.h"
#import "IEmoticonDownloadExt.h"
#import "IMsgRevokeExt.h"
#import "IStoreEmotionDesignerInfoMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCActionSheetDelegate.h"

@class CEmoticonWrap, CMessageWrap, EmoticonCustomManageAddLogic, EmoticonStoreItem, EmotionStoreDetailDesignerContainerView, MMImageBrowseView, MMStoreEmotionAllCell, NSMutableArray, NSString, UIView, WCActionSheet;

@interface MMEmotionMsgBrowseViewController : MMUIViewController <EmoticonCustomManageAddLogicDelegate, EmoticonStoreCellDelegate, UIGestureRecognizerDelegate, IStoreEmotionDesignerInfoMgrExt, WCActionSheetDelegate, EmoticonStoreItemExt, EmoticonDescMgrExt, IEmoticonDownloadExt, IMsgRevokeExt, UIAlertViewDelegate>
{
    MMImageBrowseView *m_imageView;
    CMessageWrap *m_wrapMsg;
    CEmoticonWrap *m_wrapEmoticon;
    EmoticonStoreItem *m_item;
    WCActionSheet *m_actionSheet;
    UIView *_containerView;
    MMStoreEmotionAllCell *_emotionCell;
    UIView *_lineView;
    EmotionStoreDetailDesignerContainerView *m_designerContainerView;
    EmoticonCustomManageAddLogic *m_addEmoticonLogic;
    NSMutableArray *m_operationTitles;
}

@property(retain, nonatomic) EmoticonStoreItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStopLoading;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 pid:(id)arg2;
- (void)onDesignerInfoUpdated:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)clickDesignerCell;
- (void)onSaveEmoticon:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onClickEmotionCell:(id)arg1;
- (void)setupEmotionCell;
- (void)setupStoreEmotionView;
- (void)initDesignerContainerView;
- (void)setupImageView;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)configOperationTitles;
- (void)initRightBarButtonItem;
- (void)initView;
- (void)initPersonalDesignerData;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMsgWrap:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

