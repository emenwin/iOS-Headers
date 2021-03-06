/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIcon.h"

@class SBFolder;

@interface SBFolderIcon : SBIcon
{
    SBFolder *_folder;
    float _progress;
}

- (id)initWithFolder:(id)arg1;
- (void)dealloc;
- (id)generateIconImage:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (id)croppedImageForIcon:(id)arg1;
- (id)iconOverlayImageForLocation:(int)arg1;
- (id)displayName;
- (id)representation;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)folder;
- (id)description;
- (void)launch;
- (void)updateLabel;
- (void)_updateBadgeValue;
- (void)_updateProgressBar;
@property(readonly) float progress;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconBadgeChanged:(id)arg1;
- (id)updateGridImageIcon:(id)arg1 inGrid:(id)arg2 withImage:(id)arg3 skipping:(BOOL)arg4;
- (void)noteContainedIconImageChanged:(id)arg1;
- (void)noteContainedIconDownloadingStateChanged:(id)arg1;
- (struct CGSize)_sizeOfMiniIconGridWithRows:(unsigned int)arg1;
- (struct CGRect)_rectForMiniIconImage:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect)_rectForMiniIconAtIndex:(unsigned int)arg1;
- (id)_miniIconGridWithSkipping:(BOOL)arg1;
- (unsigned int)_maxIcons;
- (float)_miniIconSize;
- (float)_miniIconGap;
- (unsigned int)_gridRows;
- (unsigned int)_gridColumns;
- (unsigned int)_firstSkippedIconIndex;
- (unsigned int)_numberOfExcessIcons;
- (unsigned int)_skippingIconThreshold;
- (id)miniImageForIcon:(id)arg1;
- (BOOL)shouldSkipIcons;
- (id)gridImageWithSkipping:(BOOL)arg1;

@end

