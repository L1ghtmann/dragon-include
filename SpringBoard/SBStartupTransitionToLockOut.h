//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}

@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
// - (void).cxx_destruct;
- (void)performTransitionWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;
- (id)initWithDestination:(NSUInteger)arg1 context:(id)arg2;

@end

