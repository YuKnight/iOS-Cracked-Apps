//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAccountRecoverySearchComponentListener-Protocol.h"
#import "FBAccountRecoverySearchFetchStatusListener-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class FBAccountRecoverySearchController, FBAccountRecoverySearchView, FBAccountRecoverySearchViewControllerListenerAnnouncer, FBListViewController, FBSearchBar, NSString;
@protocol FBAccountRecoverySearchFlowControlling;

@interface FBAccountRecoverySearchViewController : UIViewController <FBAccountRecoverySearchComponentListener, FBAccountRecoverySearchFetchStatusListener, UISearchBarDelegate>
{
    FBSearchBar *_searchBar;
    FBAccountRecoverySearchView *_searchView;
    FBAccountRecoverySearchController *_searchController;
    FBListViewController *_listViewController;
    FBAccountRecoverySearchViewControllerListenerAnnouncer *_searchVCAnnouncer;
    id <FBAccountRecoverySearchFlowControlling> _searchFlowControlling;
    NSString *_queryString;
    NSString *_friendName;
}

- (void).cxx_destruct;
- (void)didTapNotInList;
- (void)didSelectUser:(id)arg1;
- (void)didFinishLoadingDataWithError:(id)arg1;
- (void)didSuccessfullyFinishLoadingDataWithSingleResult:(id)arg1;
- (void)didFinishLoadingEmptyData;
- (void)didFailInLoadingDataWithError:(id)arg1;
- (void)didSuccessfullyFinishLoadingData;
- (void)didStartLoadingData;
- (void)searchView:(id)arg1 didTapSearchWithQueryString:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithFlowData:(id)arg1 searchController:(id)arg2 searchFlowControlling:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

