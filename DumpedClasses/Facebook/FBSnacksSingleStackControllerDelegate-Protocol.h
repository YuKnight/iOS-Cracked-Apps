//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSnacksSingleStackController;

@protocol FBSnacksSingleStackControllerDelegate <NSObject>
- (void)singleStackControllerDidReceiveProfileTap:(FBSnacksSingleStackController *)arg1;
- (void)singleStackControllerDidResumePlayback:(FBSnacksSingleStackController *)arg1;
- (_Bool)singleStackControllerShouldRewindFirstItem:(FBSnacksSingleStackController *)arg1;
- (_Bool)singleStackControllerCanResumePlayback:(FBSnacksSingleStackController *)arg1;
- (void)singleStackControllerDidReceiveCloseAction:(FBSnacksSingleStackController *)arg1;
- (void)singleStackControllerShouldPresentCameraViewController:(FBSnacksSingleStackController *)arg1 completion:(void (^)(_Bool, FBCompositionModelBundle *, FBComposerPublisherData *))arg2;
- (void)singleStackController:(FBSnacksSingleStackController *)arg1 didRewindPastFirstItemWithNavigationAction:(unsigned long long)arg2;
- (void)singleStackController:(FBSnacksSingleStackController *)arg1 didAdvancePastLastItemWithNavigationAction:(unsigned long long)arg2;
- (void)singleStackControllerDidChangeItem:(FBSnacksSingleStackController *)arg1;
@end

