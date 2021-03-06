//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMPlayCountView, UIButton, UIImageView, UILabel;

@interface NMMVImageView : UIView
{
    unsigned long long _type;
    UIButton *_imageView;
    UIImageView *_imageCoverView;
    NMPlayCountView *_playCountView;
    UIImageView *_bottomShadowView;
    UILabel *_majorLabel;
    UILabel *_secondaryLabel;
    struct UIEdgeInsets _textEdgeInsets;
    _Bool _hideMajorText;
    id <NMMVImageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMMVImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideMajorText; // @synthesize hideMajorText=_hideMajorText;
- (void).cxx_destruct;
- (void)imageButtonTouched:(id)arg1;
- (void)setMajorTextColor:(id)arg1 secondaryTextColor:(id)arg2;
- (void)setTextEdgeInsects:(struct UIEdgeInsets)arg1;
- (void)setImageURL:(id)arg1 playCount:(unsigned long long)arg2 majorText:(id)arg3 secondaryText:(id)arg4 size:(struct CGSize)arg5;
- (void)layoutTextLabels;
- (void)layoutSubviews;
- (id)initWithType:(unsigned long long)arg1;

@end

