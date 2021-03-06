//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXSelStyleTableCell.h"

@class FXSFriendInfo, KGThemeButton, KGThemeLabel, UIImageView, UIView;

@interface FXFriendTableViewCell : FXSelStyleTableCell
{
    _Bool _isEdit;
    id <FXFriendTapDelegate> _delegate;
    UIImageView *_headPortraitView;
    KGThemeLabel *_nicknameLabel;
    UIImageView *_starValueImageView;
    UIImageView *_treasureValueImageView;
    KGThemeButton *_concernButton;
    UIView *_bottomLine;
    FXSFriendInfo *_friendInfo;
}

@property(retain, nonatomic) FXSFriendInfo *friendInfo; // @synthesize friendInfo=_friendInfo;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) KGThemeButton *concernButton; // @synthesize concernButton=_concernButton;
@property(retain, nonatomic) UIImageView *treasureValueImageView; // @synthesize treasureValueImageView=_treasureValueImageView;
@property(retain, nonatomic) UIImageView *starValueImageView; // @synthesize starValueImageView=_starValueImageView;
@property(retain, nonatomic) KGThemeLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *headPortraitView; // @synthesize headPortraitView=_headPortraitView;
@property(nonatomic) id <FXFriendTapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapConcernBtn;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellWithData:(id)arg1 withEditState:(_Bool)arg2;

@end

