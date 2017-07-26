//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCellView.h"

#import "NIAttributedLabelDelegate.h"
#import "QQApplePayManagerDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "VASLocalPayHelperDelegate.h"

@class NIAttributedLabel, NSString, QQGroupMemberCardViewController, UIImageView, UILabel, VASLocalPayHelper;

@interface QQAIOTipCellView : QQAIOCellView <NIAttributedLabelDelegate, VASLocalPayHelperDelegate, QQApplePayManagerDelegate, SimpleAlertViewDelegate>
{
    NSString *_msgContent;
    UIImageView *_bgView;
    NIAttributedLabel *_contentLabel;
    UILabel *_defaultContentLabel;
    int _xo;
    struct CGSize _contentSize;
    NIAttributedLabel *_lable;
    QQGroupMemberCardViewController *_memberCardCtr;
    VASLocalPayHelper *_localPayHelper;
}

@property(retain, nonatomic) VASLocalPayHelper *localPayHelper; // @synthesize localPayHelper=_localPayHelper;
- (void).cxx_destruct;
- (void)generateMsg;
- (void)troopNickSetAction:(id)arg1;
- (void)tipBtAction:(id)arg1;
- (void)localPayHelperUIShouldFinishLoading:(id)arg1;
- (void)localPayHelperDidPaySuccess:(id)arg1;
- (void)removeLoadingView;
- (void)addLoadingView;
- (void)payAction:(int)arg1;
- (void)setNeedsLocalPayHelper;
- (void)reportSensMsgTipsClick:(id)arg1 forId:(unsigned long long)arg2 andAttribute:(unsigned long long)arg3;
- (_Bool)skipOpenGuideIfNeeded;
- (id)recommendSource;
- (id)recommendParentViewController;
- (void)recommendCompleteWithResult:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)doSensMsgTipsAction:(id)arg1;
- (void)addSensMsgTipsActionLink;
- (void)pushViewController:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *msgContent; // @dynamic msgContent;
- (void)drawAttributedLabel;
- (struct CGRect)getBgRect;
- (void)initAttributedLabel;
- (void)dealloc;
- (void)initLabel;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImageView *bgView; // @dynamic bgView;
@property(retain, nonatomic) NIAttributedLabel *contentLabel; // @dynamic contentLabel;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UILabel *defaultContentLabel; // @dynamic defaultContentLabel;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
