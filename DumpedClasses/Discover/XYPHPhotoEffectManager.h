//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageBrightnessFilter, GPUImageContrastFilter, GPUImageFilterGroup, GPUImagePicture, GPUImageSaturationFilter, GPUImageWhiteBalanceFilter;

@interface XYPHPhotoEffectManager : NSObject
{
    GPUImageFilterGroup *_filterGroup;
    GPUImageBrightnessFilter *_brightnessFilter;
    GPUImageContrastFilter *_contrastFilter;
    GPUImageWhiteBalanceFilter *_warmthFilter;
    GPUImageSaturationFilter *_saturationFilter;
    GPUImagePicture *_sourcePicture;
}

+ (id)getProcessedImage;
+ (void)processImageWithBrightnessValue:(double)arg1 withContrastValue:(double)arg2 withWarmthValue:(double)arg3 withSaturationValue:(double)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) GPUImagePicture *sourcePicture; // @synthesize sourcePicture=_sourcePicture;
@property(retain, nonatomic) GPUImageSaturationFilter *saturationFilter; // @synthesize saturationFilter=_saturationFilter;
@property(retain, nonatomic) GPUImageWhiteBalanceFilter *warmthFilter; // @synthesize warmthFilter=_warmthFilter;
@property(retain, nonatomic) GPUImageContrastFilter *contrastFilter; // @synthesize contrastFilter=_contrastFilter;
@property(retain, nonatomic) GPUImageBrightnessFilter *brightnessFilter; // @synthesize brightnessFilter=_brightnessFilter;
@property(retain, nonatomic) GPUImageFilterGroup *filterGroup; // @synthesize filterGroup=_filterGroup;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)setupFilters:(id)arg1 withImageView:(id)arg2;
- (id)init;

@end

