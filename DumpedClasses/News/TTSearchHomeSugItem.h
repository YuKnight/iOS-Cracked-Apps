//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TTSearchHomeSugItem : JSONModel
{
    NSNumber<Optional> *_callPerRefresh;
    NSString<Optional> *_homePageSearchSuggest;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString<Optional> *homePageSearchSuggest; // @synthesize homePageSearchSuggest=_homePageSearchSuggest;
@property(nonatomic) NSNumber<Optional> *callPerRefresh; // @synthesize callPerRefresh=_callPerRefresh;
- (void).cxx_destruct;

@end
