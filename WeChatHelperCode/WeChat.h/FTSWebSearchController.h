//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"
#import "FTSWebSearchDataSource.h"
#import "INewABTestMgrExt.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WSMusicDelegate.h"

@class MMUISearchBar, MMUIViewController, NSMutableArray, NSString, UIImageView, UITextField, UIView, WSResultViewLogic, WebSearchView;

@interface FTSWebSearchController : NSObject <UISearchBarDelegate, UIWebViewDelegate, UIScrollViewDelegate, WCCommentDetailViewControllerFBDelegate, FTSJSEventDelegate, FTSWebSearchDataSource, INewABTestMgrExt, WSMusicDelegate>
{
    MMUISearchBar *_searchBar;
    WebSearchView *_mainView;
    WebSearchView *_detailView;
    WSResultViewLogic *_resultViewLogic;
    UIImageView *_searchBarWrap;
    UIImageView *_bottomViewShadow;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _isDetailSearch;
    unsigned long long _detailSearchType;
    NSString *_keywordForHomepage;
    NSString *_keywordForDetailPage;
    NSString *_searchID;
    NSString *_browsingTID;
    NSMutableArray *_arrDeletedTID;
    _Bool _bSwizzle;
    int _guideType;
    int _mode;
    UIView *_view;
    UIView *_searchBarSuperView;
    UIView *_bottomView;
    MMUIViewController *_viewController;
    id <FTSWebSearchViewDelegate> _delegate;
    UITextField *_searchTextField;
    UIImageView *_searchLeftView;
    UIView *_searchPromtLabel;
}

@property(retain, nonatomic) UIView *searchPromtLabel; // @synthesize searchPromtLabel=_searchPromtLabel;
@property(retain, nonatomic) UIImageView *searchLeftView; // @synthesize searchLeftView=_searchLeftView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <FTSWebSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=_searchBarSuperView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)startMusicPlayer:(id)arg1;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onPreSearch:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(id)arg1;
- (void)onDeleteData;
- (unsigned long long)businessType;
- (id)query;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)cancelSearch;
- (void)resetSearch;
- (void)asyncSearch:(id)arg1;
- (void)setSearchBarText:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)enableButton:(id)arg1;
- (void)willBeginDetailSearch;
- (id)urlParmasForVSPage;
- (id)urlParmasForDetailPage:(id)arg1;
- (id)urlParmasForMainPage:(id)arg1;
- (void)loadLocalHtmlForVertSearch;
- (void)loadLocalHtmlForDetailPage:(id)arg1;
- (void)loadLocalHtml:(id)arg1;
- (void)resetSearchIconFrame;
- (void)removeAllAnimation:(id)arg1;
- (void)show;
- (void)hideKeyboard;
- (void)onBackBtnClick;
- (void)remove;
- (void)popWithAnimation;
- (void)popFromDetailSearch;
- (void)onRemoveDetailView;
- (void)pop:(_Bool)arg1;
- (double)getSearchTextFieldWidth;
- (void)updateMovingDetailView;
- (void)updateSearchBarPosition;
- (void)moveDetailViewToRight;
- (void)moveWebViewToRight;
- (void)cancelMoveDetailView;
- (void)cancelMoveSearchBar;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)isSupportMCSBrandContact;
- (_Bool)isSupportSuggestion;
- (_Bool)isSubClassSearch;
- (_Bool)isVerticalSearch;
- (void)internalSwizzle;
- (void)clearResource;
- (void)handleRotateEvent;
- (void)unswizzle;
- (void)swizzle;
- (void)initDetailView;
- (void)initResultView;
- (void)initMusicSearchDelegate;
- (void)initView;
- (void)dealloc;
- (id)initWithMode:(int)arg1 businessType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

