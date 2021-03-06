//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "CategorySelectViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YueKuSpecialCellDelegate.h"

@class KGDefaultNetErrorView, KGRefreshController, KGTableView, KGThemeButton, NSArray, NSMutableDictionary, NSMutableSet, NSString, UIView, YueKuSpecialCell;

@interface YueKuSpecialViewController : KGViewController <UITableViewDelegate, UITableViewDataSource, CategorySelectViewDelegate, YueKuSpecialCellDelegate, RefreshControlDelegate>
{
    NSArray *_specials;
    NSArray *_cellHeightArray;
    UIView *_specialHeadView;
    KGThemeButton *_classifyBtn;
    KGThemeButton *_hotBtn;
    KGThemeButton *_newBtn;
    KGThemeButton *_contributeBtn;
    int _sort;
    int _categoryID;
    NSString *_categoryKeyName;
    YueKuSpecialCell *_selectSpecial;
    KGDefaultNetErrorView *_errorView;
    long long _curPage;
    double _startOffestY;
    NSMutableDictionary *_specialIdDict;
    NSMutableSet *_currentIdSet;
    KGTableView *_specialTableView;
    KGRefreshController *_refreshControl;
    NSMutableDictionary *_specialDataDic;
}

@property(retain, nonatomic) NSMutableDictionary *specialDataDic; // @synthesize specialDataDic=_specialDataDic;
@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGTableView *specialTableView; // @synthesize specialTableView=_specialTableView;
- (void).cxx_destruct;
- (void)yuekuSpecialMusicPaly:(id)arg1;
- (void)selectSpecialCell:(id)arg1;
- (_Bool)hasExposureQualify:(id)arg1;
- (void)checkSendExposure:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)categorySelected:(id)arg1;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)classifyAction:(id)arg1;
- (_Bool)p_isConfigShowContributeBtn;
- (void)configureCurrentIdSet;
- (void)saveReportedIdSet;
- (id)loadingTypeStringWithCategoryID:(int)arg1 sort:(int)arg2;
- (void)refreshFinished;
- (_Bool)hasMoreItems;
- (void)setupSpecialItemTag:(id)arg1;
- (void)fillContentWithDataArray:(id)arg1 heightArray:(id)arg2;
- (id)readLocalGuessSpeicalRecommendData;
- (void)fetchGuseeSpecialRecommendOrginSpecias:(id)arg1 sort:(int)arg2 categoryId:(int)arg3;
- (void)fetchDataFinished:(id)arg1 categoryId:(int)arg2 sort:(int)arg3;
- (void)getSpecials;
- (void)proccessPageIndexSpecial;
- (void)goToSearchView;
- (void)reConnectEvent;
- (void)dealloc;
- (void)creatTabelHeadView;
- (void)initView;
- (void)handleLoginState;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

