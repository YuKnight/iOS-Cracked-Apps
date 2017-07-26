//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AFEScanViewProtocol.h"

@class AFEEyeScanNormalView, AFEScanErrorView, AFEStatusBar, AVAudioPlayer, NSString;

@interface AFEEyeScanView : UIView <AFEScanViewProtocol>
{
    _Bool _lock;
    UIView *_view;
    AFEStatusBar *_statusBar;
    AFEEyeScanNormalView *_scanView;
    AFEScanErrorView *_errorView;
    long long _status;
    NSString *_errMsgCache;
    NSString *_audioPathCache;
    AVAudioPlayer *_audioPlayer;
}

@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(copy, nonatomic) NSString *audioPathCache; // @synthesize audioPathCache=_audioPathCache;
@property(copy, nonatomic) NSString *errMsgCache; // @synthesize errMsgCache=_errMsgCache;
@property(nonatomic) _Bool lock; // @synthesize lock=_lock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak AFEScanErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak AFEEyeScanNormalView *scanView; // @synthesize scanView=_scanView;
@property(nonatomic) __weak AFEStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)loadAudioWithPath:(id)arg1;
- (void)showSoundStatus:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPercent:(double)arg1;
- (void)clearErrorMessageAndAudio;
- (void)showError:(id)arg1 withAudio:(id)arg2;
- (void)showPercent:(double)arg1;
- (void)stopScanWithAudio:(id)arg1;
- (void)beginDynScan;
- (void)beginScanWithAudio:(id)arg1;
- (void)setScanViewScale:(double)arg1;
- (void)setNaviBarAlpha:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
