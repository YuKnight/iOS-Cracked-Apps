//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, YXShareAppInfo;

@protocol YXAppCacheDelegate <NSObject>
- (_Bool)saveAppInfo:(YXShareAppInfo *)arg1;
- (_Bool)saveAppInfos:(NSArray *)arg1;
- (_Bool)appInfoCached:(NSString *)arg1;
@end

