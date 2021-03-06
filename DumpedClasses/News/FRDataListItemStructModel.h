//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FRButtonListItemStructModel><Optional>, NSNumber, NSString, NSString<Optional>;

@interface FRDataListItemStructModel : FRBaseModel
{
    NSArray<FRButtonListItemStructModel><Optional> *_button_list;
    NSNumber *_force_update;
    NSString<Optional> *_content;
    NSNumber *_latency_seconds;
    NSNumber *_rule_id;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *rule_id; // @synthesize rule_id=_rule_id;
@property(retain, nonatomic) NSNumber *latency_seconds; // @synthesize latency_seconds=_latency_seconds;
@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *force_update; // @synthesize force_update=_force_update;
@property(retain, nonatomic) NSArray<FRButtonListItemStructModel><Optional> *button_list; // @synthesize button_list=_button_list;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

