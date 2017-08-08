//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface FBPlatformWebViewActionManifest : NSObject <NSCoding>
{
    NSString *_method;
    NSURL *_webViewUrl;
    NSString *_version;
    NSDictionary *_extras;
    long long _fetchedState;
}

@property(nonatomic) long long fetchedState; // @synthesize fetchedState=_fetchedState;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (id)verboseDictionaryForAnalytics;
- (id)dictionaryForAnalytics;
- (id)urlToFetch;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
