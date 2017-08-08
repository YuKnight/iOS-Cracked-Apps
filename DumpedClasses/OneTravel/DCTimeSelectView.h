//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCDotLoadingView, DCInviteTipsView, DCTimePicker, DCTimeSelectViewModel, NSDate;

@interface DCTimeSelectView : DCEmergeCustomBaseView
{
    CDUnknownBlockType _tapLoadingBlock;
    NSDate *_selectedDate;
    DCTimePicker *_timePicker;
    DCDotLoadingView *_loadingView;
    DCInviteTipsView *_tipsView;
}

@property(retain, nonatomic) DCInviteTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) DCDotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) DCTimePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(copy, nonatomic) CDUnknownBlockType tapLoadingBlock; // @synthesize tapLoadingBlock=_tapLoadingBlock;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)showLoadingError:(id)arg1;
- (void)showLoading;
- (void)showIconAnimation;
- (void)_setupDesc;
- (void)_setupTimePicker;
- (void)_setup;
- (void)dealloc;
- (void)makeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) DCTimeSelectViewModel *viewModel; // @dynamic viewModel;

@end
