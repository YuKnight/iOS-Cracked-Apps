//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface GWBaseMaskViewController : UIViewController
{
    _Bool _isTapClose;
    float _topViewHeight;
    UIView *_topView;
    UIView *_bottomView;
}

@property(nonatomic) float topViewHeight; // @synthesize topViewHeight=_topViewHeight;
@property(nonatomic) _Bool isTapClose; // @synthesize isTapClose=_isTapClose;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)onTouched:(id)arg1;
- (void)hide;
- (void)show;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithTopViewHeight:(float)arg1;

@end

