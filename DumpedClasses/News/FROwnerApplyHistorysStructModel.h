//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FROwnerApplyHistoryItemStructModel><Optional>, NSNumber;

@interface FROwnerApplyHistorysStructModel : FRBaseModel
{
    NSNumber *_cursor;
    long long _has_more;
    NSArray<FROwnerApplyHistoryItemStructModel><Optional> *_history_list;
}

@property(retain, nonatomic) NSArray<FROwnerApplyHistoryItemStructModel><Optional> *history_list; // @synthesize history_list=_history_list;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

