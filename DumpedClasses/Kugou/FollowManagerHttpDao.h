//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface FollowManagerHttpDao : BaseHttpDao
{
}

- (id)defaultParameter;
- (id)clientTimeString;
- (_Bool)unfollowWithHisID:(long long)arg1 error:(id *)arg2;
- (_Bool)followWithHisID:(long long)arg1 source:(long long)arg2 pIsFriend:(_Bool *)arg3 error:(id *)arg4;

@end

