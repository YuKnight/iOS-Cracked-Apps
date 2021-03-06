//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "QXLocalPlayerBottomViewDelegate-Protocol.h"
#import "QXLocalPlayerControlViewDelegate-Protocol.h"
#import "QXPlayerControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSString, QXFullScreenLiveRoomErrorView, QXFullScreenLoginActionSheetView, QXFullScreenVPageScrollView, QXLocalPlayerControlView, QXPlayerController, QXShortPlayBottomView, QXUserSpaceLiveModel, UIButton, UIControl, UIImageView, UITapGestureRecognizer, UIView;

@interface QXLocalPlayBaseViewController : QiXiuBaseVC <QXPlayerControllerDelegate, QXLocalPlayerBottomViewDelegate, QXLocalPlayerControlViewDelegate, UIActionSheetDelegate>
{
    _Bool _isWaiting;
    _Bool _hasStartedPlay;
    _Bool _isSwitchPlay;
    _Bool _isRestart;
    UIView *_contentView;
    QXShortPlayBottomView *_bottomView;
    QXUserSpaceLiveModel *_data;
    NSArray *_dataList;
    QXPlayerController *_qxPlayerVC;
    UITapGestureRecognizer *_singleTapGesture;
    NSString *_anchorIcon;
    NSString *_anchorName;
    QXFullScreenLoginActionSheetView *_loginActionView;
    QXLocalPlayerControlView *_playerControlView;
    QXFullScreenVPageScrollView *_roomPageView;
    UIImageView *_playLoading;
    UIImageView *_playLoadingIcon;
    UIImageView *_bgImage;
    UIButton *_maskView;
    long long _currentIndex;
    UIControl *_firstPlayGuideView;
    UIButton *_closeBtn;
    UIButton *_shareBtn;
    QXFullScreenLiveRoomErrorView *_errorView;
}

@property(retain, nonatomic) QXFullScreenLiveRoomErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIControl *firstPlayGuideView; // @synthesize firstPlayGuideView=_firstPlayGuideView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isRestart; // @synthesize isRestart=_isRestart;
@property(nonatomic) _Bool isSwitchPlay; // @synthesize isSwitchPlay=_isSwitchPlay;
@property(nonatomic) _Bool hasStartedPlay; // @synthesize hasStartedPlay=_hasStartedPlay;
@property(nonatomic) _Bool isWaiting; // @synthesize isWaiting=_isWaiting;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIImageView *playLoadingIcon; // @synthesize playLoadingIcon=_playLoadingIcon;
@property(retain, nonatomic) UIImageView *playLoading; // @synthesize playLoading=_playLoading;
@property(retain, nonatomic) QXFullScreenVPageScrollView *roomPageView; // @synthesize roomPageView=_roomPageView;
@property(retain, nonatomic) QXLocalPlayerControlView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) QXFullScreenLoginActionSheetView *loginActionView; // @synthesize loginActionView=_loginActionView;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(copy, nonatomic) NSString *anchorIcon; // @synthesize anchorIcon=_anchorIcon;
@property(nonatomic) __weak UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(retain, nonatomic) QXPlayerController *qxPlayerVC; // @synthesize qxPlayerVC=_qxPlayerVC;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) QXUserSpaceLiveModel *data; // @synthesize data=_data;
@property(retain, nonatomic) QXShortPlayBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (long long)borderProtect:(long long)arg1;
- (void)requestLikeStatus;
- (void)getFriendships;
- (void)maskClick:(id)arg1;
- (void)rotate360:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isGestureAvailable:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)shareClicked;
- (_Bool)checkNetStatus;
- (void)loginViewActionSheetCallBack:(_Bool)arg1;
- (void)showMaskFor:(double)arg1;
- (void)openLoginActionView;
- (void)closeLoginActionView;
- (void)hidMask;
- (void)hideFirstGuide;
- (void)hiddenNetInfo;
- (void)showNetInfoWithType:(int)arg1;
- (void)refreshBlurImage;
- (void)endWaiting:(id)arg1;
- (void)startWaiting:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)playbackTimeChanged:(id)arg1;
- (void)onContentStartPlay:(id)arg1;
- (void)localPlayerControlViewDidBeginTouch:(id)arg1;
- (void)localPlayerControlView:(id)arg1 didChangePlayTime:(unsigned long long)arg2;
- (void)localPlayerControlView:(id)arg1 didChangePlayState:(long long)arg2;
- (void)localPlayerBottomView:(id)arg1 didClickAvatar:(id)arg2;
- (void)localPlayerBottomView:(id)arg1 didClickFollowBtn:(_Bool)arg2;
- (_Bool)canDragBack:(id)arg1;
- (void)showFirstPlayGuide;
- (void)playbackFinshed:(id)arg1;
- (void)openPlayerWithTvid:(id)arg1 url:(id)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)shareBtnClicked;
- (void)closeBtnAction;
- (void)setupGesture;
- (void)initUIAction;
- (void)initUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

