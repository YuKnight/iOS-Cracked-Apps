//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBAccsFilterManager : NSObject
{
    NSMutableArray *_before_filters;
    NSMutableArray *_after_filters;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)addAfterFilter:(id)arg1;
- (void)addBeforeFilter:(id)arg1;
- (void)doAfter:(id)arg1 response:(id)arg2 error:(id)arg3 parameters:(id)arg4;
- (void)doBefore:(id)arg1 response:(id)arg2 error:(id)arg3 parameters:(id)arg4;
- (id)init;

@end
