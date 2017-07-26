//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessage.h"

#import "PPChatActionSource.h"

@class NSString;

@interface PPChatTextMessage : PPChatMessage <PPChatActionSource>
{
    NSString *_textMsg;
    long long _messageStatus;
    NSString *_actionType;
    NSString *_actionParam;
    struct CGSize _fontSize;
}

@property(nonatomic) struct CGSize fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long messageStatus; // @synthesize messageStatus=_messageStatus;
@property(retain, nonatomic) NSString *textMsg; // @synthesize textMsg=_textMsg;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
