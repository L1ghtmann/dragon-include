//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>

@protocol CSModalHomeGestureParticipating;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBHomeGestureParticipantDelegate>
{
    id <CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;
}

// - (void).cxx_destruct;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)arg1;

@end

