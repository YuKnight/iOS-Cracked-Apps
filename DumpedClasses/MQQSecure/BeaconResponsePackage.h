//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BeaconResponsePackage : NSObject
{
    BOOL result;
    int cmd;
    NSObject *sBuffer;
    NSString *gateWayIp;
    BOOL encryType;
    BOOL zipType;
    long long serverTime;
    NSString *encKey;
    NSString *encPubKey;
}

+ (id)initWithWUPModel:(struct ResponsePackage *)arg1;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(nonatomic) BOOL zipType; // @synthesize zipType;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(retain, nonatomic) NSString *gateWayIp; // @synthesize gateWayIp;
@property(retain, nonatomic) NSObject *sBuffer; // @synthesize sBuffer;
@property(nonatomic) long long serverTime; // @synthesize serverTime;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(nonatomic) BOOL result; // @synthesize result;
- (void)dealloc;

@end
