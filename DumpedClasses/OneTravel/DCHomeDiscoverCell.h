//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DCHomeTableViewCellProtocol.h"

@class CALayer, DCBadgeView, DCHomeDiscoverModel, DCHomeTableCellTieModel, DCLayoutView, NSString, UIImageView, UILabel, UIView;

@interface DCHomeDiscoverCell : UITableViewCell <DCHomeTableViewCellProtocol>
{
    UIView *topView;
    DCHomeDiscoverModel *curModel;
    UIImageView *imageView;
    UILabel *titleLabel;
    UILabel *subTitleLabel;
    CALayer *line;
    UIImageView *arrowView;
    DCBadgeView *badgeView;
    DCLayoutView *layoutView;
    DCHomeTableCellTieModel *tieModel;
}

+ (double)cellHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellIndex:(long long)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;
- (id)currentDataModel;
- (void)goNextPage:(id)arg1;
- (void)refreshCellByDataModel:(id)arg1;
- (void)setEventsTieModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupLayoutView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
