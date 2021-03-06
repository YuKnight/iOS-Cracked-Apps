//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPlayerPaoPaoFeedBaseCard.h"

@class NSString, QYUCardCellModel, UIImageView, UILabel, UIView;

@interface QYPlayerPaoPaoHotTopicCell : QYPlayerPaoPaoFeedBaseCard
{
    QYUCardCellModel *_cellData;
    UIImageView *_topicImage;
    NSString *_titleStr;
    UILabel *_titleLabel;
    long long _heightofTitle;
    UIView *_bottomView;
}

+ (double)getDetailFeedContentHeightWithCardData:(id)arg1;
+ (double)getFeedContentHeightWithCardData:(id)arg1;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) long long heightofTitle; // @synthesize heightofTitle=_heightofTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) UIImageView *topicImage; // @synthesize topicImage=_topicImage;
@property(retain, nonatomic) QYUCardCellModel *cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1 withIndexPath:(id)arg2;
- (void)initLocalSubViews;
- (void)analysysCellData;
- (void)removeAllViews;
- (void)layoutSubviews;
- (void)allocLocalSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

