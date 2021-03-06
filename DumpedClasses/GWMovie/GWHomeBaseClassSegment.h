//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIView;
@protocol GWHomeBaseClassSegmentDelegate;

@interface GWHomeBaseClassSegment : UIControl
{
    UIView *_lineView;
    UIButton *_selectBtn;
    long long _currentIndex;
    id <GWHomeBaseClassSegmentDelegate> _delegate;
}

@property(nonatomic) __weak id <GWHomeBaseClassSegmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)setItemsData:(id)arg1;
- (void)buttonClick:(id)arg1;

@end

