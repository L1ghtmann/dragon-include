//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBAlertItem, SBAlertItemsController;

@protocol SBAlertItemsControllerObserver <NSObject>
- (void)alertItemsController:(SBAlertItemsController *)arg1 didDeactivateAlertItem:(SBAlertItem *)arg2 forReason:(int)arg3;
- (void)alertItemsController:(SBAlertItemsController *)arg1 didActivateAlertItem:(SBAlertItem *)arg2;
- (void)alertItemsController:(SBAlertItemsController *)arg1 willActivateAlertItem:(SBAlertItem *)arg2;
@end

