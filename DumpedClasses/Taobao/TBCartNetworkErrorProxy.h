//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBCartNetworkError.h"

@class NSString;

@interface TBCartNetworkErrorProxy : NSObject <TBCartNetworkError>
{
    id <TBSDKErrorRule> _rule;
}

@property(retain, nonatomic) id <TBSDKErrorRule> rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (id)sub_msg;
- (id)msg;
- (id)errorCode;
- (id)error;
- (id)userInfo;
- (id)initWithMtopErrorRule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
