//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class SSFeedbackPostView;

@interface SSFeedbackPostViewController : SSViewControllerBase
{
    SSFeedbackPostView *_postView;
}

@property(retain, nonatomic) SSFeedbackPostView *postView; // @synthesize postView=_postView;
- (void).cxx_destruct;
- (void)setUpPanAction;
- (void)back:(id)arg1;
- (void)send:(id)arg1;
- (struct CGRect)frameForFeedbackView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

