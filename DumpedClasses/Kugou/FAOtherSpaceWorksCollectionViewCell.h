//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FAUserStarMV, UIButton, UICollectionView, UIImageView, UILabel, UIView;

@interface FAOtherSpaceWorksCollectionViewCell : UICollectionViewCell
{
    id _controller;
    UICollectionView *_collectionView;
    UIImageView *_hotHotOpusTipsView;
    UIImageView *_hotOpusTipsExplainView;
    id <FAOtherSpaceWorksCollectionViewCellDelegate> _delegate;
    UIButton *_praiseBtn;
    UIImageView *_markingIcon;
    UILabel *_titleLable;
    UIImageView *_songIcon;
    UIImageView *_playIcon;
    UILabel *_playTimes;
    UIButton *_deleteBtn;
    UIImageView *_backImage;
    UIView *_playIngMVCoverView;
    UIView *_viewPlayingView;
    FAUserStarMV *_starMVInfo;
    UIView *_grayBackGroundView;
    long long _type;
    UILabel *_liveIconTitle;
}

@property(retain, nonatomic) UILabel *liveIconTitle; // @synthesize liveIconTitle=_liveIconTitle;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *grayBackGroundView; // @synthesize grayBackGroundView=_grayBackGroundView;
@property(retain, nonatomic) FAUserStarMV *starMVInfo; // @synthesize starMVInfo=_starMVInfo;
@property(retain, nonatomic) UIView *viewPlayingView; // @synthesize viewPlayingView=_viewPlayingView;
@property(retain, nonatomic) UIView *playIngMVCoverView; // @synthesize playIngMVCoverView=_playIngMVCoverView;
@property(retain, nonatomic) UIImageView *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *playTimes; // @synthesize playTimes=_playTimes;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UIImageView *songIcon; // @synthesize songIcon=_songIcon;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIImageView *markingIcon; // @synthesize markingIcon=_markingIcon;
@property(retain, nonatomic) UIButton *praiseBtn; // @synthesize praiseBtn=_praiseBtn;
@property(retain, nonatomic) id <FAOtherSpaceWorksCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *hotOpusTipsExplainView; // @synthesize hotOpusTipsExplainView=_hotOpusTipsExplainView;
@property(retain, nonatomic) UIImageView *hotHotOpusTipsView; // @synthesize hotHotOpusTipsView=_hotHotOpusTipsView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)setIconTitleFrameWithLeftOffset:(double)arg1 RightOffset:(double)arg2 Scale:(double)arg3;
- (void)deleteTheItem:(id)arg1;
- (id)roundUp:(long long)arg1 afterPoint:(int)arg2;
- (void)playingMVAndShowPlayingMVCover:(_Bool)arg1;
- (void)reloadItemWorks:(id)arg1 ShowComment:(_Bool)arg2 OnlyShowMonthAndDay:(_Bool)arg3 withCellType:(long long)arg4;
- (void)reloadItemWorks:(id)arg1 ShowComment:(_Bool)arg2 OnlyShowMonthAndDay:(_Bool)arg3;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
