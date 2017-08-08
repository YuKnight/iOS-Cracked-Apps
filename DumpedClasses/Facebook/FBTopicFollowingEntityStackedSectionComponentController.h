//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBSectionComponentController.h>

#import "FBGraphQLConnectionControllerLoadListener-Protocol.h"

@class NSString;

@interface FBTopicFollowingEntityStackedSectionComponentController : FBSectionComponentController <FBGraphQLConnectionControllerLoadListener>
{
    _Bool _didLogEndOfFeed;
}

- (void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2;
- (void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2;
- (void)maybeLogEndOfFeed;
- (id)typedComponent;
- (void)didScrollToBottom;
- (void)didLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
