//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXAztecToken.h"

@interface ZXAztecSimpleToken : ZXAztecToken
{
    short _value;
    short _bitCount;
}

@property(readonly, nonatomic) short bitCount; // @synthesize bitCount=_bitCount;
@property(readonly, nonatomic) short value; // @synthesize value=_value;
- (id)description;
- (void)appendTo:(id)arg1 text:(id)arg2;
- (id)initWithPrevious:(id)arg1 value:(int)arg2 bitCount:(int)arg3;

@end

