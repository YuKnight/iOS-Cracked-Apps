//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WICommand.h"

@class NSDictionary, NSString;

@interface WIRecordEventTransaction : WICommand
{
    NSString *_eventId;
    NSDictionary *_desc;
}

@property(retain, nonatomic) NSDictionary *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void)execute;
- (void)dealloc;
- (id)initWithParam:(id)arg1 desc:(id)arg2;

@end

