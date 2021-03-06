/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBShowcaseViewController.h"

#import "SBAppSwitcherBarViewDelegate-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"

@class NSString, SBAppSwitcherBarView, SBAppSwitcherModel, SBNowPlayingBar, SBPrintStatusController;

@interface SBAppSwitcherController : SBShowcaseViewController <SBIconViewDelegate, SBAppSwitcherBarViewDelegate>
{
    SBAppSwitcherModel *_model;
    SBNowPlayingBar *_nowPlayingBar;
    SBAppSwitcherBarView *_bottomBar;
    BOOL _editing;
    int _orientation;
    NSString *_topAppDisplayID;
    SBPrintStatusController *_printStatusController;
}

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
- (id)init;
- (void)dealloc;
- (void)applicationLaunched:(id)arg1;
- (void)applicationDied:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (void)_appsDidChange:(id)arg1;
- (void)_newsstandFolderWasOpened:(id)arg1;
- (id)view;
- (id)_view;
- (float)bottomBarHeight;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)downloadChanged:(id)arg1;
- (void)downloadItemUpdatingStatusChanged:(id)arg1;
- (void)_reloadIconViewsAndShowFirstPage:(BOOL)arg1;
- (void)setupForApp:(id)arg1 orientation:(int)arg2;
- (void)noteIconModelDidReload;
- (BOOL)handleMenuButtonTap;
- (BOOL)isScrolling;
- (BOOL)nowPlayingControlsVisible;
- (BOOL)airPlayControlsVisible;
- (id)_applicationIconsExceptTopApp;
- (BOOL)_inEditMode;
- (void)_beginEditing;
- (void)_stopEditing;
- (void)_removeApplicationFromRecents:(id)arg1;
- (id)_currentDownloads;
- (id)_currentIcons;
- (id)_iconForApplication:(id)arg1;
- (id)_iconForDownload:(id)arg1;
- (id)_iconForPrinting;
- (void)setNeedsPrintStatusIcon:(BOOL)arg1;
- (void)removePrintStatusIconBadge;
- (void)dismissPrintView;
- (id)printIcon;
- (BOOL)printViewIsShowing;
- (void)iconTapped:(id)arg1;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (int)closeBoxTypeForIcon:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (void)appSwitcherBarRemovedFromSuperview:(id)arg1;
- (BOOL)appSwitcherBar:(id)arg1 scrollShouldCancelInContentForView:(id)arg2;
- (void)appSwitcherBar:(id)arg1 pageAtIndexDidAppear:(int)arg2;
- (void)appSwitcherBar:(id)arg1 pageAtIndexDidDisappear:(int)arg2;
- (void)saveScrollPositionBeforeSuspendGesture;
- (void)restoreScrollPositionAfterSuspendGesture;
@property(retain) NSString *topAppDisplayID; // @synthesize topAppDisplayID=_topAppDisplayID;
@property(readonly, nonatomic) SBAppSwitcherModel *model; // @synthesize model=_model;

@end

