//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSThread, NSURLSessionDataTask;

@interface ONEQNSURLSessionDemuxTaskInfo : NSObject
{
    NSURLSessionDataTask *_task;
    id <NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
    NSArray *_modes;
}

@property(readonly, copy) NSArray *modes; // @synthesize modes=_modes;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain) id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;

@end
