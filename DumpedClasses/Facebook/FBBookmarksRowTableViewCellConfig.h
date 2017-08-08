//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBBookmarksRowTableViewCellConfigProtocol-Protocol.h"

@class NSString;

@interface FBBookmarksRowTableViewCellConfig : NSObject <FBBookmarksRowTableViewCellConfigProtocol>
{
}

+ (struct UIEdgeInsets)contentInsetsForCardStyle:(unsigned long long)arg1 isFirstCell:(_Bool)arg2 isLastCell:(_Bool)arg3;
+ (_Bool)hideSeparators;
+ (_Bool)hideDisclosureIndicator;
+ (double)imageLeftRightMargin;
+ (double)imageSize;
+ (double)imageCornerRadiusForCardStyle:(unsigned long long)arg1 roundingStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
