//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXMobileLiveSocketConnectInfo><Optional>, NSString;

@interface FXMobileLiveSocketInfoV2 : FXBaseJSONModel
{
    NSString *_token;
    long long _userId;
    NSArray<FXMobileLiveSocketConnectInfo><Optional> *_socketInfo;
}

@property(copy, nonatomic) NSArray<FXMobileLiveSocketConnectInfo><Optional> *socketInfo; // @synthesize socketInfo=_socketInfo;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end
