//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QXUserSpaceContributionRequest;

@interface QXContributionService : NSObject
{
    QXUserSpaceContributionRequest *_contributionRequest;
    NSString *_roomId;
    NSString *_liveId;
    NSString *_anchorId;
    NSString *_roomType;
}

@property(copy, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)handleResultWithError:(id)arg1 data:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestUserSpaceDataWithType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestDataWithType:(id)arg1 fromUserSpace:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestContributionListWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

