//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface EmojiEggConfigManager : NSObject
{
    NSDictionary *_configCache;
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

+ (id)getInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSDictionary *configCache; // @synthesize configCache=_configCache;
- (void).cxx_destruct;
- (id)_stringWithId:(int)arg1;
- (id)getKeywordsWithFlappyId:(id)arg1;
- (void)updateEmojiEggFlappy;
- (_Bool)isEmojiEggFlappy:(id)arg1;
- (id)imageWithReourceName:(id)arg1;
- (id)getShipAnimationResourceDir;
- (_Bool)shipAnimationResourceReady;
- (id)grayPCQallRemind:(id)arg1;
- (id)grayPraiseAndQzoneRemind:(id)arg1;
- (id)grayChatAnQzoneRemind:(id)arg1;
- (id)grayChatAndPraiseRemind:(id)arg1;
- (id)grayQZoneWillDismissRemind:(id)arg1;
- (id)grayQZoneWillDegradeRemind:(id)arg1;
- (id)grayChatWillDismissRemind:(id)arg1;
- (id)grayChatWillDegradeRemind:(id)arg1;
- (id)grayPraiseWillDismissRemind:(id)arg1;
- (id)grayPraiseWillDegradeRemind:(id)arg1;
- (id)grayQzoneDisappear:(id)arg1;
- (id)grayColseDisappear:(id)arg1;
- (id)grayPraiseDisappear:(id)arg1;
- (id)grayChatDisappear:(id)arg1;
- (id)grayQzoneDegrade:(id)arg1;
- (id)grayColseDegrade:(id)arg1;
- (id)grayPraiseDegrade:(id)arg1;
- (id)grayChatDegrade:(id)arg1;
- (id)grayQzone2Upgrade:(id)arg1;
- (id)grayColse2Upgrade:(id)arg1;
- (id)grayPraise2Upgrade:(id)arg1;
- (id)grayChat2Upgrade:(id)arg1;
- (id)grayQzoneUpgrade:(id)arg1;
- (id)grayColseUpgrade:(id)arg1;
- (id)grayPraiseUpgrade:(id)arg1;
- (id)grayChatUpgrade:(id)arg1;
- (id)replaceDegrade:(id)arg1;
- (_Bool)checkKeyDegradeValid:(id)arg1;
- (id)replaceUpgrade:(id)arg1;
- (_Bool)checkKeyUpgradeValid:(id)arg1;
- (id)getAccessibilityText:(id)arg1;
- (id)getChatDaysAccessibilityText;
- (id)getCloseAccessibilityText;
- (id)getPraiseAccessibilityText;
- (id)getChatAccessibilityText;
- (id)getQzoneAccessibilityText;
- (id)getBlingSecond;
- (id)getBlingFirst;
- (id)getQzoneSetting;
- (id)getCloseSetting;
- (id)getLinkSetting;
- (id)getChatSetting;
- (id)getBigQzoneKey;
- (id)getSmallQzoneKey;
- (id)getBigCloseKey;
- (id)getSmallCloseKey;
- (id)getBigLinkKey;
- (id)getSmallLinkKey;
- (id)getBigChatKey;
- (id)getSmallChatKey;
- (id)getSetingDescription;
- (int)getMaxDegradeRemindTimes;
- (int)getQzoneMaxDays;
- (int)getQzoneMinDays;
- (int)getCloseMaxDays;
- (int)getCloseMinDays;
- (int)getPraiseMaxDays;
- (int)getPraiseMinDays;
- (int)getChatMaxDays;
- (int)getChatMinDays;
- (_Bool)isPureInt:(id)arg1;
- (id)getConfigVelueWithkey:(id)arg1;
- (void)downLoadResource;
- (void)saveConfig:(id)arg1;
- (id)loadConfig;
- (_Bool)isConfigExists;
- (id)configPath;
- (id)init;

@end

