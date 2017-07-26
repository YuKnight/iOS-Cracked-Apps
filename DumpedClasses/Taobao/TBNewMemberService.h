//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"

@class NSString;

@interface TBNewMemberService : NSObject <TBSDKServerDelegate>
{
    CDUnknownBlockType _completionBlock;
    NSString *_pageName;
    NSString *_utdid;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)newMemberBottomBarTapped:(id)arg1;
- (void)requestFailed:(id)arg1;
- (_Bool)needMakeMTOPRequestForID:(id)arg1 isLogined:(_Bool)arg2;
- (void)cacheNotShowingResponseForID:(id)arg1 isLogined:(_Bool)arg2;
- (void)requestSuccess:(id)arg1;
- (void)newMemberBottomBarForPage:(int)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
