//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@protocol SBPowerDownViewDelegate;

@interface SBPowerDownView : SBUIPowerDownView
{
}

@property(nonatomic) __weak id <SBPowerDownViewDelegate> powerDownDelegate;
- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_powerDownSliderDidBeginSlide;

@end

