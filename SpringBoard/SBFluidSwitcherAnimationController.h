//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIBlockAnimationController.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver>
{
    id /* CDUnknownBlockType */ _animationCompletion;
    SBFluidSwitcherAnimationController *_tetheredAnimationController;
}

@property(nonatomic) __weak SBFluidSwitcherAnimationController *tetheredAnimationController; // @synthesize tetheredAnimationController=_tetheredAnimationController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animationCompletion; // @synthesize animationCompletion=_animationCompletion;
// - (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (BOOL)isFluidSwitcherAnimationController;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id /* CDUnknownBlockType */)arg3;

@end

