//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLLWLayout.h"

@class NSString;

@interface BLLWLayout : NSObject <BLLWLayout>
{
    double _height;
    struct CGRect _frame;
}

+ (id)layoutWithData:(id)arg1 Style:(id)arg2;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)defaultLayout;
- (id)initWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
