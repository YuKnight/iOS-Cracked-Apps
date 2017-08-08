//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFeedToolbox, FBUserSession;
@protocol FBComposerFlowDelegate, FBNavigationCoordinator;

@interface FBElectionHubFeedDataSourceComponentContext : NSObject
{
    FBFeedToolbox *_toolbox;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    id <FBComposerFlowDelegate> _composerFlowDelegate;
}

@property(readonly, nonatomic) __weak id <FBComposerFlowDelegate> composerFlowDelegate; // @synthesize composerFlowDelegate=_composerFlowDelegate;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FBFeedToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (id)initWithFeedToolbox:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 composerFlowDelegate:(id)arg4;

@end
