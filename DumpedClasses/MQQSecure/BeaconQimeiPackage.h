//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnaLocalObjInitWithWupProtocol-Protocol.h"
#import "AnaNSObjTransToJceBufferProtocol-Protocol.h"

@class NSString;

@interface BeaconQimeiPackage : NSObject <AnaNSObjTransToJceBufferProtocol, AnaLocalObjInitWithWupProtocol>
{
    NSString *qIMEI;
    NSString *vendorId;
    NSString *mac;
    NSString *openuuid;
    NSString *advId;
    NSString *guid;
    NSString *userid;
    NSString *model;
    NSString *osver;
    NSString *sFromat;
    NSString *appKey;
}

@property(retain, nonatomic) NSString *appKey; // @synthesize appKey;
@property(retain, nonatomic) NSString *sFromat; // @synthesize sFromat;
@property(retain, nonatomic) NSString *osver; // @synthesize osver;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *userid; // @synthesize userid;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(retain, nonatomic) NSString *mac; // @synthesize mac;
@property(retain, nonatomic) NSString *openuuid; // @synthesize openuuid;
@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId;
@property(retain, nonatomic) NSString *qIMEI; // @synthesize qIMEI;
@property(retain, nonatomic) NSString *advId; // @synthesize advId;
- (void)dealloc;
- (void)createWUPModel:(struct QiMeiInfo *)arg1;
- (void)initWithWUPModel:(struct QiMeiInfo *)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_f07640a9 *)arg1;
- (void)setDataToBuffer:(JceOutputStream_31132a5e *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

