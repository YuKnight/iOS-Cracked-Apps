//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, NSURL, NSURLRequest, UIView, WKSecurityOrigin;
@protocol FBWebView, FBWebViewFrame;

@protocol FBWebViewDelegate <NSObject>

@optional
- (void)webView:(UIView<FBWebView> *)arg1 scriptMessageReceivedFrom:(WKSecurityOrigin *)arg2 websiteURL:(NSURL *)arg3 messageName:(NSString *)arg4 messageParams:(NSDictionary *)arg5;
- (void)webViewWebContentProcessDidTerminate:(UIView<FBWebView> *)arg1;
- (void)webView:(UIView<FBWebView> *)arg1 loadingStateChanged:(_Bool)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 progressChanged:(double)arg2;
- (void)webViewSelectionChanged:(NSString *)arg1;
- (void)webViewWillPopNavigationState:(UIView<FBWebView> *)arg1;
- (void)webViewWillPushNavigationState:(UIView<FBWebView> *)arg1;
- (void)webViewBlockingResourcesLoaded:(UIView<FBWebView> *)arg1;
- (void)webView:(UIView<FBWebView> *)arg1 didFinishNavigationRequest:(NSURLRequest *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 didFailNavigationRequest:(NSURLRequest *)arg2 withError:(NSError *)arg3;
- (void)webView:(UIView<FBWebView> *)arg1 didStartNavigationRequest:(NSURLRequest *)arg2;
- (_Bool)webView:(UIView<FBWebView> *)arg1 shouldStartNavigationRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 sourceFrame:(id <FBWebViewFrame>)arg4 targetFrame:(id <FBWebViewFrame>)arg5;
- (void)webView:(UIView<FBWebView> *)arg1 navigationHistoryChangedCanGoBack:(_Bool)arg2 canGoForward:(_Bool)arg3;
- (void)webView:(UIView<FBWebView> *)arg1 URLChanged:(NSURL *)arg2;
- (void)webView:(UIView<FBWebView> *)arg1 titleChanged:(NSString *)arg2;
@end
