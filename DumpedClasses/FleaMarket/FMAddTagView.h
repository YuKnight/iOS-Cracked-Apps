//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UITextField;

@interface FMAddTagView : UIView
{
    unsigned long long _status;
    UILabel *__desc;
    UITextField *__input;
}

@property(retain, nonatomic) UITextField *_input; // @synthesize _input=__input;
@property(retain, nonatomic) UILabel *_desc; // @synthesize _desc=__desc;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
