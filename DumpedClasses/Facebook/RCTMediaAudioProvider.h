//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTAudioProvider-Protocol.h"

@interface RCTMediaAudioProvider : NSObject <RCTAudioProvider>
{
    _Bool _didListenToWillResignActive;
}

- (void)stop:(id)arg1;
- (void)play:(id)arg1 volume:(double)arg2;
- (void)pause:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setPauseOnAppBackground:(id)arg1 shouldPause:(_Bool)arg2;
- (void)setVolume:(id)arg1 atPercent:(double)arg2;
- (void)setCurrentTime:(id)arg1 atSeconds:(double)arg2;
- (void)getState:(id)arg1 properties:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)deallocLongFormAudio:(id)arg1;
- (void)preloadFiles:(id)arg1;
- (void)dealloc;
- (void)_willResignActive:(id)arg1;
- (void)_stopAVSound:(id)arg1;

@end
