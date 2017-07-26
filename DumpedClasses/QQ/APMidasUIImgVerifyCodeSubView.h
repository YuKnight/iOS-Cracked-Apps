//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class APMidasUIInsectTextField, NSString, UIButton, UILabel;

@interface APMidasUIImgVerifyCodeSubView : UIView <UITextFieldDelegate>
{
    id <APMidasUIImgVerifyCodeSubViewDelegate> delegate;
    UILabel *msgLb;
    APMidasUIInsectTextField *input;
    UIButton *resendBtn;
    UIView *resendBtnBorder;
}

- (void)onResendVerifyCode;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)layoutSubviews;
- (void)clearInput;
- (void)showKeyboard:(_Bool)arg1;
- (void)updateImg;
- (void)onRefreshSuccess;
- (id)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
