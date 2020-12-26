//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSPowerStatusProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHomeScreenBackdropViewBaseDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>
#import <SpringBoard/SBWallpaperOrientationProvider-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHUDController, SBHomeScreenBackdropViewBase, SBHomeScreenWindow, SBIconContentView, SBIconController, SBMainScreenActiveInterfaceOrientationWindow, SBVolumeControl, SBWallpaperEffectView, SBWindow, UIForceStageInteractionProgress, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, UIWindowDelegate, CSPowerStatusProviding>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    SBMainScreenActiveInterfaceOrientationWindow *_fakeSpringBoardStatusBarWindow;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBHomeScreenBackdropViewBase *_homeScreenBackdropView;
    SBWindow *_homeScreenDimmingWindow;
    SBWallpaperEffectView *_reachabilityWallpaperEffectView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isFullyCharged:1;
    unsigned int _isBatteryCritical:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    float _batteryCapacity;
    BOOL _supportsDetailedBatteryCapacity;
    BOOL _disableAppSwitchForcePressDueToHomeButtonForce;
    int _powerStateUpdateToken;
    NSMutableDictionary *_powerSourceHasChimed;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    NSMutableSet *_contentRequiringReasons;
    BOOL _chargingChimeEnabled;
    SBIconController *_iconController;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (CGAffineTransform)_transformAndFrame:(CGRect )arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(CGRect)arg4;
+ (CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7;
+ (CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(CGRect)arg5 inReferenceSpace:(BOOL)arg6;
+ (CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 remainderFrame:(CGRect )arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5;
+ (CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4;
@property(nonatomic) BOOL chargingChimeEnabled; // @synthesize chargingChimeEnabled=_chargingChimeEnabled;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (id)_currentHomeScreenLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(BOOL)arg2;
- (void)_removeReachabilityEffectViewIfNecessary;
- (void)handleDidEndReachabilityAnimation;
- (void)handleWillBeginReachabilityAnimation;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (unsigned char)headsetBatteryCapacity;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2;
@property(nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)statusBarOverridesDidChange:(id)arg1;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (BOOL)supportsDetailedBatteryCapacity;
- (BOOL)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1;
- (void)externalChargingAccessoriesChanged;
- (void)ACPowerChanged;
- (void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (BOOL)isConnectedToChargeIncapablePowerSource;
@property(readonly, nonatomic, getter=isConnectedToExternalChargingSource) BOOL connectedToExternalChargingSource;
@property(readonly, nonatomic, getter=isOnAC) BOOL onAC;
- (BOOL)isFullyCharged;
- (BOOL)isBatteryCharging;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)playChargingChimeIfAppropriate;
- (void)suppressChimeForConnectedPowerSources;
- (BOOL)_powerSourceWantsToPlayChime;
- (void)_enumeratePowerSourcesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2;
- (BOOL)handleHomeButtonDoublePressDown;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (BOOL)handleHomeButtonSinglePressUp;
- (BOOL)disableAppSwitchForcePressDueToHomeButtonForce;
- (BOOL)dissmissAlertItemsAndSheetsIfPossible;
- (BOOL)hasVisibleAlertItemOrSheet:(out BOOL )arg1;
- (void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1;
- (void)cancelInProcessAnimations;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1 options:(NSUInteger)arg2;
- (void)beginRequiringContentForReason:(id)arg1;
- (BOOL)isIconListViewTornDown;
- (void)tearDownIconListAndBar;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1;
- (void)restoreContentWithOptions:(NSUInteger)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceUILocked;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (long long)transitionSourceForIconLocation:(id)arg1;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (void)getRotationContentSettings:(CDStruct_e950349b )arg1 forWindow:(id)arg2;
- (void)_setupHomeScreenContentBackdropView;
- (void)_setupHomeScreenDimmingWindow;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)scalingView;
- (id)contentView;
- (id)window;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)_willRevealOrHideContentView;
- (id)init;
- (void)dealloc;

@end

