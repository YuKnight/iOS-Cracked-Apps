//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCLCConfigModel, LYStorage, NSMutableDictionary;

@interface HCLCEngine : NSObject
{
    HCLCConfigModel *_currentModel;
    LYStorage *_storage;
    NSMutableDictionary *_showedNotice;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *showedNotice; // @synthesize showedNotice=_showedNotice;
@property(retain, nonatomic) LYStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) HCLCConfigModel *currentModel; // @synthesize currentModel=_currentModel;
- (void).cxx_destruct;
- (void)saveConfigModel;
- (id)configModelCopyFromEngine;
- (void)redownloadIfNeed;
- (void)download:(id)arg1 md5:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadFiles:(id)arg1 md5List:(id)arg2;
- (void)deleteAllConfigFile;
- (void)updateConfigFileWithUrlList:(id)arg1 MD5List:(id)arg2;
- (void)saveShowState:(_Bool)arg1 notice:(id)arg2;
- (_Bool)isShowed:(id)arg1;
- (id)isShowedKey:(id)arg1;
- (void)saveLiveConfigVersion:(long long)arg1;
- (long long)liveConfigVersion;
- (id)init;

@end
