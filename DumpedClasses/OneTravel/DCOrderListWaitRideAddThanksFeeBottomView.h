//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCRichLabel, DCUIButton;

@interface DCOrderListWaitRideAddThanksFeeBottomView : UIView
{
    CDUnknownBlockType _addFeeBlock;
    DCRichLabel *_titleLab;
    DCUIButton *_addThanksFeeBtn;
}

+ (double)viewHeight;
@property(retain, nonatomic) DCUIButton *addThanksFeeBtn; // @synthesize addThanksFeeBtn=_addThanksFeeBtn;
@property(retain, nonatomic) DCRichLabel *titleLab; // @synthesize titleLab=_titleLab;
@property(copy, nonatomic) CDUnknownBlockType addFeeBlock; // @synthesize addFeeBlock=_addFeeBlock;
- (void).cxx_destruct;
- (void)configView;
- (void)setupWithGitUrl:(id)arg1 titleStr:(id)arg2 priceNum:(id)arg3;
- (void)addFee:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

