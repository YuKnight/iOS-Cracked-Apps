//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QYPPFeedRelatedCirclesCellViewData, UIButton, UIImageView, UILabel;
@protocol FeedRelatedCellDelegate;

@interface QYPPFeedRelatedCirclesCell : UICollectionViewCell
{
    _Bool _showJoinBtn;
    int _itemIndex;
    id <FeedRelatedCellDelegate> _cellDelegate;
    UIImageView *_iconView;
    UIImageView *_tagView;
    UILabel *_titleLabel;
    UIButton *_joinBtn;
    QYPPFeedRelatedCirclesCellViewData *_viewData;
}

+ (struct CGSize)itemSize:(_Bool)arg1;
+ (double)viewHeight:(_Bool)arg1;
@property(retain, nonatomic) QYPPFeedRelatedCirclesCellViewData *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) UIButton *joinBtn; // @synthesize joinBtn=_joinBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) _Bool showJoinBtn; // @synthesize showJoinBtn=_showJoinBtn;
@property(nonatomic) __weak id <FeedRelatedCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)p_joinCircleClick;
- (void)p_goCircleClick;
- (void)p_update;
- (void)updateCellViewData:(id)arg1;
- (void)updateButton:(id)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

