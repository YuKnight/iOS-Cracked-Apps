//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLLiveChoosePayDelegate.h"

@class NSString, QLLiveChoosePayView;

@interface QLLiveChoosePayCommonView : UIView <QLLiveChoosePayDelegate>
{
    id <QLLiveChoosePayCommonDelegate> _delegate;
    QLLiveChoosePayView *_choosePayView;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) QLLiveChoosePayView *choosePayView; // @synthesize choosePayView=_choosePayView;
@property(nonatomic) id <QLLiveChoosePayCommonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTag:(id)arg1;
- (void)loginClick:(id)arg1;
- (void)clickPayButton:(id)arg1;
- (void)configRightButton:(id)arg1 withTag:(long long)arg2;
- (void)configLeftButton:(id)arg1 withTag:(long long)arg2;
- (void)setPosterImage:(id)arg1 sponsorImage:(id)arg2 title:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
