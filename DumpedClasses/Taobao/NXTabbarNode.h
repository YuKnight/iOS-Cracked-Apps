//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXScrollerNode.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIColor;

@interface NXTabbarNode : NXScrollerNode <UIScrollViewDelegate>
{
    int _selectedIndex;
    id <NXTabbarNodeDelegate> _delegate;
    _Bool _hasSelectedItemBottomLine;
    UIColor *_selectedItemBottomLineColor;
}

+ (void)static_nxRegister;
@property(nonatomic) _Bool hasSelectedItemBottomLine; // @synthesize hasSelectedItemBottomLine=_hasSelectedItemBottomLine;
@property(nonatomic) id <NXTabbarNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fillGeneratedProps:(id)arg1;
- (void)__setSupernode:(id)arg1;
- (void)tap:(id)arg1;
@property int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIColor *selectedItemBottomLineColor; // @synthesize selectedItemBottomLineColor=_selectedItemBottomLineColor;
- (void)fillInitialProperties;
- (id)propConfigNode_selectedItemBottomLineColor;
- (id)propConfigNode_selectedIndex;
- (id)propConfigNode_hasSelectedItemBottomLine;
- (id)nodeName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
