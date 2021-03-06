//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface NVMRetailSubCategoryCell : UITableViewCell
{
    UIImageView *_indicatorImageView;
    UILabel *_nameLabel;
    UIButton *_orderCountButton;
}

+ (double)heightForSecondaryCategory:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) UIButton *orderCountButton; // @synthesize orderCountButton=_orderCountButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
- (void).cxx_destruct;
- (void)configureWithSecondaryCategory:(id)arg1 selected:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

