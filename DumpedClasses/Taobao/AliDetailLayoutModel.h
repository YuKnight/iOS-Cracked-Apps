//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface AliDetailLayoutModel : TBJSONModel
{
    NSString *_layoutId;
    NSDictionary *_config;
    NSDictionary *_detailTemplateData;
    NSString *_data;
    NSString *_hierarchyId;
    NSDictionary *_hierarchyData;
}

@property(retain, nonatomic) NSDictionary *hierarchyData; // @synthesize hierarchyData=_hierarchyData;
@property(retain, nonatomic) NSString *hierarchyId; // @synthesize hierarchyId=_hierarchyId;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *detailTemplateData; // @synthesize detailTemplateData=_detailTemplateData;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *layoutId; // @synthesize layoutId=_layoutId;
- (void).cxx_destruct;

@end
