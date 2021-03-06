//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLSprayTableViewCell.h"

@class QLONAPosterImageView, QLTADBulletinBoard, TADDspLabel, TADItemInfo, UIFont, UIImageView, UILabel;

@interface QLSprayADTableViewCell : QLSprayTableViewCell
{
    _Bool _fullWidthPlayer;
    _Bool _isGif;
    TADItemInfo *_adItem;
    QLTADBulletinBoard *_board;
    QLONAPosterImageView *_posterImageView;
    UIFont *_titleFont;
    UILabel *_mainTitleLabel;
    UIImageView *_titleBgView;
    TADDspLabel *_dspLabel;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) TADDspLabel *dspLabel; // @synthesize dspLabel=_dspLabel;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(retain, nonatomic) UIImageView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) QLONAPosterImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) QLTADBulletinBoard *board; // @synthesize board=_board;
@property(retain, nonatomic) TADItemInfo *adItem; // @synthesize adItem=_adItem;
@property(nonatomic) _Bool fullWidthPlayer; // @synthesize fullWidthPlayer=_fullWidthPlayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)makeupSubViewFrame;
- (void)updateSprayCustomViewbySubView:(id)arg1;
- (void)didPosterImageViewTapped:(id)arg1;
- (void)setObject:(id)arg1;
- (void)updateContextByBulletinBoard:(id)arg1;
- (Class)preferredSprayViewClass;
- (void)dealloc;
- (id)initWithTomLiveBoard:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

