//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBGroupPendingMemberToolbox, FBMemGroupPendingMembersEdge;

@interface FBGroupPendingMemberQuestionNoAnswerComponent : CKCompositeComponent
{
    FBMemGroupPendingMembersEdge *_pendingMemberEdge;
    FBGroupPendingMemberToolbox *_toolbox;
}

+ (id)newWithPendingMember:(id)arg1 toolbox:(id)arg2;
+ (id)initialState;
- (void).cxx_destruct;
- (void)didTapSendNotif:(id)arg1;

@end
