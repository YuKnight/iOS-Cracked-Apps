//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBActionSheetPresenterButton : NSObject
{
    NSString *_title;
    CDUnknownBlockType _action;
    unsigned long long _type;
}

+ (id)buttonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2 type:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

