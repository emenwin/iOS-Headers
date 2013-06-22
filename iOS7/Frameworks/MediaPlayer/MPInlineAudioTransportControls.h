/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTransportControls.h>

@interface MPInlineAudioTransportControls : MPTransportControls
{
    int _style;
}

- (struct CGRect)availableProgressControlAreaFrame;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (id)newVolumeSlider;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end
