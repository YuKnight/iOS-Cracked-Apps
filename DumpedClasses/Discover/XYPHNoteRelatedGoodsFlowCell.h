//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView, UIImageView, UILabel, UIView, XYPHStoreEventSaleBannerGoodsCellAdapter;

@interface XYPHNoteRelatedGoodsFlowCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_goodsArray;
    UILabel *_titleLabel;
    UILabel *_moreGoodsLabel;
    UIView *_containerView;
    UICollectionView *_goodsCollectionView;
    id <XYPHNoteCellDelegate> _delegate;
    NSString *_allTrackKey;
    XYPHStoreEventSaleBannerGoodsCellAdapter *_goodsAdapter;
    UIView *_titlePrefixView;
    UIImageView *_indicatorView;
}

@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *titlePrefixView; // @synthesize titlePrefixView=_titlePrefixView;
@property(retain, nonatomic) XYPHStoreEventSaleBannerGoodsCellAdapter *goodsAdapter; // @synthesize goodsAdapter=_goodsAdapter;
@property(retain, nonatomic) NSString *allTrackKey; // @synthesize allTrackKey=_allTrackKey;
@property(nonatomic) id <XYPHNoteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *goodsCollectionView; // @synthesize goodsCollectionView=_goodsCollectionView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *moreGoodsLabel; // @synthesize moreGoodsLabel=_moreGoodsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *goodsArray; // @synthesize goodsArray=_goodsArray;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

