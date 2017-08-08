//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

@class GWPictureListProvider, NSMutableArray, UIView;
@protocol GWAppTypeDelegate;

@interface GWPicturesWaterFlowViewController : GWBaseTableViewController
{
    _Bool _hiddenProgress;
    _Bool _canDisplayImage;
    id <GWAppTypeDelegate> _relateInfo;
    double _topHeight;
    UIView *_topView;
    CDUnknownBlockType _didGoBackBlock;
    CDUnknownBlockType _didPresentViewController;
    NSMutableArray *_pictureList;
    CDUnknownBlockType _didFetchPicturelistBlock;
    GWPictureListProvider *_picturesProvider;
    NSMutableArray *_viedeoTableInfoArray;
    long long _iVideoTotal;
    long long _iPictureTotal;
    NSMutableArray *_videoTitleArray;
    NSMutableArray *_videoSectionListArray;
    long long _currentVideoSectionIndex;
}

@property(nonatomic) long long currentVideoSectionIndex; // @synthesize currentVideoSectionIndex=_currentVideoSectionIndex;
@property(retain, nonatomic) NSMutableArray *videoSectionListArray; // @synthesize videoSectionListArray=_videoSectionListArray;
@property(retain, nonatomic) NSMutableArray *videoTitleArray; // @synthesize videoTitleArray=_videoTitleArray;
@property(nonatomic) long long iPictureTotal; // @synthesize iPictureTotal=_iPictureTotal;
@property(nonatomic) long long iVideoTotal; // @synthesize iVideoTotal=_iVideoTotal;
@property(retain, nonatomic) NSMutableArray *viedeoTableInfoArray; // @synthesize viedeoTableInfoArray=_viedeoTableInfoArray;
@property(retain, nonatomic) GWPictureListProvider *picturesProvider; // @synthesize picturesProvider=_picturesProvider;
@property(copy, nonatomic) CDUnknownBlockType didFetchPicturelistBlock; // @synthesize didFetchPicturelistBlock=_didFetchPicturelistBlock;
@property(nonatomic) _Bool canDisplayImage; // @synthesize canDisplayImage=_canDisplayImage;
@property(nonatomic) _Bool hiddenProgress; // @synthesize hiddenProgress=_hiddenProgress;
@property(retain, nonatomic) NSMutableArray *pictureList; // @synthesize pictureList=_pictureList;
@property(copy, nonatomic) CDUnknownBlockType didPresentViewController; // @synthesize didPresentViewController=_didPresentViewController;
@property(copy, nonatomic) CDUnknownBlockType didGoBackBlock; // @synthesize didGoBackBlock=_didGoBackBlock;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) double topHeight; // @synthesize topHeight=_topHeight;
@property(retain, nonatomic) id <GWAppTypeDelegate> relateInfo; // @synthesize relateInfo=_relateInfo;
- (void).cxx_destruct;
- (void)addPicturesFromLocal:(id)arg1 pictureCount:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addPictures:(id)arg1 result:(id)arg2;
- (void)requestPictureList:(long long)arg1;
- (void)onPictureClickedWithIndex:(long long)arg1 line:(unsigned long long)arg2;
- (id)visibleImagesDicWithAllList:(id)arg1;
- (void)beginRefreshFromFooter;
- (void)beginRefreshFromHeader;
- (_Bool)isOpenPictureWaterFlow;
- (double)resetAnimation:(double)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) struct CGPoint reviseOffset;

@end
