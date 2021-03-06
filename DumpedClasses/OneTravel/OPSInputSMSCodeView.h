//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPSBaseView.h"

#import "OPSTextFieldDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, NSTimer, OPSTextField, UIButton, UILabel;

@interface OPSInputSMSCodeView : OPSBaseView <UITextFieldDelegate, OPSTextFieldDelegate>
{
    _Bool _allTextFieldsEditable;
    _Bool _buttonNotReceiveHidden;
    _Bool _labelContractHidden;
    NSString *_phoneNumber;
    NSString *_countryCode;
    OPSTextField *_lastFirstResponder;
    id <OPSInputSMSCodeViewDelegate> _delegate;
    UILabel *_labelTitle;
    UILabel *_labelPrompt;
    UILabel *_labelPhoneNumber;
    UILabel *_labelContract;
    UIButton *_buttonClose;
    UIButton *_buttonBack;
    UIButton *_buttonCountdown;
    UIButton *_buttonNotReceive;
    OPSTextField *_textFieldBox1;
    OPSTextField *_textFieldBox2;
    OPSTextField *_textFieldBox3;
    OPSTextField *_textFieldBox4;
    NSTimer *_timerCountdown;
    OPSTextField *_lastEditingTextField;
}

@property(retain, nonatomic) OPSTextField *lastEditingTextField; // @synthesize lastEditingTextField=_lastEditingTextField;
@property(nonatomic) _Bool labelContractHidden; // @synthesize labelContractHidden=_labelContractHidden;
@property(nonatomic) _Bool buttonNotReceiveHidden; // @synthesize buttonNotReceiveHidden=_buttonNotReceiveHidden;
@property(nonatomic) _Bool allTextFieldsEditable; // @synthesize allTextFieldsEditable=_allTextFieldsEditable;
@property(retain, nonatomic) NSTimer *timerCountdown; // @synthesize timerCountdown=_timerCountdown;
@property(retain, nonatomic) OPSTextField *textFieldBox4; // @synthesize textFieldBox4=_textFieldBox4;
@property(retain, nonatomic) OPSTextField *textFieldBox3; // @synthesize textFieldBox3=_textFieldBox3;
@property(retain, nonatomic) OPSTextField *textFieldBox2; // @synthesize textFieldBox2=_textFieldBox2;
@property(retain, nonatomic) OPSTextField *textFieldBox1; // @synthesize textFieldBox1=_textFieldBox1;
@property(retain, nonatomic) UIButton *buttonNotReceive; // @synthesize buttonNotReceive=_buttonNotReceive;
@property(retain, nonatomic) UIButton *buttonCountdown; // @synthesize buttonCountdown=_buttonCountdown;
@property(retain, nonatomic) UIButton *buttonBack; // @synthesize buttonBack=_buttonBack;
@property(retain, nonatomic) UIButton *buttonClose; // @synthesize buttonClose=_buttonClose;
@property(retain, nonatomic) UILabel *labelContract; // @synthesize labelContract=_labelContract;
@property(retain, nonatomic) UILabel *labelPhoneNumber; // @synthesize labelPhoneNumber=_labelPhoneNumber;
@property(retain, nonatomic) UILabel *labelPrompt; // @synthesize labelPrompt=_labelPrompt;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) __weak id <OPSInputSMSCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OPSTextField *lastFirstResponder; // @synthesize lastFirstResponder=_lastFirstResponder;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)textFieldDidDeleteBackward:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)labelContractLinkTapped:(id)arg1;
- (void)textFieldBoxTextChanged:(id)arg1;
- (void)buttonNotReceiveClicked:(id)arg1;
- (void)buttonCountdownClicked:(id)arg1;
- (void)buttonBackClicked:(id)arg1;
- (void)buttonCloseClicked:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)timerCountdownFired:(id)arg1;
- (void)stopCountdownTimer;
- (void)startCountdownTimer;
- (void)resetToBeginInput;
- (void)layoutCountdownAndNotReceive;
- (void)setup;
- (void)cleanup;
- (void)disableShowLabelContract:(_Bool)arg1;
- (void)disableShowButtonNotReceive:(_Bool)arg1;
- (void)enableAllTextFieldsEditable:(_Bool)arg1;
- (void)enableAllTextFieldsSelectable:(_Bool)arg1;
- (_Bool)isEditing;
- (void)clearAllTextFields;
- (void)updateLabelPromptWithText:(id)arg1;
- (void)startCountdown;
- (void)beginEditing;
- (void)startEditing;
- (void)endEditing;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

