/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Conference/CNFDisplayController.h>

@interface CNFDisplayController (PIPManagement)
- (void)_fadeInLocalVideo;
- (void)_autoFadeInLocalVideo;
- (void)_ensureLocalVideoWillBecomeVisible;
- (BOOL)_useFourByThreePIPAspectRatio;
- (void)_adjustPIPImageForOrientation:(int)arg1;
- (void)_resetPIPToFullScreen;
- (float)_bounceValueForFraction:(float)arg1;
- (void)_pinningAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (struct CGPoint)_finalPointForPIPView:(id)arg1 inset:(float)arg2 isTop:(BOOL)arg3 isLeft:(BOOL)arg4;
- (struct CGPoint)_controlPointForTrackingPoints:(struct CGPoint *)arg1;
- (int)_pinView:(id)arg1 withTrackingPoints:(struct CGPoint *)arg2 toClosestCornerWithInset:(float)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_finishedDraggingView:(id)arg1 forPoints:(struct CGPoint *)arg2;
- (void)addPoint:(struct CGPoint)arg1;
- (void)handleDraggableViewLongPress:(id)arg1;
@end

