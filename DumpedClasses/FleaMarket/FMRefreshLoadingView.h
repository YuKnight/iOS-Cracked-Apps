//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView;

@interface FMRefreshLoadingView : UIView
{
    UIImageView *_animationImageView;
    NSArray *_dotArray;
}

@property(retain, nonatomic) NSArray *dotArray; // @synthesize dotArray=_dotArray;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

@end
