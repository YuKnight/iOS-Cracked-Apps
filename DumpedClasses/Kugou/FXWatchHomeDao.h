//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@class NeeFileCache;

@interface FXWatchHomeDao : FXBasisHttpDao
{
    NeeFileCache *_recommendPageFile;
}

@property(retain, nonatomic) NeeFileCache *recommendPageFile; // @synthesize recommendPageFile=_recommendPageFile;
- (void).cxx_destruct;
- (id)requestWatchSingerAdDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndError:(id *)arg3;
- (id)filterArray:(id)arg1;
- (id)getRecommendData:(id)arg1;
- (id)requestShortVideoListDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndChannelId:(long long)arg3 AndSort:(long long)arg4 AndError:(id *)arg5;
- (id)requestShortVideoChannelWithError:(id *)arg1;
- (_Bool)isNetPack;
- (long long)networkType;
- (long long)operatorType;
- (id)requestWatchHomeTabSortWithRandomNumber:(int)arg1 AndError:(id *)arg2;
- (id)requsetWatchHomeAdLinkWithType:(int)arg1 AndError:(id *)arg2;
- (id)requsetWatchHomeRecommentLiveClassifyDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndId:(long long)arg3 exids:(id)arg4 AndError:(id *)arg5;
- (id)requsetWatchHomeRecommentMVDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndId:(long long)arg3 AndError:(id *)arg4;
- (id)requsetWatchHomeRecommentShortVideoDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndId:(long long)arg3 AndError:(id *)arg4;
- (id)requsetWatchHomeRecommentKGLiveDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndError:(id *)arg3;
- (id)requsetWatchHomeRecommentFxDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 exids:(id)arg3 AndError:(id *)arg4;
- (id)requsetWatchHomeRecommentHotDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndExids:(id)arg3 AndError:(id *)arg4;
- (id)requsetWatchHomeRecommentDataWithPage:(long long)arg1 AndHideShort:(long long)arg2 AndExids:(id)arg3 AndError:(id *)arg4;
- (id)requsetWatchHomeFallDataWithPage:(long long)arg1 AndPageSize:(long long)arg2 AndError:(id *)arg3;
- (id)getTitleModelDicWithFlag:(long long)arg1;
- (void)saveTitleModelDic:(id)arg1 AndFlag:(long long)arg2;
- (id)requestWatchHomeShortTitleWithFlag:(long long)arg1 AndError:(id *)arg2;
- (long long)requestLivingCount:(id *)arg1;

@end

