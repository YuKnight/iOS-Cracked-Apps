//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ITInterestTag : QQModel <NSCopying>
{
    unsigned int _tagType;
    NSString *_uinStr;
    NSMutableArray *_tagInfoList;
    int _xo;
}

- (void).cxx_destruct;
- (id)concatenateTagsTextWithDelimiter:(id)arg1 filterTag:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *tagInfoList; // @dynamic tagInfoList;
@property(nonatomic) unsigned int tagType; // @dynamic tagType;
@property(retain, nonatomic) NSString *uinStr; // @dynamic uinStr;

@end
