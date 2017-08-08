//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBUserSession, NSDictionary, NSString;
@protocol FBGraphSearchNullStateContentLoaderProtocol;

@interface FBGraphSearchNullStateService : NSObject <FBAppService>
{
    FBUserSession *_session;
    NSDictionary *_contentLoaderMap;
    id <FBGraphSearchNullStateContentLoaderProtocol> _defaultContentLoader;
    _Bool _hasStartupPrepared;
}

- (void).cxx_destruct;
- (void)_onAppBecomeActive:(id)arg1;
- (void)stopAppService;
- (void)startAppService;
- (id)contentLoaderForType:(unsigned long long)arg1;
- (id)defaultContentLoader;
- (void)_startupPreparation;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
