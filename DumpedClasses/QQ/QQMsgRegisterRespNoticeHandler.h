//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMsgRegisterRespBaseItemHandler.h"

@interface QQMsgRegisterRespNoticeHandler : QQMsgRegisterRespBaseItemHandler
{
}

+ (id)GetInstance;
- (void)checkRestEnd:(const struct SvcRegisterProxyMsgResp *)arg1;
- (void)checkLoadingEnd:(const struct SvcRegisterProxyMsgResp *)arg1 seqId:(int)arg2;
- (_Bool)onMsgRegisterResp:(const struct SvcRegisterProxyMsgResp *)arg1 seqId:(int)arg2 cmd:(const char *)arg3;

@end

