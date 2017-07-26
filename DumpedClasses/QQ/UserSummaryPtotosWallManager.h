//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PECropViewControllerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString;

@interface UserSummaryPtotosWallManager : NSObject <QQMultiImagePickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, PECropViewControllerDelegate>
{
    long long _currentCompressType;
    long long _uin;
}

@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void)uploadCoverWithImage:(id)arg1;
- (id)adjustImageOrientation:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)cropViewControllerDidCancel:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingImage:(id)arg2;
- (void)handleChoosingImage:(id)arg1 withParentController:(id)arg2;
- (void)showCamera;
- (void)presentQzoneAlbumPickerWithMaxPickCount:(long long)arg1;
- (void)presentMobilePickerWithMaxPickCount:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
