//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXMobileLiveDao : FXBasisHttpDao
{
}

- (id)mobileLiveClassifyListWithLabelId:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 longitude:(double)arg4 latitude:(double)arg5 error:(id *)arg6;
- (id)mobileLiveWithPage:(long long)arg1 PageSize:(long long)arg2 sort:(long long)arg3 LoginUserLongitude:(double)arg4 LoginUserLatitude:(double)arg5 error:(id *)arg6;
- (id)mobileLiveRecommendListWithCityId:(id)arg1 error:(id *)arg2;
- (id)mobileLiveHotClassifyListWithType:(long long)arg1 classifyId:(long long)arg2 page:(long long)arg3 pageSize:(long long)arg4 cityId:(id)arg5 areaId:(id)arg6 error:(id *)arg7;
- (id)checkUserIsMobileStarWithsuccessBlockWitherror:(id *)arg1;
- (id)requestMobileLiveListWithPage:(long long)arg1 pageSize:(long long)arg2 sort:(long long)arg3 loginUserLongitude:(double)arg4 loginUserLatitude:(double)arg5 error:(id *)arg6;

@end
