//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AttributedLabel, NMBadgePointView, NMScrollableTabItem;

@interface NMScrollableTab : UIView
{
    NMScrollableTabItem *_item;
    AttributedLabel *_label;
    _Bool _selected;
    NMBadgePointView *_badgePointView;
}

@property(readonly, nonatomic) NMScrollableTabItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)clearBadge;
- (void)showBadge;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (double)textWidth;
- (void)setLabelTextShouldRelayout:(_Bool)arg1 theme:(id)arg2;
- (void)setLabelTextShouldRelayout:(_Bool)arg1;
- (id)attributedString:(id)arg1;
- (void)layoutSubviews;
- (id)initWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

