//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBNativeTemplateToastView, NSString;

@interface FBNativeTemplateToastViewController : UIViewController
{
    NSString *_message;
    unsigned long long _duration;
    unsigned long long _position;
    FBNativeTemplateToastView *_view;
}

- (void).cxx_destruct;
- (void)enqueueHide;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithMessage:(id)arg1 duration:(unsigned long long)arg2 position:(unsigned long long)arg3;

@end
