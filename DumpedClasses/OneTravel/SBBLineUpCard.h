//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBBCardMethod.h"

@class NSString, SBBFakePullBar, SBBLineUpCardConf, UIButton, UILabel;

@interface SBBLineUpCard : UIView <SBBCardMethod>
{
    _Bool _enablePullBar;
    UIButton *_contentView;
    id <SBBCardDelegate> _cardDelegate;
    SBBLineUpCardConf *_cardConf;
    SBBFakePullBar *_pullBar;
    UILabel *_titleLabel;
    UILabel *_lineupLabel;
    UILabel *_lineupNum;
    UILabel *_estiLabel;
    UILabel *_estiNum;
    UILabel *_liner;
}

@property(retain, nonatomic) UILabel *liner; // @synthesize liner=_liner;
@property(retain, nonatomic) UILabel *estiNum; // @synthesize estiNum=_estiNum;
@property(retain, nonatomic) UILabel *estiLabel; // @synthesize estiLabel=_estiLabel;
@property(retain, nonatomic) UILabel *lineupNum; // @synthesize lineupNum=_lineupNum;
@property(retain, nonatomic) UILabel *lineupLabel; // @synthesize lineupLabel=_lineupLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SBBFakePullBar *pullBar; // @synthesize pullBar=_pullBar;
@property(retain, nonatomic) SBBLineUpCardConf *cardConf; // @synthesize cardConf=_cardConf;
@property(nonatomic) _Bool enablePullBar; // @synthesize enablePullBar=_enablePullBar;
@property(nonatomic) __weak id <SBBCardDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(retain, nonatomic) UIButton *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithConfigure:(id)arg1;
- (void)initViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

