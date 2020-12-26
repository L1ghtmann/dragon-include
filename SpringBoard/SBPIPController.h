//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PGPictureInPictureControllerDelegate-Protocol.h>
#import <SpringBoard/SBAlertItemsControllerObserver-Protocol.h>
#import <SpringBoard/SBAssistantObserver-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, PGPictureInPictureController, SBPIPWindow;
@protocol BSInvalidatable;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBAlertItemsControllerObserver, SBAssistantObserver>
{
    PGPictureInPictureController *_pictureInPictureController;
    SBPIPWindow *_pictureInPictureWindow;
    UIEdgeInsets _pictureInPictureWindowMargin;
    BOOL _expectKeyboardVisible;
    NSMutableSet *_pictureInPictureWindowHiddenReasons;
    NSMutableDictionary *_pictureInPictureInsetsForSource;
    NSMutableSet *_pictureInPictureMorphAnimatorControllers;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    NSMutableOrderedSet *_pictureInPictureWindowLevelOverrides;
}

+ (id)sharedInstance;
+ (BOOL)isAutoPictureInPictureSupported;
+ (BOOL)isPictureInPictureSupported;
// - (void).cxx_destruct;
- (BOOL)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2;
- (void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (CGRect)defaultHomeScreenInitialPiPFrame:(CGRect)arg1 withPreferredContentSize:(CGSize)arg2;
- (void)_setPictureInPictureWindowMargin:(UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(NSUInteger)arg3;
- (UIEdgeInsets)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1 withCurrentLayoutState:(BOOL)arg2;
- (void)_floatingDockHeightWillChange:(id)arg1;
- (void)_updateFloatingDockInsetsWithHeight:(double)arg1;
- (void)_updateFloatingDockInsets;
- (void)_bulletinWillDismiss:(id)arg1;
- (void)_bulletinWillPresent:(id)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_keyboardWillRotate:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1;
- (id)_morphAnimatorControllerForProcessIdentifier:(int)arg1;
- (void)removePictureInPictureMorphAnimatorController:(id)arg1;
- (id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg1;
- (void)addPictureInPictureMorphAnimatorController:(id)arg1;
- (CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (BOOL)_pointInside:(CGPoint)arg1;
- (id)_pipWindow;
- (void)_appSwitcherWillQuitApp:(id)arg1;
- (void)_lockStateDidChange:(id)arg1;
- (void)_managePictureInPictureWindowLevel;
- (void)_managePictureInPictureWindowVisibilityAnimated:(BOOL)arg1;
- (void)_destroyWindowAndRootViewControllerIfPossible;
- (void)_createWindowAndRootViewControllerIfNeeded;
- (id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1;
- (void)assistantDidDisappear:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)updatePictureInPictureWindowLevel;
- (void)applyPictureInPictureInsets:(UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionBegan;
- (void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (BOOL)isPictureInPictureWindowVisible;
- (void)removePictureInPictureWindowLevelOverrideForReason:(id)arg1;
- (void)setPictureInPictureWindowLevelOverride:(NSUInteger)arg1 withReason:(id)arg2;
- (void)setPictureInPictureWindowHidden:(BOOL)arg1 withReason:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)init;

@end

