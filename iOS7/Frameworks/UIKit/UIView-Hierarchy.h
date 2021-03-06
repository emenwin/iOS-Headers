/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIView (Hierarchy)
- (void)layoutSubviews;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (id)viewWithTag:(long long)arg1;
- (_Bool)isDescendantOfView:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)movedFromSuperview:(id)arg1;
- (void)_postMovedFromSuperview:(id)arg1;
- (void)_promoteSelfOrDescendantToFirstResponderIfNecessary;
- (void)deferredBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 copySublayers:(_Bool)arg4;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_findFirstSubviewWantingToBecomeFirstResponder;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_screen;
- (id)_backgroundColor;
- (void)_setBackgroundColor:(id)arg1;
- (_Bool)_associatedViewControllerForwardsAppearanceCallbacks:(id)arg1 performHierarchyCheck:(_Bool)arg2 isRoot:(_Bool)arg3;
- (void)_didRemoveSubview:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_movedToFront;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)removeFromSuperview;
- (void)_willRemoveSubviewWantingAutolayout:(id)arg1;
- (void)_removeFirstResponderFromSubtree;
- (id)window;
- (id)subviews;
- (id)superview;
- (_Bool)containsView:(id)arg1;
@end

