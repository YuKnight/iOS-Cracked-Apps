//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBSearchComponentModel;

@interface FBSearchLazyModuleComponentState : FBValueObject <NSCopying>
{
    unsigned long long _downloadState;
    FBSearchComponentModel *_downloadResult;
}

@property(readonly, copy, nonatomic) FBSearchComponentModel *downloadResult; // @synthesize downloadResult=_downloadResult;
@property(readonly, nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
- (void).cxx_destruct;
- (id)initWithDownloadState:(unsigned long long)arg1 downloadResult:(id)arg2;

@end

