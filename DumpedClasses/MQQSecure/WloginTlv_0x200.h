//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x200 : WloginTlv
{
    NSData *PF;
    NSData *PFKey;
}

@property(copy) NSData *PFKey; // @synthesize PFKey;
@property(copy) NSData *PF; // @synthesize PF;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;

@end
