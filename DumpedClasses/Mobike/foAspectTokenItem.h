//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FoAspectToken.h"

@class NSString;

@interface foAspectTokenItem : NSObject <FoAspectToken>
{
    _Bool _isBeforeBlock;
    id _obj;
    SEL _instanceSelKey;
    NSString *_uuid;
}

+ (id)nullItem;
@property(nonatomic) _Bool isBeforeBlock; // @synthesize isBeforeBlock=_isBeforeBlock;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) SEL instanceSelKey; // @synthesize instanceSelKey=_instanceSelKey;
@property(nonatomic) __weak id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)remove;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

