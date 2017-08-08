//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface OMGAnalyticsMessage : NSObject
{
    NSNumber *_key;
    NSNumber *_time;
    NSString *_token;
    NSNumber *_seq;
    NSMutableDictionary *_eventContainer;
    NSNumber *_sysSeq;
}

+ (id)seqNum;
@property(retain, nonatomic) NSNumber *sysSeq; // @synthesize sysSeq=_sysSeq;
@property(retain, nonatomic) NSMutableDictionary *eventContainer; // @synthesize eventContainer=_eventContainer;
@property(retain, nonatomic) NSNumber *seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSNumber *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)filterH5OnlyAttrs:(id)arg1 eventDict:(id)arg2;
- (id)createJsonContainer;
- (id)createEventContainer:(id)arg1 seq:(id)arg2;
- (id)initWithEvents:(id)arg1;

@end
