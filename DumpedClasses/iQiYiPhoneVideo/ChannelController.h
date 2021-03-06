//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "CategoryItemCellDelegate-Protocol.h"
#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYRootViewProtocol-Protocol.h"
#import "QYTableViewDelegate-Protocol.h"
#import "QYTitleBarDelegate-Protocol.h"
#import "SDWebImageManagerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IQYHomeBottomMenuManager, NSMutableArray, NSString, QYPageData, QYRDButton, QYScrollTitleBar, QYTableView, QYTopMoreView, UIButton;

@interface ChannelController : QYCommonViewController <CategoryItemCellDelegate, QYTableViewDelegate, UITableViewDelegate, UITableViewDataSource, IQYDataLoadManagerDelegate, SDWebImageManagerDelegate, UINavigationControllerDelegate, QYTitleBarDelegate, QYRootViewProtocol>
{
    QYTableView *_categoryTableview;
    NSMutableArray *_arrCategoryGroupData;
    NSMutableArray *_arrCategoryInfo;
    NSString *_strTitle;
    IQYHomeBottomMenuManager *_bottomMenuManager;
    NSMutableArray *_sendedPingbackArr;
    QYTopMoreView *_popView;
    UIButton *_btnSearch;
    QYPageData *_categoryPageData;
    QYScrollTitleBar *_globleTitlBar;
    QYRDButton *_paopaoMsgBtn;
}

+ (id)img4Channel:(long long)arg1;
+ (double)getHeaderLabelCategoryGap;
+ (id)getHeaderLabelFont;
+ (double)getHeaderLabelLeft;
+ (double)getHeaderLabelHeight;
+ (double)getHeaderLabelTop;
+ (double)getHeaderViewHeight;
@property(retain, nonatomic) QYRDButton *paopaoMsgBtn; // @synthesize paopaoMsgBtn=_paopaoMsgBtn;
@property(retain, nonatomic) QYScrollTitleBar *globleTitlBar; // @synthesize globleTitlBar=_globleTitlBar;
@property(retain, nonatomic) QYPageData *categoryPageData; // @synthesize categoryPageData=_categoryPageData;
@property(retain, nonatomic) UIButton *btnSearch; // @synthesize btnSearch=_btnSearch;
@property(retain, nonatomic) QYTopMoreView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) NSMutableArray *sendedPingbackArr; // @synthesize sendedPingbackArr=_sendedPingbackArr;
@property(retain, nonatomic) IQYHomeBottomMenuManager *bottomMenuManager; // @synthesize bottomMenuManager=_bottomMenuManager;
@property(copy, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
@property(retain, nonatomic) NSMutableArray *arrCategoryInfo; // @synthesize arrCategoryInfo=_arrCategoryInfo;
@property(retain, nonatomic) NSMutableArray *arrCategoryGroupData; // @synthesize arrCategoryGroupData=_arrCategoryGroupData;
@property(retain, nonatomic) QYTableView *categoryTableview; // @synthesize categoryTableview=_categoryTableview;
- (void)pushToChannlelist:(id)arg1 animated:(_Bool)arg2;
- (void)reloadViewFromLocalSite;
- (void)reloadCategoryView;
- (void)openHtml5;
- (id)getHtml5Url:(int)arg1;
- (_Bool)ifSendedPingback:(long long)arg1;
- (void)postShowRecomedPingbackWithSection:(long long)arg1;
- (void)postRecommendPingback:(id)arg1;
- (void)channelTouched:(id)arg1;
- (void)clickChannelCategory:(id)arg1;
- (void)clickChannelItem:(id)arg1;
- (void)moreServicesBtnAction;
- (id)getCardName:(long long)arg1;
- (id)headerCellForSection:(long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (_Bool)isSectionHasTopBanner:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellModel:(id)arg1;
- (id)getCategoryDatas:(long long)arg1 row:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isQiXiuSettingChanged;
- (_Bool)isShowServiceSection;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)loadChannelCategoryGroupDatas;
- (_Bool)loadLocalCategoryGroupData;
- (id)getCardDataFromChannelInfo:(id)arg1;
- (void)convertData;
- (id)parseQYBisonTabs:(id)arg1 withCardData:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)showTitlBarWithAnimate:(_Bool)arg1;
- (void)refreshTableview;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isPopViewHide;
- (void)hidePopView;
- (void)createHomeMoreFView;
- (void)buttonMoreAction;
- (void)addMoreButton;
- (void)viewEnterForeground;
- (_Bool)isInChannelView;
- (void)clickStatusBar;
- (void)serviceChangedAction;
- (void)paopaoMsgBtnHideRedDot;
- (void)refreshPaopaoMsgBtnForRedDot;
- (void)getPaoPaoMsgNoti:(id)arg1;
- (_Bool)shouldShowPaoPaoMsgBtn;
- (void)paopaoMsgBtnAction;
- (void)addPaoPaoMsgBtn;
- (void)buttonSearchAction;
- (void)addSearchButton;
- (void)viewDidLoad;
- (void)statisticsForTopTitleBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchViewClickWithKeyword:(id)arg1 originalFrame:(struct CGRect)arg2;
- (void)viewToTop;
- (void)qyroot_viewWillAppear;
- (void)qyroot_tabbarSingleClicked;
- (void)qyroot_tabbarDoubleClicked;
- (void)qyCommonViewAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

