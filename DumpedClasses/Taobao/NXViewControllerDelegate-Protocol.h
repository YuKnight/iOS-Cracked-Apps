//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXActionProtocol.h"
#import "NXJSContextProtocol.h"

@class NSDictionary, NSError, NSString, NXJSCallBack, NXViewController, UIScrollView;

@protocol NXViewControllerDelegate <NXActionProtocol, NXJSContextProtocol>

@optional
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)setIconFont:(NSString *)arg1 base64Url:(NSString *)arg2;
- (void)addEventListener:(NSString *)arg1 listener:(NXJSCallBack *)arg2;
- (void)setUserTrackProperty:(NSDictionary *)arg1;
- (void)startUpdating:(void (^)(_Bool, NSError *))arg1;
- (void)viewController:(NXViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
@end
