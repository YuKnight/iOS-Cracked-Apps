//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYRespPacket.h"

@class NSArray;

@interface TXYHandShakeRespPacket : TXYRespPacket
{
    NSArray *_uploadIpList;
}

@property(retain, nonatomic) NSArray *uploadIpList; // @synthesize uploadIpList=_uploadIpList;
- (void).cxx_destruct;
- (void)decodeBody:(void *)arg1;

@end

