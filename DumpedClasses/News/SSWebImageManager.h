//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDWebImageDownloader, SDWebImageManager;

@interface SSWebImageManager : NSObject
{
    _Bool _ignoreCachedImage;
    SDWebImageManager *_webImageManager;
    SDWebImageDownloader *_imageDownloader;
}

+ (id)imageForURLString:(id)arg1;
+ (id)imageForModel:(id)arg1;
+ (_Bool)isImageCachedForModel:(id)arg1;
+ (unsigned long long)getSize;
+ (void)cleanDisk;
+ (void)clearDisk;
+ (id)cachePathForModel:(id)arg1;
+ (id)cachePathForURL:(id)arg1;
+ (id)shareManger;
@property(retain, nonatomic) SDWebImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SDWebImageManager *webImageManager; // @synthesize webImageManager=_webImageManager;
@property(nonatomic) _Bool ignoreCachedImage; // @synthesize ignoreCachedImage=_ignoreCachedImage;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)cancelForDelegate:(id)arg1;
- (void)_downloadWithImageModel:(id)arg1 atIndex:(long long)arg2 delegate:(id)arg3 options:(unsigned long long)arg4 userInfo:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7 latestError:(id)arg8;
- (void)downloadWithImageModel:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)downloadWithImageModel:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)downloadWithURLString:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithShareDownloader:(_Bool)arg1;

@end
