//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCHeadInfoModel, SCRoundCornerImageView, UIButton, UIImageView, UILabel;

@interface SCHeadInfoView : UIView
{
    SCHeadInfoModel *_modelData;
    CDUnknownBlockType _clickEnventHandler;
    CDUnknownBlockType _removeEnventHandler;
    CDUnknownBlockType _longPressEnventHandler;
    UILabel *_nameLabel;
    SCRoundCornerImageView *_headImage;
    UIImageView *_lbsIcon;
    UIImageView *_crownIcon;
    UIButton *_editBtn;
}

+ (struct CGSize)controlSize;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIImageView *crownIcon; // @synthesize crownIcon=_crownIcon;
@property(retain, nonatomic) UIImageView *lbsIcon; // @synthesize lbsIcon=_lbsIcon;
@property(retain, nonatomic) SCRoundCornerImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType longPressEnventHandler; // @synthesize longPressEnventHandler=_longPressEnventHandler;
@property(copy, nonatomic) CDUnknownBlockType removeEnventHandler; // @synthesize removeEnventHandler=_removeEnventHandler;
@property(copy, nonatomic) CDUnknownBlockType clickEnventHandler; // @synthesize clickEnventHandler=_clickEnventHandler;
@property(retain, nonatomic) SCHeadInfoModel *modelData; // @synthesize modelData=_modelData;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onTapEditBtn:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onTapHeadImage:(id)arg1;
- (void)layoutSubviews;
- (void)setAsMoreControl;
- (void)setAsRemoveContactControl;
- (void)setAsAddContactControl;
- (void)reset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)makeMoreImage;

@end
