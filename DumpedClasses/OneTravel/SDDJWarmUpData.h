//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SDDJWarmUpData : NSObject
{
    NSString *_warmUpImgURL;
    NSString *_warmUpClickURL;
    NSMutableArray *_warmUpButtons;
}

@property(retain, nonatomic) NSMutableArray *warmUpButtons; // @synthesize warmUpButtons=_warmUpButtons;
@property(copy, nonatomic) NSString *warmUpClickURL; // @synthesize warmUpClickURL=_warmUpClickURL;
@property(copy, nonatomic) NSString *warmUpImgURL; // @synthesize warmUpImgURL=_warmUpImgURL;
- (void).cxx_destruct;
- (id)init;

@end

