//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseReq.h"

@class QQApiObject;

@interface SendMessageToQQReq : QQBaseReq
{
    QQApiObject *_message;
    int _xo;
}

+ (id)reqWithContent:(id)arg1;

// Remaining properties
@property(retain, nonatomic) QQApiObject *message; // @dynamic message;

@end
