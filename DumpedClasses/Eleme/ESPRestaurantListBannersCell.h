//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPBannerView, NSString;

@interface ESPRestaurantListBannersCell : NVMTableViewCell
{
    NSString *_trackPageTitle;
    ESPBannerView *_bannerView;
}

+ (double)cellHeight;
@property(retain, nonatomic) ESPBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *trackPageTitle; // @synthesize trackPageTitle=_trackPageTitle;
- (void).cxx_destruct;
- (id)initWithBanners:(id)arg1;

@end

