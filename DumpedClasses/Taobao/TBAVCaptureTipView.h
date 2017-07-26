//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ALAsset, NSDictionary, UIButton, UIImage, UIImageView, UILabel;

@interface TBAVCaptureTipView : UIView
{
    UIImageView *_backView;
    UILabel *_tipText;
    UIImageView *_imageView;
    UIButton *_btnClick;
    id <NSObject> _delegate;
    UIImage *_fullScreenImage;
    _Bool _isArrowUp;
    ALAsset *_asset;
    NSDictionary *_metaInfo;
}

@property(retain, nonatomic) NSDictionary *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isArrowUp; // @synthesize isArrowUp=_isArrowUp;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(nonatomic) __weak id <NSObject> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clickedCapture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
