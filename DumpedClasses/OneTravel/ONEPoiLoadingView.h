//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface ONEPoiLoadingView : UIView
{
    UIActivityIndicatorView *_activityView;
    UILabel *_activityLabel;
    UILabel *_errorLabel;
}

+ (void)disMissInfoView:(id)arg1;
+ (void)showErrorInfo:(id)arg1 inView:(id)arg2 withHeigh:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)showLoaingInfoInView:(id)arg1 withOrigin:(struct CGPoint)arg2 withText:(id)arg3;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;

@end
