//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IHttpGetRequest.h"

@class NSError, NSMutableData, NSString, NSURL, NSURLConnection;

@interface aluHttpGetRequest : NSObject <IHttpGetRequest>
{
    double _timeout;
    _Bool _isCancelled;
    unsigned long long _cachePolicy;
    _Bool _shouldKeepRunLoopGoing;
    CDUnknownBlockType _resultCallback;
    NSMutableData *_responseData;
    NSError *_resultError;
    NSURL *_requestUrl;
    NSURLConnection *_urlConnection;
}

@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
- (void).cxx_destruct;
- (void)triggerCallbackOnMainthread:(id)arg1 error:(id)arg2 httpHeaders:(id)arg3;
- (void)setNetworkActivityVisible:(_Bool)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setCachePolicy:(unsigned long long)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (void)sendRequestAsync:(CDUnknownBlockType)arg1;
- (void)setUrl:(id)arg1;
- (void)setTimeOut:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
