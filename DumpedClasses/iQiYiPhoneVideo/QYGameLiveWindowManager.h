//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController;

@interface QYGameLiveWindowManager : NSObject
{
    UIViewController *_topViewController;
    UIViewController *_playerViewController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
- (void).cxx_destruct;

@end

