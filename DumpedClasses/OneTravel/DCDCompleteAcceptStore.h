//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCCompleteOrderStore.h"

@class DCYSInviteGetInfoBaseModel;

@interface DCDCompleteAcceptStore : DCCompleteOrderStore
{
    DCYSInviteGetInfoBaseModel *_orderModel;
}

@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *orderModel; // @synthesize orderModel=_orderModel;
- (void).cxx_destruct;
- (id)defaultParams;
- (id)getCurrentCarID;
- (void)showOrderDetail:(id)arg1;
- (id)getLiftOrderID;
- (void)reloadOrderGetInfo;
- (void)showInVaildAlert:(id)arg1;
- (_Bool)checkConfirmAcceptAlert:(id)arg1;
- (void)requestAcceptInvite:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)checkIfNeedRefresh:(id)arg1;
- (void)modelStateChange:(id)arg1;
- (void)observerDataModelChanged;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <DCDCompleteAcceptStoreDelegate> delegate; // @dynamic delegate;

@end

