//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface SSofaOrderCommentModel : SSofaBaseModel
{
    NSNumber *_star;
    NSString *_text;
    NSArray *_tags;
}

@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *star; // @synthesize star=_star;
- (void).cxx_destruct;

@end

