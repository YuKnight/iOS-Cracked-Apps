//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRForumItemStructModel, NSNumber;

@interface FROwnerApplyHistoryItemStructModel : FRBaseModel
{
    FRForumItemStructModel *_forum;
    NSNumber *_apply_status;
}

@property(retain, nonatomic) NSNumber *apply_status; // @synthesize apply_status=_apply_status;
@property(retain, nonatomic) FRForumItemStructModel *forum; // @synthesize forum=_forum;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

