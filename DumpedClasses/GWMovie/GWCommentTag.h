//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWCommentTag : GWObject
{
    NSString *_tagId;
    NSString *_tagTitle;
    NSString *_flowerNum;
    NSString *_tagStatus;
}

@property(copy, nonatomic) NSString *tagStatus; // @synthesize tagStatus=_tagStatus;
@property(copy, nonatomic) NSString *flowerNum; // @synthesize flowerNum=_flowerNum;
@property(copy, nonatomic) NSString *tagTitle; // @synthesize tagTitle=_tagTitle;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (_Bool)isMyVotedTag;

@end

