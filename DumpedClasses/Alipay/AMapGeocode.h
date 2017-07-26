//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapGeocode : AMapSearchObject
{
    NSString *_formattedAddress;
    NSString *_province;
    NSString *_city;
    NSString *_citycode;
    NSString *_district;
    NSString *_adcode;
    NSString *_township;
    NSString *_neighborhood;
    NSString *_building;
    AMapGeoPoint *_location;
    NSString *_level;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *building; // @synthesize building=_building;
@property(copy, nonatomic) NSString *neighborhood; // @synthesize neighborhood=_neighborhood;
@property(copy, nonatomic) NSString *township; // @synthesize township=_township;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *formattedAddress; // @synthesize formattedAddress=_formattedAddress;
- (void).cxx_destruct;
- (id)init;

@end
