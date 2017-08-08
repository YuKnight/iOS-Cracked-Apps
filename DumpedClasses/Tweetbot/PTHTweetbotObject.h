//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSNumber, PTHTweetbotAccount;

@interface PTHTweetbotObject : NSObject <NSCoding>
{
    PTHTweetbotAccount *_account;
    long long _tid;
    _Bool _loaded;
    _Bool _dirty;
    NSMutableDictionary *_cache;
}

+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
+ (id)newWithAccount:(id)arg1 tid:(long long)arg2;
+ (void)initialize;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) long long tid; // @synthesize tid=_tid;
@property(nonatomic) __weak PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetCache;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)hasString:(id)arg1;
@property(readonly, nonatomic) NSNumber *tidValue;
- (void)updateFromDictionary:(id)arg1;
- (id)initWithAccount:(id)arg1 tid:(long long)arg2;

@end
