//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NVMSpecFoodDelegate.h"

@class NSArray, NSNumber, NSString;

@interface ESPFlashSellFood : NVMModel <NVMSpecFoodDelegate>
{
    _Bool _isNewRetailGoods;
    _Bool _removeFromStock;
    _Bool _inPromotionContext;
    _Bool _mustSuperVIP;
    NSString *_foodID;
    NSString *_skuID;
    NSString *_restaurantID;
    NSNumber *_price;
    unsigned long long _minQuantity;
    unsigned long long _maxCondition;
    unsigned long long _maxDiscountTimes;
    double _rating;
    double _boxesFee;
    unsigned long long _weight;
    NSString *_name;
    unsigned long long _checkoutMode;
    long long _promotionStock;
    unsigned long long _stock;
    NSString *_tips;
    NSString *_detail;
    NSArray *_specValues;
    NSNumber *_originPrice;
    NSArray *_specs;
    NSString *_activityID;
    long long _minPurchase;
    long long _minimumDeliveryRule;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool mustSuperVIP; // @synthesize mustSuperVIP=_mustSuperVIP;
@property(nonatomic) long long minimumDeliveryRule; // @synthesize minimumDeliveryRule=_minimumDeliveryRule;
@property(nonatomic) long long minPurchase; // @synthesize minPurchase=_minPurchase;
@property(copy, nonatomic) NSString *activityID; // @synthesize activityID=_activityID;
@property(copy, nonatomic) NSArray *specs; // @synthesize specs=_specs;
@property(copy, nonatomic) NSNumber *originPrice; // @synthesize originPrice=_originPrice;
@property(readonly, nonatomic) NSArray *specValues; // @synthesize specValues=_specValues;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) unsigned long long stock; // @synthesize stock=_stock;
@property(nonatomic) _Bool inPromotionContext; // @synthesize inPromotionContext=_inPromotionContext;
@property(nonatomic) long long promotionStock; // @synthesize promotionStock=_promotionStock;
@property(nonatomic) unsigned long long checkoutMode; // @synthesize checkoutMode=_checkoutMode;
@property(nonatomic) _Bool removeFromStock; // @synthesize removeFromStock=_removeFromStock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isNewRetailGoods; // @synthesize isNewRetailGoods=_isNewRetailGoods;
@property(nonatomic) unsigned long long weight; // @synthesize weight=_weight;
@property(nonatomic) double boxesFee; // @synthesize boxesFee=_boxesFee;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned long long maxDiscountTimes; // @synthesize maxDiscountTimes=_maxDiscountTimes;
@property(nonatomic) unsigned long long maxCondition; // @synthesize maxCondition=_maxCondition;
@property(nonatomic) unsigned long long minQuantity; // @synthesize minQuantity=_minQuantity;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID=_skuID;
@property(copy, nonatomic) NSString *foodID; // @synthesize foodID=_foodID;
- (void).cxx_destruct;
- (double)originPriceIfHave;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

