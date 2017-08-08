//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "NM3DTouchProtocol.h"
#import "NMAlbumEditMenuDelegate.h"
#import "NMAlbumProductViewDelegate.h"
#import "NMContentOperBarDelegate.h"
#import "NMDigitalAlbumViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMMoreOperationMultiArtistListViewDelegate.h"
#import "NMPlayAllSectionButtonDelegate.h"
#import "NMPlayListInfoCoverDelegate.h"
#import "NMPlaySourceViewControllerProtocol.h"
#import "NMPlaylistManipulateDelegate.h"
#import "NMPlaylistSectionHeaderViewDelegate.h"
#import "NMScreenShotProtocol.h"
#import "NMSongManageCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMAlbum, NMAlbumDetailDynamicRequest, NMAlbumEditMenu, NMAlbumProductView, NMAlbumSongPrivilegeRequest, NMAlbumSongRequest, NMAlbumSubscribeRequest, NMDigitalAlbumView, NMIncrShareCountRequest, NMPlaylistManipulateView, NMPlaylistSectionHeaderView, NMPriorityApiRequestManager, NMResourceCommentViewController, NMSong, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIPreviewAction;

@interface NMAlbumViewController : NMSongCellBaseController <NMPlayAllSectionButtonDelegate, NMPlayListInfoCoverDelegate, NMContentOperBarDelegate, NMPlaylistManipulateDelegate, NMSongManageCellDelegate, NMMoreOperationMultiArtistListViewDelegate, NMPlaylistSectionHeaderViewDelegate, NMDigitalAlbumViewDelegate, NMAlbumEditMenuDelegate, NMScreenShotProtocol, NMAlbumProductViewDelegate, NMHttpRequestDelegate, UITableViewDelegate, UITableViewDataSource, NMPlaySourceViewControllerProtocol, NM3DTouchProtocol>
{
    NMAlbum *_album;
    NSMutableArray *_songArray;
    NSMutableArray *_diskInfoArray;
    _Bool _isLoading;
    _Bool _willPlay;
    NMResourceCommentViewController *_commentController;
    NMIncrShareCountRequest *_incrShareCountRequest;
    _Bool _isAllSongsHaveFeeIssue;
    _Bool _isAlbumCanComment;
    NMPlaylistSectionHeaderView *_sectionHeaderView;
    _Bool _underMultiple;
    NMPlaylistManipulateView *_manipulateView;
    NSMutableArray *_selectedSongArray;
    NMDigitalAlbumView *_digitalAlbumView;
    NMAlbumProductView *_productView;
    NMAlbumSongRequest *_nginxCacheAlbumInfoRequest;
    NMAlbumSongPrivilegeRequest *_albumPrivilegeRequest;
    NMAlbumDetailDynamicRequest *_albumDetailDynamicRequest;
    NSMutableDictionary *_privilegesDict;
    NMPriorityApiRequestManager *_priorityRequestManager;
    NMAlbumSubscribeRequest *_subscribeRequest;
    NMAlbumSongRequest *_deletedAlbumInfoRequest;
    _Bool _isHidingMessageView;
    NMAlbumEditMenu *_albumEditMenu;
    long long _noNetworkSectionIndex;
    long long _digitalAlbumOrProductSectionIndex;
    long long _playAllSectionIndex;
    long long _diskSectionStartIndex;
    long long _diskSectionEndIndex;
    long long _sectionCount;
    _Bool _pushFromPlayView;
    NMSong *_currentSong;
    UIPreviewAction *_nm_addtionPreviewActionItem;
}

@property(retain, nonatomic) UIPreviewAction *nm_addtionPreviewActionItem; // @synthesize nm_addtionPreviewActionItem=_nm_addtionPreviewActionItem;
@property(readonly, nonatomic) NMAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) NMSong *currentSong; // @synthesize currentSong=_currentSong;
@property(nonatomic) _Bool pushFromPlayView; // @synthesize pushFromPlayView=_pushFromPlayView;
- (void).cxx_destruct;
- (void)addLogForProduct:(id)arg1;
- (id)extraBIDescInfo;
- (id)screenShotShareLink;
- (id)screenShotShareWords;
- (id)routeScheme;
- (void)albumProductView:(id)arg1 willGotoAlbumProduct:(id)arg2;
- (void)digitalAlbumView:(id)arg1 willGotoDigitalAlbum:(id)arg2;
- (id)previewActionItems;
- (void)previewActionToGetComments;
- (void)previewActionToPlayAll;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)itemsFor3DTouch;
- (void)dealloc;
- (void)deleteDownloadButtonClicked:(id)arg1;
- (void)downloadButtonClicked:(id)arg1;
- (void)addToPlaylistButtonClicked:(id)arg1;
- (void)playNextButtonClicked:(id)arg1;
- (void)resetForMultiple;
- (void)exitMultiple;
- (void)scrollsToTop;
- (void)enterMultiple;
- (void)setSectionHeaderSeparatorInset;
- (void)updateSelectedSong:(id)arg1 checked:(_Bool)arg2;
- (void)onCheckBoxAll:(id)arg1;
- (void)songManageCell:(id)arg1 cellChecked:(_Bool)arg2;
- (void)albumSubscribedStateChanged:(id)arg1;
- (_Bool)hasDownloadedSong;
- (void)downloadSongStateChanged:(id)arg1;
- (void)shareSuccess:(id)arg1;
- (void)messageSendSuccess:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)processFinishedArtistDetailDynamicRequest:(id)arg1;
- (void)processFinishedAlbumSongPrivilegeRequest:(id)arg1;
- (void)afterAlbumDetailLoaded;
- (void)processFinishedAlbumDetailRequest:(id)arg1;
- (void)processFinishedPriorityRequests:(id)arg1 success:(_Bool)arg2;
- (void)handleAlbumManager;
- (void)refreshSongPrivileges:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)sectionDataCountForSection:(long long)arg1;
- (long long)fixedRowForIndexPath:(id)arg1;
- (long long)fixedSection:(long long)arg1;
- (void)multiArtistListView:(id)arg1 didSelectArtist:(id)arg2;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)showPlayListInfoCoverWithAlbum:(id)arg1;
- (void)albumDetailBtnClicked:(id)arg1;
- (void)_viewArtistHomePage:(id)arg1;
- (void)artistBtnClicked:(id)arg1;
- (void)playAllButtonClicked;
- (void)playAll:(id)arg1;
- (void)showPlayViewController;
- (void)showRecommendation:(id)arg1;
- (void)albumEditMenu:(id)arg1 clearDownload:(id)arg2;
- (void)albumEditMenu:(id)arg1 informAlbum:(id)arg2;
- (void)moreButtonClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (void)privateButtonClicked;
- (void)proceedDownload:(id)arg1;
- (void)proceedDownload;
- (void)confirmDownloadIn2G3G:(_Bool)arg1;
- (void)triggerDownload;
- (void)downloadButtonClicked;
- (void)shareButtonClicked;
- (void)commentButtonClicked;
- (void)doSubActionAndDownload:(_Bool)arg1;
- (void)subButtonClicked;
- (void)popupDeleteAlbumConfirmBox;
- (void)proceedUnsubAlbum:(_Bool)arg1;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)loadSongs;
- (void)doLoadSongs;
- (void)sourceScrollToCurrentSong;
- (void)finishLoadSongs:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView;
- (id)infoView;
- (id)albumView;
- (_Bool)isEqualToSourceController:(id)arg1;
- (void)createProductView;
- (void)createDigitalAlbumView;
- (void)checkUpdateDigitalAlbum;
- (void)configSections;
- (id)initWithAlbum:(id)arg1 willPlay:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end
