//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppCommonInfo.h"

#import "KGCommentSheetDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString;

@interface ScorePopWin : AppCommonInfo <KGCommentSheetDelegate, UIActionSheetDelegate>
{
    int m_limitSongCountWhenLogin;
    int m_limitSongCountWhenNotLogin;
    NSString *m_noPopWinClientVersion;
    unsigned char m_isNoPopWin;
    double m_lastPopScoreWinTime;
    unsigned char m_isVerNoPopScoreWin;
    unsigned char m_isVerTodayNoPopScoreWin;
    int m_songPlayCount;
}

+ (id)scorePopwin;
- (void).cxx_destruct;
- (void)goToFeedBack;
- (void)goToAppStore;
- (void)closeSheet;
- (unsigned char)isMoreThanThreeDataAfterFirstStart;
- (unsigned char)isPopWinMoreThanOneDay;
- (void)actionWithClcikedType:(int)arg1;
- (void)popScoreWin;
- (void)popScoreWinWhenPlaySong;
- (id)init;
- (void)setLimitPlayCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

