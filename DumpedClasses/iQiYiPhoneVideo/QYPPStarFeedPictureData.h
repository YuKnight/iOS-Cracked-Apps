//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSString;
@protocol Optional;

@interface QYPPStarFeedPictureData : QYPPJsonData
{
    NSString<Optional> *_url;
    NSString<Optional> *_type;
    NSString<Optional> *_detailPage;
    NSString<Optional> *_listPage;
    NSString<Optional> *_shape;
    NSString<Optional> *_size;
    NSString<Optional> *_clipArea;
}

@property(retain, nonatomic) NSString<Optional> *clipArea; // @synthesize clipArea=_clipArea;
@property(retain, nonatomic) NSString<Optional> *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString<Optional> *shape; // @synthesize shape=_shape;
@property(retain, nonatomic) NSString<Optional> *listPage; // @synthesize listPage=_listPage;
@property(retain, nonatomic) NSString<Optional> *detailPage; // @synthesize detailPage=_detailPage;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

