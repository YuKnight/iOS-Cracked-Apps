//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidCallbackDelegate.h"

@class NSString;

@interface QLMidManager : NSObject <MidCallbackDelegate>
{
}

+ (id)sharedInstance;
- (void)paseOmgIdData:(id)arg1;
- (void)loadMid;
- (void)onReFreshResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

