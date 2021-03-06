//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, CTTrainScheduleCacheBean, NSString;

@interface CTTrainScheduleViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isFirstLoad;
    CTTrainScheduleCacheBean *_shadowCacheBean;
    CTTableView *_tableViewSchedule;
}

@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) CTTableView *tableViewSchedule; // @synthesize tableViewSchedule=_tableViewSchedule;
@property(retain, nonatomic) CTTrainScheduleCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)scheduleCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)sectionHeadView;
- (id)noDataView;
- (void)request12306Schedule;
- (void)requestSchedule;
- (void)scrollToShowDepartStation;
- (void)onNavRightBtn;
- (void)onBackButton;
- (void)dealloc;
- (void)setCtripCacheBean:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

