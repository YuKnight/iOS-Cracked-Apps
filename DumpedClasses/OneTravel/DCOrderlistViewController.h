//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseViewController.h"

#import "DCDataSourceComDelegate.h"
#import "DCOrderlistFilterBarDelegate.h"
#import "DCOrderlistReleaseOrdrCardDelegate.h"
#import "DCOrderlistTableComDelegate.h"
#import "DCOrderlistTipComDelegate.h"

@class DCOrderlistADCom_dccom_DCComTUndefine, DCOrderlistDataSourceCom<DCAutoload>, DCOrderlistFilterBarCom_dccom_DCComTUndefine, DCOrderlistReleaseOrdrCardCom_dccom_DCComTUndefine, DCOrderlistTableCom_dccom_DCComTUndefine<DCAutoload>, DCOrderlistTipCom_dccom_DCComTUndefine, NSString;

@interface DCOrderlistViewController : DCBaseViewController <DCDataSourceComDelegate, DCOrderlistTipComDelegate, DCOrderlistTableComDelegate, DCOrderlistFilterBarDelegate, DCOrderlistReleaseOrdrCardDelegate>
{
    DCOrderlistTableCom_dccom_DCComTUndefine<DCAutoload> *_tableCom;
    DCOrderlistDataSourceCom<DCAutoload> *_dataSourceCom;
    DCOrderlistADCom_dccom_DCComTUndefine *_adCom;
    DCOrderlistTipCom_dccom_DCComTUndefine *_tipCom;
    DCOrderlistFilterBarCom_dccom_DCComTUndefine *_filterBarCom;
    DCOrderlistReleaseOrdrCardCom_dccom_DCComTUndefine *_releaseOrderCardCom;
}

@property(retain, nonatomic) DCOrderlistReleaseOrdrCardCom_dccom_DCComTUndefine *releaseOrderCardCom; // @synthesize releaseOrderCardCom=_releaseOrderCardCom;
@property(retain, nonatomic) DCOrderlistFilterBarCom_dccom_DCComTUndefine *filterBarCom; // @synthesize filterBarCom=_filterBarCom;
@property(retain, nonatomic) DCOrderlistTipCom_dccom_DCComTUndefine *tipCom; // @synthesize tipCom=_tipCom;
@property(retain, nonatomic) DCOrderlistADCom_dccom_DCComTUndefine *adCom; // @synthesize adCom=_adCom;
@property(retain, nonatomic) DCOrderlistDataSourceCom<DCAutoload> *dataSourceCom; // @synthesize dataSourceCom=_dataSourceCom;
@property(retain, nonatomic) DCOrderlistTableCom_dccom_DCComTUndefine<DCAutoload> *tableCom; // @synthesize tableCom=_tableCom;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paramsTagRemark;
@property(readonly, copy, nonatomic) NSString *paramsFilter;
@property(readonly, copy, nonatomic) NSString *paramsTag;
- (_Bool)shouldHiddenFilterBar;
- (int)pageType;
- (void)checkFilterDataIfError;
- (void)removeTip;
- (void)showAuthorizeTip;
- (void)showNetworkErrTip;
- (void)showNoDataTip;
- (void)orderlistReleaseOrderCardTappedSendButton;
- (_Bool)attractedViewShouldBeHidden;
- (id)orderlistTipBaseView:(id)arg1;
- (void)selectOneDataItemWithDataModel:(id)arg1 buttonType:(long long)arg2;
- (id)scrollViewOfObsever;
- (double)orderlistFilterBarLayoutYOnWindow;
- (id)filterBarAttractedViewFatherView;
- (double)orderlistFilterBarAttractedYOnWindow;
- (double)filterBarAttractedYOnWindow;
- (void)listRequesterFinished:(id)arg1;
- (void)setupRequestFinishAction:(id)arg1;
- (void)tableComDidEndLoading;
- (void)listRequesterFailed:(id)arg1;
- (void)listRequesterSuccess:(id)arg1;
- (void)orderlistDidClickYellowBar;
- (_Bool)orderlistHasMore;
- (void)orderlistLoadMore;
- (void)orderlistRefresh;
- (void)orderlistDataSourceMaker:(id)arg1;
- (id)orderlistDataSource;
- (int)componentPageType:(id)arg1;
- (id)containerViewForComp:(id)arg1;
- (void)setupStatusTips;
- (void)closedADView;
- (void)tappedADView;
- (void)showedADView:(_Bool)arg1;
- (void)setupListAdView:(id)arg1;
- (void)setupFooterViewWithModel:(id)arg1;
- (void)selectedFilterWithModel:(id)arg1;
- (void)selectedSortWithModel:(id)arg1;
- (void)setupFilterView;
- (id)filterComAttractedFatherView;
- (void)setupNavigationBar;
- (void)setupLoad;
- (void)setupSubViews;
- (void)setup;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
