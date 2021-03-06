//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HeartBeatDelegate.h"

@class HeartBeatReqeust, LLReachability, NSArray, NSRecursiveLock, NSString, PushRegisterRequest;

@interface OmasConnection : NSObject <HeartBeatDelegate>
{
    NSRecursiveLock *_ipLock;
    LLReachability *_reachability;
    _Bool needDelayConnect;
    _Bool isRedirectServer;
    _Bool _pushReged;
    unsigned short port;
    int protocal;
    int currentIpIndex;
    int apnOnConnect;
    int requestCount;
    int ipSource;
    NSString *address;
    double connectStartTime;
    double connectedTime;
    HeartBeatReqeust *heartBeatRequest;
    NSArray *ipArray;
    OmasConnection *parentConnection;
    id connectionMgrDelegate;
    long long _pushRegiterSeqNo;
    PushRegisterRequest *_pushRegisterRequest;
    long long _heartBeatSeqNo;
    double _handshakeStartTime;
    double _handshakeOKTime;
}

@property(nonatomic) double handshakeOKTime; // @synthesize handshakeOKTime=_handshakeOKTime;
@property(nonatomic) double handshakeStartTime; // @synthesize handshakeStartTime=_handshakeStartTime;
@property(nonatomic) long long heartBeatSeqNo; // @synthesize heartBeatSeqNo=_heartBeatSeqNo;
@property(retain, nonatomic) PushRegisterRequest *pushRegisterRequest; // @synthesize pushRegisterRequest=_pushRegisterRequest;
@property(nonatomic) long long pushRegiterSeqNo; // @synthesize pushRegiterSeqNo=_pushRegiterSeqNo;
@property(nonatomic) _Bool pushReged; // @synthesize pushReged=_pushReged;
@property(retain, nonatomic) LLReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool isRedirectServer; // @synthesize isRedirectServer;
@property(nonatomic) int ipSource; // @synthesize ipSource;
@property(nonatomic) id connectionMgrDelegate; // @synthesize connectionMgrDelegate;
@property(retain, nonatomic) OmasConnection *parentConnection; // @synthesize parentConnection;
@property(readonly, nonatomic) int requestCount; // @synthesize requestCount;
@property(nonatomic) _Bool needDelayConnect; // @synthesize needDelayConnect;
@property(nonatomic) int apnOnConnect; // @synthesize apnOnConnect;
@property(nonatomic) int currentIpIndex; // @synthesize currentIpIndex;
@property(retain, nonatomic) NSArray *ipArray; // @synthesize ipArray;
@property(retain, nonatomic) HeartBeatReqeust *heartBeatRequest; // @synthesize heartBeatRequest;
@property(nonatomic) double connectedTime; // @synthesize connectedTime;
@property(nonatomic) double connectStartTime; // @synthesize connectStartTime;
@property(nonatomic) int protocal; // @synthesize protocal;
@property(nonatomic) unsigned short port; // @synthesize port;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(readonly, copy) NSString *description;
- (void)heartBeatResult:(_Bool)arg1;
- (_Bool)moveNextIp;
- (id)getCurrentIpInfo;
- (void)clearDelegate;
- (_Bool)IsConnected;
- (int)netType;
- (void)DisConnect;
- (void)Connect:(const char *)arg1 port:(int)arg2 timeOut:(double)arg3;
- (int)send:(id)arg1 tag:(long long)arg2;
- (int)connectionType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

