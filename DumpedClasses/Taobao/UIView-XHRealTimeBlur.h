//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (XHRealTimeBlur)
- (void)disMissRealTimeBlur;
- (void)showRealTimeBlurWithBlurStyle:(long long)arg1 hasTapGestureEnable:(_Bool)arg2;
- (void)showRealTimeBlurWithBlurStyle:(long long)arg1;
- (void)setRealTimeBlur:(id)arg1;
- (id)realTimeBlur;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlurViewCompleted;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlurViewCompleted;
@property(copy, nonatomic) CDUnknownBlockType didShowBlurViewcompleted;
@property(copy, nonatomic) CDUnknownBlockType willShowBlurViewcomplted;
@end
