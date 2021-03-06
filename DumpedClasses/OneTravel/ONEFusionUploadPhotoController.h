//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSDictionary, NSString, UIViewController;

@interface ONEFusionUploadPhotoController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    UIViewController *_currentController;
    NSDictionary *_paramsData;
    CDUnknownBlockType _doneHandler;
}

+ (id)defaultController;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
@property(retain, nonatomic) NSDictionary *paramsData; // @synthesize paramsData=_paramsData;
@property(nonatomic) __weak UIViewController *currentController; // @synthesize currentController=_currentController;
- (void).cxx_destruct;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)readImageBase64Data:(id)arg1 doneHandler:(CDUnknownBlockType)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callCameraOrPhotoLibary;
- (void)callPhotoLibary;
- (void)callCamera;
- (void)pickupBase64Image:(id)arg1 doneHandler:(CDUnknownBlockType)arg2;
- (void)pickupImage:(id)arg1 withType:(int)arg2 doneHandler:(CDUnknownBlockType)arg3;
- (_Bool)isImagePickerAllowEditing;
- (void)uploadBase64Image:(id)arg1 doneHandler:(CDUnknownBlockType)arg2;
- (void)uploadPhoto:(id)arg1 withType:(int)arg2 doneHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

