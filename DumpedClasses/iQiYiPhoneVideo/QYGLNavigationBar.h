//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UIViewController;

@interface QYGLNavigationBar : UIView
{
    UIView *_bottomView;
    NSString *_title;
    UIView *_bgView;
    UILabel *_titleLabel;
    UIButton *_backButton;
    UIButton *_shareButton;
    UIViewController *_controller;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)showShareWithTarget:(id)arg1 action:(SEL)arg2;
- (void)backAtion;
- (void)layoutSubviews;
- (id)initWithController:(id)arg1 withBackblock:(CDUnknownBlockType)arg2;
- (id)initWithController:(id)arg1;

@end

