//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLocationAuthorizationListener-Protocol.h"
#import "FBViewerContextClassProvidable-Protocol.h"

@class FBLocationManager, FBMChatContextSyncManager, FBUserSession, NSDate, NSString;

@interface FBMChatContextManager : NSObject <FBLocationAuthorizationListener, FBViewerContextClassProvidable>
{
    _Bool _isLoaded;
    _Bool _shouldShowChatContext;
    _Bool _shouldShowFacepile;
    _Bool _isSessionStarted;
    _Bool _isLocationDisabled;
    _Bool _isLocationSharingEnabled;
    CDUnknownBlockType _completionBlock;
    FBUserSession *_session;
    FBMChatContextSyncManager *_syncManager;
    FBLocationManager *_locationManager;
    NSDate *_lastFetchingChatContextStatusDate;
}

@property(retain, nonatomic) NSDate *lastFetchingChatContextStatusDate; // @synthesize lastFetchingChatContextStatusDate=_lastFetchingChatContextStatusDate;
@property(nonatomic) _Bool isLocationSharingEnabled; // @synthesize isLocationSharingEnabled=_isLocationSharingEnabled;
@property(nonatomic) _Bool isLocationDisabled; // @synthesize isLocationDisabled=_isLocationDisabled;
@property(retain, nonatomic) FBLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) FBMChatContextSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(nonatomic) _Bool isSessionStarted; // @synthesize isSessionStarted=_isSessionStarted;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) _Bool shouldShowFacepile; // @synthesize shouldShowFacepile=_shouldShowFacepile;
@property(readonly, nonatomic) _Bool shouldShowChatContext; // @synthesize shouldShowChatContext=_shouldShowChatContext;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (void)locationAuthorizationDidChange:(int)arg1;
- (void)_updateShouldShowChatContextState;
- (void)_onLocationChanged:(id)arg1;
- (void)_didFetchStatusWithSharingEnabled:(id)arg1;
- (void)_fetchStatus;
- (_Bool)_isCachedStatusStale;
- (void)_onApplicationForeground;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (_Bool)_isEnabled;
- (void)syncChatContext;
- (void)stopSession;
- (void)startSession;
- (_Bool)shouldShowLocationIconForType:(id)arg1;
- (_Bool)shouldShowChatContextForType:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
