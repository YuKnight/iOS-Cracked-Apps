//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMBreakfastCellModel.h"

@class NSString;

@interface NVMBreakfastEditCellModel : NVMBreakfastCellModel
{
    NSString *_title;
    NSString *_value;
    NSString *_placeHolderValue;
    long long _keyboardType;
}

@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) NSString *placeHolderValue; // @synthesize placeHolderValue=_placeHolderValue;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end
