//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBEntityTokenView.h>

#import "FBGroupsTagViewDelegate-Protocol.h"

@class FBGroupsTagView, NSString;
@protocol FBGroupsTagTokenViewDelegate;

@interface FBGroupsTagTokenView : FBEntityTokenView <FBGroupsTagViewDelegate>
{
    FBGroupsTagView *_tagView;
    id <FBGroupsTagTokenViewDelegate> _delegate;
}

+ (double)tokenHeight;
@property(nonatomic) __weak id <FBGroupsTagTokenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didTapGlyph;
- (void)setTokenableObject:(id)arg1;
- (void)setTokenText:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
