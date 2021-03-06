//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMMVQuality, NMVideoPlayControlView;

@protocol NMVideoPlayControlViewDelegate <NSObject>

@optional
- (void)videoPlayControlViewVolumeChanged:(NMVideoPlayControlView *)arg1;
- (void)videoPlayControlView:(NMVideoPlayControlView *)arg1 swtichToQuality:(NMMVQuality *)arg2;
- (void)videoPlayControlViewQualitySwitchButtonClicked:(NMVideoPlayControlView *)arg1;
- (void)videoPlayControlViewResignComment:(NMVideoPlayControlView *)arg1;
- (void)videoPlayControlView:(NMVideoPlayControlView *)arg1 endSeekingToTime:(double)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlView:(NMVideoPlayControlView *)arg1 seekToTime:(double)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewBeginSeeking:(NMVideoPlayControlView *)arg1 triggeredByGesture:(_Bool)arg2;
- (void)videoPlayControlView:(NMVideoPlayControlView *)arg1 switchToFullScreen:(_Bool)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewReplayButtonClicked:(NMVideoPlayControlView *)arg1;
- (void)videoPlayControlView:(NMVideoPlayControlView *)arg1 playPauseClicked:(_Bool)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewShareAction:(NMVideoPlayControlView *)arg1;
- (void)videoPlayControlViewBackButtonClicked:(NMVideoPlayControlView *)arg1;
@end

