//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationAction, NCNotificationRequest;
@protocol SBStarkNotificationsAgent;

@protocol SBStarkNotificationsAgentDelegate <NSObject>
- (void)agent:(id <SBStarkNotificationsAgent>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)agent:(id <SBStarkNotificationsAgent>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)agent:(id <SBStarkNotificationsAgent>)arg1 executeAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
@end

