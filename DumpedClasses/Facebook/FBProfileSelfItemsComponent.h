//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBMemPerson, FBMemTimelineContextListItem;
@protocol FBProfileSelfItemsComponentToolbox;

@interface FBProfileSelfItemsComponent : CKCompositeComponent
{
    FBMemTimelineContextListItem *_newContextItem;
    id <FBProfileSelfItemsComponentToolbox> _toolbox;
    FBMemPerson *_targetPerson;
}

+ (id)newWithTitle:(id)arg1 targetPerson:(id)arg2 contextListItem:(id)arg3 textColor:(id)arg4 toolbox:(id)arg5;
- (void).cxx_destruct;

@end
