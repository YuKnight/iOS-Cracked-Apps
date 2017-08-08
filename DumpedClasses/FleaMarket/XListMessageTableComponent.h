//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMTableComponent.h"

@class NSString, XMessageContainer, XReverseArrayChange, XSessionEnterAndLeave, XSingleBinder;

@interface XListMessageTableComponent : FMTableComponent
{
    XSingleBinder *rowbinder;
    XReverseArrayChange *reverseArrayChange;
    XSessionEnterAndLeave *sessionEnterLeave;
    _Bool _stopRefreshing;
    unsigned long long _sid;
    unsigned long long _systemUid;
    NSString *_systemUnick;
    XMessageContainer *_container;
    long long _scrollToRowOnTop;
    long long _scrollToRowOnBottom;
}

@property(nonatomic) long long scrollToRowOnBottom; // @synthesize scrollToRowOnBottom=_scrollToRowOnBottom;
@property(nonatomic) long long scrollToRowOnTop; // @synthesize scrollToRowOnTop=_scrollToRowOnTop;
@property(nonatomic) _Bool stopRefreshing; // @synthesize stopRefreshing=_stopRefreshing;
@property(retain, nonatomic) XMessageContainer *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *systemUnick; // @synthesize systemUnick=_systemUnick;
@property(nonatomic) unsigned long long systemUid; // @synthesize systemUid=_systemUid;
@property(nonatomic) unsigned long long sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (_Bool)isLocalManage;
- (void)deleteMessage:(id)arg1;
- (id)convert:(id)arg1;
- (void)loadMsgs:(id)arg1;
- (void)onMsgsChanged:(id)arg1;
- (void)onLoadMessage:(id)arg1;
- (void)loadMessage;
- (void)onLoadSession:(id)arg1;
- (void)loadContainer;
- (void)leaveSession;
- (void)leave;
- (void)enter;
- (void)loadMore;
- (id)init;

@end
