//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class KGSkinView, KGSliderDotInfo, KGThemeButton, KGThemeImageView, KGThemeLine, NSMutableDictionary, NSString, UIButton, UIColor, UILabel, UIView;

@interface KGSlider : UIControl <UIGestureRecognizerDelegate>
{
    struct CGPoint _upPoint;
    double _trackingValue;
    NSMutableDictionary *_otherValueView;
    NSMutableDictionary *_otherValue;
    _Bool canMoveValue;
    _Bool _sliderTracking;
    _Bool _processEvent;
    _Bool _isCanDrag;
    _Bool _isShowTouchRoundDot;
    _Bool _isShowTipText;
    KGThemeButton *_oilButton;
    KGSkinView *_backContentView;
    KGThemeLine *_contentView;
    double _value;
    double _minValue;
    double _maxValue;
    double _oilImageWidth;
    KGSkinView *_touchRoundDot;
    double _touchRoundDotWidth;
    UIColor *_touchRoundDotColor;
    UIView *_tipView;
    NSString *_tipText;
    UIColor *_tipViewBgColor;
    UIColor *_tipTextColor;
    double _tipViewMargin;
    CDUnknownBlockType _sliderChanging;
    CDUnknownBlockType _userTryDragMoveFail;
    CDUnknownBlockType _afterSliderChanged;
    KGSliderDotInfo *_sliderDotInfo;
    UIButton *_btnSliderDot;
    CDUnknownBlockType _sliderDotClicked;
    KGThemeImageView *_imageBGView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KGThemeImageView *imageBGView; // @synthesize imageBGView=_imageBGView;
@property(copy, nonatomic) CDUnknownBlockType sliderDotClicked; // @synthesize sliderDotClicked=_sliderDotClicked;
@property(retain, nonatomic) UIButton *btnSliderDot; // @synthesize btnSliderDot=_btnSliderDot;
@property(retain, nonatomic) KGSliderDotInfo *sliderDotInfo; // @synthesize sliderDotInfo=_sliderDotInfo;
@property(copy, nonatomic) CDUnknownBlockType afterSliderChanged; // @synthesize afterSliderChanged=_afterSliderChanged;
@property(copy, nonatomic) CDUnknownBlockType userTryDragMoveFail; // @synthesize userTryDragMoveFail=_userTryDragMoveFail;
@property(copy, nonatomic) CDUnknownBlockType sliderChanging; // @synthesize sliderChanging=_sliderChanging;
@property(nonatomic) double tipViewMargin; // @synthesize tipViewMargin=_tipViewMargin;
@property(retain, nonatomic) UIColor *tipTextColor; // @synthesize tipTextColor=_tipTextColor;
@property(retain, nonatomic) UIColor *tipViewBgColor; // @synthesize tipViewBgColor=_tipViewBgColor;
@property(nonatomic) _Bool isShowTipText; // @synthesize isShowTipText=_isShowTipText;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIColor *touchRoundDotColor; // @synthesize touchRoundDotColor=_touchRoundDotColor;
@property(nonatomic) double touchRoundDotWidth; // @synthesize touchRoundDotWidth=_touchRoundDotWidth;
@property(nonatomic) _Bool isShowTouchRoundDot; // @synthesize isShowTouchRoundDot=_isShowTouchRoundDot;
@property(retain, nonatomic) KGSkinView *touchRoundDot; // @synthesize touchRoundDot=_touchRoundDot;
@property(nonatomic) double oilImageWidth; // @synthesize oilImageWidth=_oilImageWidth;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) KGThemeLine *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) KGSkinView *backContentView; // @synthesize backContentView=_backContentView;
@property(readonly, nonatomic) KGThemeButton *oilButton; // @synthesize oilButton=_oilButton;
@property(nonatomic) _Bool isCanDrag; // @synthesize isCanDrag=_isCanDrag;
@property(nonatomic) _Bool processEvent; // @synthesize processEvent=_processEvent;
- (void).cxx_destruct;
- (void)btnClickSliderDot:(id)arg1;
- (id)dotView:(id)arg1;
- (void)setEdgeDragEffect;
- (void)setProgressValue:(double)arg1 animate:(_Bool)arg2;
- (id)sliderCellViewForKey:(id)arg1;
- (void)setSliderColor:(id)arg1 forKey:(id)arg2;
- (void)setSliderValue:(double)arg1 forKey:(id)arg2;
- (double)SliderValueForKey:(id)arg1;
@property(readonly, nonatomic, getter=isSliderTracking) _Bool sliderTracking; // @synthesize sliderTracking=_sliderTracking;
- (void)FitPoint:(double)arg1;
- (void)panEvent:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)privateInit;
- (void)setTipText:(id)arg1 subText:(id)arg2;
- (void)moveTipViewAlignOilButton;
- (void)moveTipView:(struct CGPoint)arg1;
- (void)hiddenTipView:(_Bool)arg1;
- (void)hiddenRoundDot:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
