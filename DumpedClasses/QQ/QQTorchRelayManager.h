//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQTorchRelayData;

@interface QQTorchRelayManager : NSObject
{
    QQTorchRelayData *_data;
    NSString *_path;
    NSString *_uin;
}

- (void).cxx_destruct;
- (void)handleTorchBearerInfoArray:(id)arg1;
- (void)handleTorchBearerInfoArray:(id)arg1 forceUpdate:(_Bool)arg2 isPush:(_Bool)arg3;
- (void)updateDisplayedRelayCount:(unsigned int)arg1 cityId:(unsigned int)arg2;
- (void)handleTorchBearerFlag:(unsigned int)arg1 uin:(unsigned long long)arg2;
- (id)relayData;
- (_Bool)isTorchBearer;
- (void)asyncWriteData:(id)arg1 toFile:(id)arg2;
- (void)saveData;
- (void)loadData;
- (void)updateCurrentUin:(id)arg1;
- (id)initWithUin:(id)arg1;

@end
