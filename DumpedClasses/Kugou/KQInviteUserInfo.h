//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserInfo.h"

@class NSString;

@interface KQInviteUserInfo : UserInfo
{
    long long _status;
    NSString *_addressBookName;
}

@property(retain, nonatomic) NSString *addressBookName; // @synthesize addressBookName=_addressBookName;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)arg1;

@end

