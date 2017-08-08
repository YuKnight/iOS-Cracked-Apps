//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@interface SDDJOrderBriefModel : JSONModel
{
    _Bool _isHalfWait;
    _Bool _isSuspend;
    _Bool _isBegin;
    long long _orderId;
    long long _newOid;
    unsigned long long _orderState;
    unsigned long long _payState;
    long long _driverId;
    double _pbTime;
    unsigned long long _orderType;
    unsigned long long _cancelType;
    unsigned long long _orderTagType;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) unsigned long long orderTagType; // @synthesize orderTagType=_orderTagType;
@property(nonatomic) _Bool isBegin; // @synthesize isBegin=_isBegin;
@property(nonatomic) _Bool isSuspend; // @synthesize isSuspend=_isSuspend;
@property(nonatomic) _Bool isHalfWait; // @synthesize isHalfWait=_isHalfWait;
@property(nonatomic) unsigned long long cancelType; // @synthesize cancelType=_cancelType;
@property(nonatomic) unsigned long long orderType; // @synthesize orderType=_orderType;
@property(nonatomic) double pbTime; // @synthesize pbTime=_pbTime;
@property(nonatomic) long long driverId; // @synthesize driverId=_driverId;
@property(nonatomic) unsigned long long payState; // @synthesize payState=_payState;
@property(nonatomic) unsigned long long orderState; // @synthesize orderState=_orderState;
@property(nonatomic) long long newOid; // @synthesize newOid=_newOid;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;

@end
