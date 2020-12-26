//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNContact, NSArray, NSLayoutConstraint, SBAppStatusBarSettingsAssertion, UIActivityIndicatorView, UIImageView, UILabel, _UILegibilitySettings;

@interface SBLogoutProgressView : UIView
{
    CNContact *_userContact;
    NSArray *_pendingApplications;
    _UILegibilitySettings *_legibilitySettings;
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic) NSArray *pendingApplications; // @synthesize pendingApplications=_pendingApplications;
@property(retain, nonatomic) CNContact *userContact; // @synthesize userContact=_userContact;
// - (void).cxx_destruct;
- (void)_updateBlame;
- (void)_updateUserAvatar;
- (void)_updateGoodbye;
- (void)_updateViewData;
- (void)_updateLegibility;
- (void)_updateUserAvatarLegibility;
- (double)_userAvatarVerticalOffsetFromCenter;
- (double)_moreDocumentsLabelBaselineOffset;
- (double)_goodbyeLabelBaselineOffset;
- (void)updateConstraints;
@property(nonatomic, getter=isProgressVisible) BOOL progressVisible; // @dynamic progressVisible;
- (id)initWithFrame:(CGRect)arg1;

@end

