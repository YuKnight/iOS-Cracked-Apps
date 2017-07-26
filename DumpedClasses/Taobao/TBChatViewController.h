//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBNavigatorBehaviorProtocol.h"

@class MCChatPageConfig, MCChatPageDisplayFragment, NSString, TBIMChagePageInputFunctionPlugin;

@interface TBChatViewController : UIViewController <TBNavigatorBehaviorProtocol>
{
    MCChatPageConfig *_config;
    NSString *_sessionID;
    NSString *_defaultInputText;
    MCChatPageDisplayFragment *_chatPageDisplayFragment;
    TBIMChagePageInputFunctionPlugin *_inputFunctionPlugin;
    NSString *_selfUserNick;
}

@property(retain, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(readonly, nonatomic) TBIMChagePageInputFunctionPlugin *inputFunctionPlugin; // @synthesize inputFunctionPlugin=_inputFunctionPlugin;
@property(retain, nonatomic) MCChatPageDisplayFragment *chatPageDisplayFragment; // @synthesize chatPageDisplayFragment=_chatPageDisplayFragment;
@property(retain, nonatomic) NSString *defaultInputText; // @synthesize defaultInputText=_defaultInputText;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)uniquePageIdForNavigatorBehavior;
- (void)resignActive:(id)arg1;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupFragment;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
