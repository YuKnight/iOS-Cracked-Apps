//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBGroupsModuleAppConfiguration : NSObject
{
    _Bool _hideGroupChatSecondaryAction;
    _Bool _hideShareFromSecondaryActions;
    _Bool _showFullWidthHeader;
}

+ (id)newWithHideGroupChatSecondaryAction:(_Bool)arg1 hideShareFromSecondaryActions:(_Bool)arg2 showFullWidthHeader:(_Bool)arg3;
@property(readonly, nonatomic) _Bool showFullWidthHeader; // @synthesize showFullWidthHeader=_showFullWidthHeader;
@property(readonly, nonatomic) _Bool hideShareFromSecondaryActions; // @synthesize hideShareFromSecondaryActions=_hideShareFromSecondaryActions;
@property(readonly, nonatomic) _Bool hideGroupChatSecondaryAction; // @synthesize hideGroupChatSecondaryAction=_hideGroupChatSecondaryAction;

@end

