//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BaseRoomAdditionalInfo : CTBusinessBean
{
    int _baseRoomID;
    NSString *_sellingPoint;
}

@property(copy, nonatomic) NSString *sellingPoint; // @synthesize sellingPoint=_sellingPoint;
@property(nonatomic) int baseRoomID; // @synthesize baseRoomID=_baseRoomID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

