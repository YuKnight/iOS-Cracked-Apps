//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString;

@interface BCardDelReqItem : SAMRequestItem
{
    NSString *_DEL_CARD_ID;
}

@property(copy, nonatomic) NSString *DEL_CARD_ID; // @synthesize DEL_CARD_ID=_DEL_CARD_ID;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end
