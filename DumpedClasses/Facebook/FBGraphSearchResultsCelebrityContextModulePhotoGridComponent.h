//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSearchResultsContext;

@interface FBGraphSearchResultsCelebrityContextModulePhotoGridComponent : CKCompositeComponent
{
    _Bool _hasAnnimation;
    unsigned long long _state;
    FBSearchResultsContext *_context;
}

+ (id)newWithModuleEdgeModel:(id)arg1 hasAnnimation:(_Bool)arg2 context:(id)arg3;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) _Bool hasAnnimation; // @synthesize hasAnnimation=_hasAnnimation;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;

@end
