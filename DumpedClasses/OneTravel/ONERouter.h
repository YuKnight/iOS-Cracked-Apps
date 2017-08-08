//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, ONENavigationController, ONENormalViewTransitionManager, ONESchemaRouterNodeManager, UINavigationController;

@interface ONERouter : NSObject
{
    UINavigationController *_rootNavigationController;
    ONENormalViewTransitionManager *_transitionManager;
    _Bool _isTransiting;
    NSDate *_lastTransitionTime;
    NSString *_currentBusinessName;
    ONESchemaRouterNodeManager *_routerNodeManager;
    NSMutableArray *_actionsForPop;
}

+ (id)createVCFromNode:(id)arg1;
+ (id)globalRouter;
@property(retain, nonatomic) NSMutableArray *actionsForPop; // @synthesize actionsForPop=_actionsForPop;
@property(retain, nonatomic) ONESchemaRouterNodeManager *routerNodeManager; // @synthesize routerNodeManager=_routerNodeManager;
- (void).cxx_destruct;
- (void)removeInternalAndPushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 conflict:(id)arg4;
- (void)removeInternalAndPushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (void)setCurrentRootBusinessUrl:(id)arg1;
- (id)getTopViewControllerFromeContainer:(id)arg1;
- (id)topViewController;
- (_Bool)isTopNone;
- (_Bool)isTopPageHome;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (CDUnknownBlockType)popActionForVC:(id)arg1;
- (void)setPopAction:(CDUnknownBlockType)arg1 forVC:(id)arg2;
- (void)embedPushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 bringToFront:(_Bool)arg4;
- (void)embedSwitchWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 embedTarget:(id)arg4;
- (void)embedSwitchWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (void)embedPushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 conflict:(id)arg4;
- (void)embedPushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (id)addMainMenuParaToUrl:(id)arg1;
- (void)openMainMenuWithURL:(id)arg1;
- (void)embedSwitchURL:(id)arg1 target:(id)arg2;
- (id)addEmbedParaToUrl:(id)arg1 target:(id)arg2;
- (void)embedSwitchURL:(id)arg1;
- (id)addEmbedParaToUrl:(id)arg1;
- (void)embedPushURL:(id)arg1 conflict:(id)arg2;
- (void)embedPushURL:(id)arg1;
- (void)popWithBusinessName:(id)arg1 moduleName:(id)arg2 paraDict:(id)arg3;
- (void)popWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (void)switchWithBusinessName:(id)arg1 moduleName:(id)arg2 paraDict:(id)arg3;
- (void)switchWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (void)pushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraDict:(id)arg3 reuseMatcher:(CDUnknownBlockType)arg4 conflict:(id)arg5;
- (void)pushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 reuseMatcher:(CDUnknownBlockType)arg4 conflict:(id)arg5;
- (void)pushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 conflict:(id)arg4;
- (void)pushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3 reuseMatcher:(CDUnknownBlockType)arg4;
- (void)pushWithBusinessName:(id)arg1 moduleName:(id)arg2 paraObject:(id)arg3;
- (id)dictFromObj:(id)arg1;
- (void)popURL:(id)arg1;
- (void)switchURL:(id)arg1;
- (void)pushURL:(id)arg1 reuseMatcher:(CDUnknownBlockType)arg2 conflict:(id)arg3;
- (void)pushURL:(id)arg1 conflict:(id)arg2;
- (void)pushURL:(id)arg1 reuseMatcher:(CDUnknownBlockType)arg2;
- (void)pushURL:(id)arg1;
- (void)addRouterNode:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (void)popToRootPageAnimated:(_Bool)arg1;
- (void)popToRootPage;
- (void)popToPage:(id)arg1 thenPush:(id)arg2;
- (void)popToPage:(id)arg1;
- (void)popEmbedPageToRootAnimated:(_Bool)arg1;
- (void)popEmbedPageAnimated:(_Bool)arg1;
- (void)popPageAnimated:(_Bool)arg1;
- (void)hideMainMenu;
- (void)pushPageByRouterNode:(id)arg1 reuseMatcher:(CDUnknownBlockType)arg2;
- (id)getContainerController:(id)arg1;
- (void)pushPageWithBusinessName:(id)arg1 moduleName:(id)arg2 nativePara:(id)arg3;
- (void)pushPageByRouterNode:(id)arg1;
- (void)switchToPageByRouterNode:(id)arg1;
- (unsigned long long)animationType:(id)arg1;
- (_Bool)checkConflict:(id)arg1 type:(Class)arg2;
- (_Bool)checkAuthority:(id)arg1;
@property(nonatomic) _Bool isTransiting;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)deleteViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 routerNode:(id)arg3;
- (void)pushViewController:(id)arg1 animationType:(unsigned long long)arg2 conflict:(id)arg3;
- (void)pushViewController:(id)arg1 animationType:(unsigned long long)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)switchCurrentByViewController:(id)arg1 animationType:(unsigned long long)arg2 routerNode:(id)arg3;
- (void)doSwitchCurrentByViewController:(id)arg1 animationType:(unsigned long long)arg2;
- (void)switchCurrentByViewController:(id)arg1 animationType:(unsigned long long)arg2;
- (void)switchCurrentByViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)setAnimationType:(unsigned long long)arg1 forVC:(id)arg2;
@property(retain, nonatomic) ONENavigationController *rootNavigationController;
- (id)rootViewController;
- (void)setCustomTransitionDelegate:(id)arg1;
- (void)preventKeyboard:(id)arg1;
- (void)dealloc;
- (id)init;

@end
