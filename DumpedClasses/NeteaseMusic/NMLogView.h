//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface NMLogView : UIView
{
    _Bool _isSubPage;
    double _showTime;
}

@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isSubPage; // @synthesize isSubPage=_isSubPage;
- (void)addViewDisappearLogManually;
- (void)addViewAppearLogManually;

@end
