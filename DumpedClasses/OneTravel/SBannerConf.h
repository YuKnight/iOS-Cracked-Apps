//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SActivityConf.h"

@class NSString, NSString<Optional>, UIImage<Optional>;

@interface SBannerConf : SActivityConf
{
    NSString<Optional> *_picUrl;
    UIImage<Optional> *_picImage;
    NSString *_targetURLStr;
}

@property(copy, nonatomic) NSString *targetURLStr; // @synthesize targetURLStr=_targetURLStr;
@property(copy, nonatomic) UIImage<Optional> *picImage; // @synthesize picImage=_picImage;
@property(copy, nonatomic) NSString<Optional> *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;
- (long long)displayStyle;

@end

