//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProfileTypeaheadDataSource-Protocol.h"

@class FBStateMachine, FBUserSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBProfileTypeaheadDataSourceDelegate;

@interface FBProfileTypeaheadOnlineDataSource : NSObject <FBProfileTypeaheadDataSource>
{
    NSMutableDictionary *_searchResultDictionary;
    NSString *_currentRequestString;
    NSMutableArray *_pendingRequestStrings;
    NSString *_typeaheadSessionId;
    FBUserSession *_session;
    CDUnknownBlockType _parserFactory;
    _Bool _loading;
    FBStateMachine *_stateMachine;
    id <FBProfileTypeaheadDataSourceDelegate> delegate;
    NSString *_profileSection;
}

@property(readonly, copy, nonatomic) NSString *profileSection; // @synthesize profileSection=_profileSection;
@property(nonatomic) __weak id <FBProfileTypeaheadDataSourceDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (id)resultsForCurrentSearchQuery;
- (long long)resultCountForCurrentSearchQuery;
- (void)_finishedRequestForString:(id)arg1;
- (void)_performSearchWithSearchString:(id)arg1;
- (void)updateResultsForSearchQuery:(id)arg1;
- (id)initWithProfileSection:(id)arg1 withTypeaheadSessionId:(id)arg2 session:(id)arg3 parserFactory:(CDUnknownBlockType)arg4;
- (id)initWithProfileSection:(id)arg1 withTypeaheadSessionId:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
