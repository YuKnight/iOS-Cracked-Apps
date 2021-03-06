//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UINavigationController, UIPercentDrivenInteractiveTransition;

@interface TTLoginAnimationDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    UINavigationController *_viewController;
    UIPercentDrivenInteractiveTransition *_interactionController;
    unsigned long long _type;
}

+ (id)shareDelegate;
+ (void)setTapGestureRecognizer:(id)arg1;
+ (id)tapGestureRecognizer;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) __weak UINavigationController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)ttAnimationPan:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

