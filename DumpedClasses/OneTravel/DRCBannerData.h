//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DRCWeiboConfig, DRCWeixinConfig, NSString;

@interface DRCBannerData : JSONModel
{
    long long _adId;
    NSString *_adName;
    NSString *_adTitle;
    NSString *_adDesc;
    long long _position;
    long long _city;
    NSString *_userTags;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_iospicLoc;
    NSString *_androidPicLoc;
    long long _privilege;
    long long _status;
    NSString *_linkAddr;
    DRCWeixinConfig *_weixinConfig;
    DRCWeiboConfig *_weiboConfig;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) DRCWeiboConfig *weiboConfig; // @synthesize weiboConfig=_weiboConfig;
@property(retain, nonatomic) DRCWeixinConfig *weixinConfig; // @synthesize weixinConfig=_weixinConfig;
@property(copy, nonatomic) NSString *linkAddr; // @synthesize linkAddr=_linkAddr;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long privilege; // @synthesize privilege=_privilege;
@property(copy, nonatomic) NSString *androidPicLoc; // @synthesize androidPicLoc=_androidPicLoc;
@property(copy, nonatomic) NSString *iospicLoc; // @synthesize iospicLoc=_iospicLoc;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *userTags; // @synthesize userTags=_userTags;
@property(nonatomic) long long city; // @synthesize city=_city;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *adDesc; // @synthesize adDesc=_adDesc;
@property(copy, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(copy, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(nonatomic) long long adId; // @synthesize adId=_adId;
- (void).cxx_destruct;

@end
