//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGAlbumStoreBaseEntity.h"

@class NSArray;

@interface KGAlbumStoreRecommendEntity : KGAlbumStoreBaseEntity
{
    long long _wellsellTotal;
    long long _wellsellCurrentPage;
    NSArray *_wellsellItems;
    NSArray *_theNewDiscItems;
}

@property(retain, nonatomic) NSArray *theNewDiscItems; // @synthesize theNewDiscItems=_theNewDiscItems;
@property(retain, nonatomic) NSArray *wellsellItems; // @synthesize wellsellItems=_wellsellItems;
@property(nonatomic) long long wellsellCurrentPage; // @synthesize wellsellCurrentPage=_wellsellCurrentPage;
@property(nonatomic) long long wellsellTotal; // @synthesize wellsellTotal=_wellsellTotal;
- (void).cxx_destruct;
- (id)dic2Obj:(id)arg1;

@end
