//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPayDataObject.h"

@class NSString;

@interface QYPayResultOrderData : QYPayDataObject
{
    NSString *_sign;
    NSString *_nonceNum;
    NSString *_package;
    NSString *_partnerId;
    NSString *_prepayId;
    NSString *_orderId;
    NSString *_orderCode;
    NSString *_content;
    NSString *_order_code;
    NSString *_partner;
    NSString *_seller;
    NSString *_out_trade_no;
    NSString *_subject;
    NSString *_body;
    NSString *_total_fee;
    NSString *_notify_url;
    NSString *_sign_type;
    NSString *_appId;
    NSString *_tn;
}

@property(copy, nonatomic) NSString *tn; // @synthesize tn=_tn;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *sign_type; // @synthesize sign_type=_sign_type;
@property(copy, nonatomic) NSString *notify_url; // @synthesize notify_url=_notify_url;
@property(copy, nonatomic) NSString *total_fee; // @synthesize total_fee=_total_fee;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *out_trade_no; // @synthesize out_trade_no=_out_trade_no;
@property(copy, nonatomic) NSString *seller; // @synthesize seller=_seller;
@property(copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(copy, nonatomic) NSString *order_code; // @synthesize order_code=_order_code;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString *nonceNum; // @synthesize nonceNum=_nonceNum;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (void)dealloc;

@end

