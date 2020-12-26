//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/_UIScrollToTopView-Protocol.h>

@class SBSceneHandle;
@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>
{
    SBSceneHandle *_sceneHandle;
    id <SBScrollToTopSceneProxyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBScrollToTopSceneProxyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
// - (void).cxx_destruct;
- (void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isScrollEnabled;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;

@end

