//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface TRCarpoolTravelExperienceModel : TRBaseModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_fee_discount;
    NSString<Optional> *_desc;
    NSString<Optional> *_crm_url;
}

@property(retain, nonatomic) NSString<Optional> *crm_url; // @synthesize crm_url=_crm_url;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString<Optional> *fee_discount; // @synthesize fee_discount=_fee_discount;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

