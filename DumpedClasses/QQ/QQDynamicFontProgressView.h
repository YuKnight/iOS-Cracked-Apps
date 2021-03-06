//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface QQDynamicFontProgressView : UIView <UIGestureRecognizerDelegate>
{
    int _count;
    int _index;
    id <QQDynamicFontProgressViewDelegate> _delegate;
    UILabel *texts;
    UILabel *textn;
    UILabel *textb;
    UIImageView *_proView;
}

@property(nonatomic) id <QQDynamicFontProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property int index; // @synthesize index=_index;
@property int count; // @synthesize count=_count;
- (void)drawLineT:(struct CGContext *)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 lineW:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)panMove:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setDefaultIndex:(int)arg1;
- (void)dealloc;
- (void)drawTitle;
- (_Bool)isSupportRightDragToGoBack;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

