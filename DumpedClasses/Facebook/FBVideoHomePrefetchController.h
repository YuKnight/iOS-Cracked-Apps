//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoHomeGuideBadgeUpdateListener-Protocol.h"
#import "FBVideoHomeGuideDataFetcherListener-Protocol.h"
#import "FBVideoHomePrefetchControllerProtocol-Protocol.h"
#import "FBVideoHomePrefetchMetadataFetcherDelegate-Protocol.h"

@class FBVideoHomeDataStaleTimer, FBVideoHomeExperimentConfig, FBVideoHomeGuideBadgeUpdateListenerAnnouncer, FBVideoHomeGuideDataFetcher, FBVideoHomePrefetchMetadata, FBVideoHomePrefetchMetadataFetcher, FBVideoHomeSession, NSString;
@protocol FBVideoHomeJewelController, FBVideoHomePrefetchControllerDelegate;

@interface FBVideoHomePrefetchController : NSObject <FBVideoHomeGuideDataFetcherListener, FBVideoHomeGuideBadgeUpdateListener, FBVideoHomePrefetchMetadataFetcherDelegate, FBVideoHomePrefetchControllerProtocol>
{
    FBVideoHomeSession *_videoHomeSession;
    FBVideoHomeExperimentConfig *_videoHomeExperiment;
    id <FBVideoHomeJewelController> _jewelController;
    FBVideoHomePrefetchMetadataFetcher *_metadataFetcher;
    NSString *_metadataFetchLogReason;
    FBVideoHomeGuideDataFetcher *_dataFetcher;
    FBVideoHomePrefetchMetadata *_metadata;
    FBVideoHomeDataStaleTimer *_staleTimer;
    FBVideoHomeGuideBadgeUpdateListenerAnnouncer *_badgeUpdateAnnouncer;
    id <FBVideoHomePrefetchControllerDelegate> _delegate;
    unsigned long long _prefetchBehavior;
}

@property(nonatomic) unsigned long long prefetchBehavior; // @synthesize prefetchBehavior=_prefetchBehavior;
@property(nonatomic) __weak id <FBVideoHomePrefetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_prefetchEnabled;
- (void)_prefetchWithBadgeCount:(id)arg1 loggingReason:(id)arg2;
- (void)_dataStaleTimerDidFireWhileForegrounding:(_Bool)arg1;
- (void)_cancelDataStaleTimer;
- (void)_scheduleDataStaleTimer;
- (void)_initializeDataStaleTimer;
- (void)metadataFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)metadataFetcher:(id)arg1 didFetchMetadata:(id)arg2;
- (void)_requestMetadataWithLoggingReason:(id)arg1;
- (void)_applicationDidEnterForegroundAndIsIdle;
- (void)badgeUpdateSubscriptionHandler:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2;
- (void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1;
- (void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1;
- (void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5;
- (void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2;
- (_Bool)prefetchEnabled;
- (_Bool)isLoading;
- (id)buildDebugInfo;
- (void)loadPrefetchMetadataWithLoggingReason:(id)arg1;
- (void)dealloc;
- (id)initWithVideoHomeSession:(id)arg1 dataFetcher:(id)arg2 metadataFetcher:(id)arg3 badgeUpdateAnnouncer:(id)arg4 jewelController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

