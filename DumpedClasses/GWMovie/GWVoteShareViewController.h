//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITableViewDelegate-Protocol.h"

@class Comment, GWCommentTextView, GWDropSweatView, GWVoteShareView, GWWalaStorage, NSString, UIButton, UIImage, UIImageView, UILabel, UITableView, UIView;

@interface GWVoteShareViewController : GWBaseViewController <UITableViewDelegate>
{
    UIImageView *animationImageView;
    UIImageView *headerView;
    UIView *tableHeaderView;
    UILabel *titleLabel;
    UIView *whiteView;
    UIView *voteView;
    UIView *iconView;
    GWCommentTextView *postWalaTextView;
    _Bool _hasRedpacket;
    _Bool _willDismiss;
    UIButton *_friendsButton;
    UIButton *_wechatButton;
    UIButton *_weiboButton;
    NSString *_currentShareUrl;
    Comment *_currentComment;
    UIImage *_currentShareImage;
    UIView *_preVoteView;
    UIView *_photoView;
    UIView *_bottomView;
    UIView *_blurView;
    UITableView *_myTableView;
    GWVoteShareView *_shareView;
    GWWalaStorage *_walaStorage;
    GWDropSweatView *_sweatView;
    UIImageView *_redpacketImageView;
}

@property(retain, nonatomic) UIImageView *redpacketImageView; // @synthesize redpacketImageView=_redpacketImageView;
@property(retain, nonatomic) GWDropSweatView *sweatView; // @synthesize sweatView=_sweatView;
@property(retain, nonatomic) GWWalaStorage *walaStorage; // @synthesize walaStorage=_walaStorage;
@property(retain, nonatomic) GWVoteShareView *shareView; // @synthesize shareView=_shareView;
@property _Bool willDismiss; // @synthesize willDismiss=_willDismiss;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool hasRedpacket; // @synthesize hasRedpacket=_hasRedpacket;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIView *preVoteView; // @synthesize preVoteView=_preVoteView;
@property(retain, nonatomic) UIImage *currentShareImage; // @synthesize currentShareImage=_currentShareImage;
@property(retain, nonatomic) Comment *currentComment; // @synthesize currentComment=_currentComment;
@property(copy, nonatomic) NSString *currentShareUrl; // @synthesize currentShareUrl=_currentShareUrl;
@property(retain, nonatomic) UIButton *weiboButton; // @synthesize weiboButton=_weiboButton;
@property(retain, nonatomic) UIButton *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) UIButton *friendsButton; // @synthesize friendsButton=_friendsButton;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollBack:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)redpacketShare:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)startAnimation;
- (void)setNavigationBar;
- (void)beginShowAnimation:(id)arg1;
- (id)imageWithColor:(id)arg1;
- (void)setNavigationBarWithColor:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleShare:(id)arg1;
- (void)updateTableView;
- (void)grayViewWithMovieModel:(id)arg1;
- (id)createOrangeView:(float)arg1;
- (void)loadBottomView:(id)arg1;
- (void)loadContentView;
- (void)loadVoteView;
- (void)loadAllView;
- (void)viewDidLoad;
- (void)gwInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

