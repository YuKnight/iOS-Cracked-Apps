//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "CAAnimationDelegate.h"
#import "UIPullTableViewDelegate.h"
#import "UIRedGiftCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAShapeLayer, CFT_UIPullTableView, NSMutableArray, NSMutableDictionary, NSString, QQAvatarView, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface CFT_UIRedGiftDetailViewController : CFT_UICustomNaviBarViewController <UITableViewDelegate, UITableViewDataSource, UIPullTableViewDelegate, UIRedGiftCellDelegate, CAAnimationDelegate>
{
    CFT_UIPullTableView *_tableView;
    QQAvatarView *_faceView;
    UIView *_bottomView;
    UILabel *_totalAmountLabel;
    UILabel *_fromLabel;
    UILabel *_remarkLabel;
    UIImageView *_pinImageView;
    UILabel *_grapedCountLabel;
    UIButton *_continueSendBtn;
    UIView *_headerView;
    UILabel *_countLabel;
    UIView *_balanceBgView;
    UILabel *_backMoneyLabel;
    UIImageView *_infoImageView;
    UILabel *_balanceLabel;
    UIView *_lineView3;
    int _limitCount;
    int _processFlag;
    int _offset;
    _Bool _isTableviewMore;
    CAShapeLayer *_circleLayer;
    UIView *_fromRedView;
    UIView *_grayBgView;
    int _animationStarty;
    int _hudutopPoint;
    _Bool _isAnimation;
    _Bool _isRequestComplete;
    double _totalMoneyCount;
    int _headViewHeight;
    double _alphY;
    struct CGPoint _remarkCenter;
    struct CGPoint _totalMoneyCenter;
    struct CGRect _faceviewEndRect;
    struct CGRect _remarkEndRect;
    struct CGRect _fromViewEndRect;
    double _pingImgOffsetX;
    UILabel *_rfdescLabel;
    _Bool _isFromRecord;
    _Bool _graped;
    _Bool _isNeedCallBack;
    _Bool _changeLikeManually;
    _Bool _isRunningAnimation;
    int _redGiftState;
    int _grapListRawCount;
    NSString *_comefrom;
    NSString *_appinfo;
    NSString *_listid;
    NSString *_channel;
    NSString *_uin;
    NSString *_nick;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_authkey;
    NSString *_groupid;
    NSString *_grouptype;
    NSMutableDictionary *_detailDict;
    UIImage *_pingIconImage;
    NSString *_strReamrkContent;
    NSString *_strRedFromContent;
    UIImage *_strHeadImg;
    NSMutableDictionary *_graplist;
    NSMutableArray *_grapUinDict;
    NSMutableDictionary *_cacheDict;
    NSMutableDictionary *_orderInfoDict;
}

@property(nonatomic) _Bool isRunningAnimation; // @synthesize isRunningAnimation=_isRunningAnimation;
@property(nonatomic) int grapListRawCount; // @synthesize grapListRawCount=_grapListRawCount;
@property(retain, nonatomic) NSMutableDictionary *orderInfoDict; // @synthesize orderInfoDict=_orderInfoDict;
@property(nonatomic) int redGiftState; // @synthesize redGiftState=_redGiftState;
@property(nonatomic) _Bool changeLikeManually; // @synthesize changeLikeManually=_changeLikeManually;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(retain, nonatomic) NSMutableArray *grapUinDict; // @synthesize grapUinDict=_grapUinDict;
@property(retain, nonatomic) NSMutableDictionary *graplist; // @synthesize graplist=_graplist;
@property(retain, nonatomic) UIImage *strHeadImg; // @synthesize strHeadImg=_strHeadImg;
@property(retain, nonatomic) NSString *strRedFromContent; // @synthesize strRedFromContent=_strRedFromContent;
@property(retain, nonatomic) NSString *strReamrkContent; // @synthesize strReamrkContent=_strReamrkContent;
@property(retain, nonatomic) UIImage *pingIconImage; // @synthesize pingIconImage=_pingIconImage;
@property(nonatomic) _Bool isNeedCallBack; // @synthesize isNeedCallBack=_isNeedCallBack;
@property(nonatomic) _Bool graped; // @synthesize graped=_graped;
@property(nonatomic) _Bool isFromRecord; // @synthesize isFromRecord=_isFromRecord;
@property(retain, nonatomic) NSMutableDictionary *detailDict; // @synthesize detailDict=_detailDict;
@property(retain, nonatomic) NSString *grouptype; // @synthesize grouptype=_grouptype;
@property(retain, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *listid; // @synthesize listid=_listid;
@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
- (void)dealloc;
- (id)createAttributesting:(id)arg1 highContent:(id)arg2 hgihtFont:(id)arg3 highColor:(id)arg4;
- (id)getShareRecvType;
- (void)qpay_hb_share;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableViewLoadMore:(id)arg1;
- (void)redGiftCellHeadTouched:(id)arg1;
- (id)getRecvNameByUin:(id)arg1;
- (void)buildGrapArrayWith:(id)arg1;
- (void)receiveRedGiftListHead;
- (void)reloadTableViewData:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)qwallet;
- (void)reloadTableviewFootview;
- (void)qpay_hb_na_detail;
- (void)requestGrapListData;
- (void)headViewTapped:(id)arg1;
- (void)balanceButtonClick:(id)arg1;
- (void)balanceUserButtonClick:(id)arg1;
- (void)continueSendBtnClick:(id)arg1;
- (void)onRightButtonClick:(id)arg1;
- (void)rightDragToBack;
- (void)leftButtonClick:(id)arg1;
- (void)stopLoadingMore;
- (void)showLoadingView;
- (void)resetViewRect:(id)arg1 content:(id)arg2 fontsize:(double)arg3;
- (void)updateDetailInfo;
- (void)redFromViewPostionToSendName:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getShapeLayer;
- (id)getBaseAnimationFromValue:(id)arg1 toValue:(id)arg2 duation:(double)arg3 animationKey:(id)arg4;
- (void)animationStopDealFaceEndRect:(struct CGRect)arg1 aRemarkEndRect:(struct CGRect)arg2 fromEndRect:(struct CGRect)arg3;
- (id)getBezierPathMovePoint:(struct CGPoint)arg1 toRightPoint:(struct CGPoint)arg2 toRightBottomPoint:(struct CGPoint)arg3 toLeftBottomPoint:(struct CGPoint)arg4 curveToPoint:(struct CGPoint)arg5;
- (void)createNewUI;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationBezierPath:(id)arg1 frame:(struct CGRect)arg2 cornerRadius:(double)arg3;
- (int)getEndPositon;
- (void)setIsAnimation:(_Bool)arg1 startY:(int)arg2 huduTop:(int)arg3 remark:(id)arg4 redFrom:(id)arg5 headImgUrl:(id)arg6 totalMoney:(double)arg7 redTypeIconName:(id)arg8;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
