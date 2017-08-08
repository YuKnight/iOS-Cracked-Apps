//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface WPSearchBar : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    UIButton *_deleteButton;
    UIButton *_cancelButton;
    CDUnknownBlockType _textChangeBlock;
    CDUnknownBlockType _textSearchBlock;
    CDUnknownBlockType _textEditBeginBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType textEditBeginBlock; // @synthesize textEditBeginBlock=_textEditBeginBlock;
@property(copy, nonatomic) CDUnknownBlockType textSearchBlock; // @synthesize textSearchBlock=_textSearchBlock;
@property(copy, nonatomic) CDUnknownBlockType textChangeBlock; // @synthesize textChangeBlock=_textChangeBlock;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *placehoder;
@property(retain, nonatomic) NSString *text;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setCancelButtonHidden;
- (void)clickCancel;
- (void)textEditBegin;
- (void)textSearchPressed;
- (void)textChanged;
- (void)clearButtonPressed;
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)editBeginWithCompletion:(CDUnknownBlockType)arg1;
- (void)searchPressedWithCompletion:(CDUnknownBlockType)arg1;
- (void)textChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)endEdit;
- (void)beginEdit;
- (void)initial;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
