//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QLLaunchPictureCheckItem : NSObject <NSCoding>
{
    NSString *_checkId;
    unsigned long long _showCounts;
}

@property(readonly, nonatomic) unsigned long long showCounts; // @synthesize showCounts=_showCounts;
@property(retain, nonatomic) NSString *checkId; // @synthesize checkId=_checkId;
- (void).cxx_destruct;
- (void)revertOneCount;
- (void)showOnceTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
