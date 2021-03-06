//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTWebImageView.h"

@class CTHotelChatCacheBean, CTHotelChatContentViewModel, NSTimer, UIActivityIndicatorView, UILabel, UIView;

@interface CTHotelChatImageView : CTWebImageView
{
    CTHotelChatContentViewModel *_chatModel;
    CTHotelChatCacheBean *_chatCache;
    UIView *_maskView;
    UILabel *_progressLab;
    NSTimer *_maskTimer;
    UIActivityIndicatorView *_activityIndicator;
    long long _scale;
}

@property(nonatomic) long long scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSTimer *maskTimer; // @synthesize maskTimer=_maskTimer;
@property(retain, nonatomic) UILabel *progressLab; // @synthesize progressLab=_progressLab;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak CTHotelChatCacheBean *chatCache; // @synthesize chatCache=_chatCache;
@property(nonatomic) __weak CTHotelChatContentViewModel *chatModel; // @synthesize chatModel=_chatModel;
- (void).cxx_destruct;
- (void)handleTapAction:(id)arg1;
- (void)maskScaleIncreased;
- (void)stopMaksAnimating;
- (void)startMaskAnimating;
- (void)initView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

