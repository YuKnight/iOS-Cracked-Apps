//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBasePhotoCell.h"

@class NSMutableArray, NSMutableOrderedSet, UIButton;

@interface QZEditEnableSelectAllCell : QZBasePhotoCell
{
    _Bool _shouldHideSelectAll;
    UIButton *_selectAllBtn;
    NSMutableArray *_photoModels;
    NSMutableOrderedSet *_selectedPhotoModels;
}

@property(nonatomic) _Bool shouldHideSelectAll; // @synthesize shouldHideSelectAll=_shouldHideSelectAll;
@property(retain, nonatomic) NSMutableOrderedSet *selectedPhotoModels; // @synthesize selectedPhotoModels=_selectedPhotoModels;
@property(retain, nonatomic) NSMutableArray *photoModels; // @synthesize photoModels=_photoModels;
@property(retain, nonatomic) UIButton *selectAllBtn; // @synthesize selectAllBtn=_selectAllBtn;
- (void).cxx_destruct;
- (void)onClickSelectAllBtn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
