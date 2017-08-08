//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FM_BaseViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIImage, UIImageView, UILabel, UIScrollView;

@interface FM_SongWordViewController : FM_BaseViewController <UIScrollViewDelegate>
{
    UILabel *songWordLab;
    UIScrollView *songList;
    UIImage *bgImg;
    UIImageView *bgView;
    UILabel *titleNameLabel;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)shareBtnClick:(id)arg1;
- (void)backEvent:(id)arg1;
- (void)setSongWordText:(id)arg1;
- (void)initSubviews;
- (void)showSongWordView;
- (long long)showPlayBarWay;
- (void)changeBackgroundImg:(id)arg1;
- (void)getbgImg;
- (void)setNaviTitle:(id)arg1;
- (void)initBackGround;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
