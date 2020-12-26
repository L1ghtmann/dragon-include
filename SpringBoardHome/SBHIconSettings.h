//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFParallaxSettings;

@interface SBHIconSettings : PTSettings
{
    BOOL _suppressJitter;
    BOOL _closeBoxesEverywhere;
    SBFParallaxSettings *_iconParallaxSettings;
    SBFParallaxSettings *_badgeParallaxSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFParallaxSettings *badgeParallaxSettings; // @synthesize badgeParallaxSettings=_badgeParallaxSettings;
@property(retain, nonatomic) SBFParallaxSettings *iconParallaxSettings; // @synthesize iconParallaxSettings=_iconParallaxSettings;
@property(nonatomic) BOOL closeBoxesEverywhere; // @synthesize closeBoxesEverywhere=_closeBoxesEverywhere;
@property(nonatomic) BOOL suppressJitter; // @synthesize suppressJitter=_suppressJitter;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

