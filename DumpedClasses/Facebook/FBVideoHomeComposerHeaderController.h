//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoHomePresenceSubscriptionCoordinatorListener-Protocol.h"

@class FBUserSession, FBVideoHomeComposerHeaderView, FBVideoHomePresenceSubscriptionCoordinator, NSString;

@interface FBVideoHomeComposerHeaderController : NSObject <FBVideoHomePresenceSubscriptionCoordinatorListener>
{
    FBUserSession *_session;
    NSString *_currentUserName;
    FBVideoHomeComposerHeaderView *_videoHomeComposerHeaderView;
    FBVideoHomePresenceSubscriptionCoordinator *_subscriptionCoordinator;
    id _userFetchQueryToken;
}

+ (_Bool)isLiveBroadcastingEnabled:(id)arg1;
@property(retain, nonatomic) FBVideoHomeComposerHeaderView *videoHomeComposerHeaderView; // @synthesize videoHomeComposerHeaderView=_videoHomeComposerHeaderView;
- (void).cxx_destruct;
- (void)_clearUserFetchQueryToken;
- (id)_query;
- (void)presenceSubscriptionCoordinator:(id)arg1 didUpdatePresence:(id)arg2;
- (void)_fetchCurrentUser;
- (void)_setCurrentUserName:(id)arg1;
- (void)_setCurrentUserForHeaderView;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
