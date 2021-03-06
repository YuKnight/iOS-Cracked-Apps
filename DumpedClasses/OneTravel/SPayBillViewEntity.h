//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor;

@interface SPayBillViewEntity : NSObject
{
    NSString *_priceString;
    UIColor *_priceColor;
    NSString *_leftString;
    UIColor *_leftColor;
    NSString *_rightString;
    UIColor *_rightColor;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(copy, nonatomic) NSString *rightString; // @synthesize rightString=_rightString;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(copy, nonatomic) NSString *leftString; // @synthesize leftString=_leftString;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(copy, nonatomic) NSString *priceString; // @synthesize priceString=_priceString;
- (void).cxx_destruct;
- (id)init;

@end

