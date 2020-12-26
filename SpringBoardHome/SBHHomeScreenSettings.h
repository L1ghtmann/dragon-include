//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBHFolderSettings, SBHIconAnimationRootSettings, SBHIconSettings, SBHRootFolderSettings;

@interface SBHHomeScreenSettings : PTSettings
{
    BOOL _usesMinimumViableHomeScreen;
    BOOL _showPopOvers;
    BOOL _showWidgets;
    double _defaultDragInteractionLiftDelay;
    SBHIconAnimationRootSettings *_iconAnimationSettings;
    SBHIconSettings *_iconSettings;
    SBHFolderSettings *_folderSettings;
    SBHRootFolderSettings *_rootFolderSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBHRootFolderSettings *rootFolderSettings; // @synthesize rootFolderSettings=_rootFolderSettings;
@property(retain, nonatomic) SBHFolderSettings *folderSettings; // @synthesize folderSettings=_folderSettings;
@property(retain, nonatomic) SBHIconSettings *iconSettings; // @synthesize iconSettings=_iconSettings;
@property(retain, nonatomic) SBHIconAnimationRootSettings *iconAnimationSettings; // @synthesize iconAnimationSettings=_iconAnimationSettings;
@property(nonatomic) double defaultDragInteractionLiftDelay; // @synthesize defaultDragInteractionLiftDelay=_defaultDragInteractionLiftDelay;
@property(nonatomic) BOOL showWidgets; // @synthesize showWidgets=_showWidgets;
@property(nonatomic) BOOL showPopOvers; // @synthesize showPopOvers=_showPopOvers;
@property(nonatomic) BOOL usesMinimumViableHomeScreen; // @synthesize usesMinimumViableHomeScreen=_usesMinimumViableHomeScreen;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

