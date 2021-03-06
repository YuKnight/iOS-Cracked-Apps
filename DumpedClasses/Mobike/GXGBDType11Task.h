//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXGBDTypeTask.h"

#import "GXGBDTaskItemManagerDelegate.h"
#import "GXGbdLbsClientDelegate.h"

@class CLLocation, GXGbdLbsClient, NSString;

@interface GXGBDType11Task : GXGBDTypeTask <GXGBDTaskItemManagerDelegate, GXGbdLbsClientDelegate>
{
    CLLocation *_location;
    GXGbdLbsClient *_lbsClient;
}

+ (_Bool)isReportEnable;
@property(retain, nonatomic) GXGbdLbsClient *lbsClient; // @synthesize lbsClient=_lbsClient;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)taskItemManagerTaskFinishWithSuccess:(_Bool)arg1;
- (_Bool)isStopTask;
- (_Bool)isContinueTimer;
- (void)reportNewLocation:(id)arg1 withError:(id)arg2;
- (id)buildPostBodyData;
- (void)startTaskWithBuildBodyStrCallback:(CDUnknownBlockType)arg1;
- (void)fetchGPSLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

