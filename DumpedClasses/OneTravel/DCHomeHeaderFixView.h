//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class DCHomeHeaderFixViewModel, RACSubject, UIButton;

@interface DCHomeHeaderFixView : UIControl
{
    RACSubject *_btClickSubject;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    DCHomeHeaderFixViewModel *_viewModel;
}

+ (double)fixViewHeight;
@property(retain, nonatomic) DCHomeHeaderFixViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) RACSubject *btClickSubject; // @synthesize btClickSubject=_btClickSubject;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)arg1;
- (void)rightClick;
- (void)leftClick;
- (void)backClick;

@end

