//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WIEventDescContainer : NSObject
{
    NSMutableDictionary *_eventDesc;
}

- (_Bool)removeEventDesc:(id)arg1;
- (_Bool)setEventDesc:(id)arg1 descKey:(id)arg2 descValue:(id)arg3;
- (id)getEventDesc:(id)arg1;
- (void)dealloc;
- (id)init;

@end

