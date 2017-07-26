//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PEFlipAnimationGroup : NSObject
{
    NSArray *_flips;
    NSArray *_fadeouts;
    NSArray *_dismisses;
}

@property(retain, nonatomic) NSArray *dismisses; // @synthesize dismisses=_dismisses;
@property(retain, nonatomic) NSArray *fadeouts; // @synthesize fadeouts=_fadeouts;
@property(retain, nonatomic) NSArray *flips; // @synthesize flips=_flips;
- (void).cxx_destruct;
- (void)applyFlipAnimation;
- (void)flipReset;
- (void)flip;
- (void)configFlipViews:(id)arg1 fadeoutViews:(id)arg2 dismissViews:(id)arg3;

@end
