//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIGestureRecognizer, UILabel;

@interface AWSStockMarketSectionView : UIView
{
    UIGestureRecognizer *_tapGesture;
    _Bool _isFold;
    UIView *_arrowView;
    UILabel *_titleView;
    UIView *_moreView;
    UIView *_bgView;
    UIView *_segmentLine;
    unsigned long long _sectionId;
    id <AWSStockMarketSectionViewDelegate> _delegate;
    UILabel *_lineLabel;
}

+ (double)defaultHeight;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(nonatomic) __weak id <AWSStockMarketSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sectionId; // @synthesize sectionId=_sectionId;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(retain, nonatomic) UIView *segmentLine; // @synthesize segmentLine=_segmentLine;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
- (void).cxx_destruct;
- (void)fold:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didClickZone:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
