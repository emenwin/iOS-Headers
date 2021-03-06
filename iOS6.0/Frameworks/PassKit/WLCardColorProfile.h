/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor;

@interface WLCardColorProfile : NSObject
{
    float _backgroundLightness;
    float _foregroundLightness;
    float _labelLightness;
    WLCardColorProfile *_stripProfile;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_labelColor;
    UIColor *_highlightColor;
    UIColor *_foregroundShadowColor;
    UIColor *_labelShadowColor;
    float _overlayDarkeningAlpha;
    float _regularDarkeningAlpha;
    float _overlayLighteningAlpha;
    float _regularLighteningAlpha;
}

+ (id)profileForDisplayProfile:(id)arg1;
@property(readonly, nonatomic) float regularLighteningAlpha; // @synthesize regularLighteningAlpha=_regularLighteningAlpha;
@property(readonly, nonatomic) float overlayLighteningAlpha; // @synthesize overlayLighteningAlpha=_overlayLighteningAlpha;
@property(readonly, nonatomic) float regularDarkeningAlpha; // @synthesize regularDarkeningAlpha=_regularDarkeningAlpha;
@property(readonly, nonatomic) float overlayDarkeningAlpha; // @synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha;
@property(readonly, nonatomic) UIColor *labelShadowColor; // @synthesize labelShadowColor=_labelShadowColor;
@property(readonly, nonatomic) UIColor *foregroundShadowColor; // @synthesize foregroundShadowColor=_foregroundShadowColor;
@property(readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)_imageForGlyph:(id)arg1 color:(id)arg2 letterpressStyle:(id)arg3;
- (int)_sizeForGlyph:(id)arg1;
- (int)_sizeForFont:(id)arg1;
- (id)_letterpressStyleForSize:(int)arg1 textLightness:(float)arg2 shadowColor:(id)arg3;
- (void)dealloc;
- (id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)foregroundImageForGlyph:(id)arg1;
- (id)labelImageForGlyph:(id)arg1;
- (id)labelLetterpressStyleForGlyph:(id)arg1;
- (id)foregroundLetterpressStyleForGlyph:(id)arg1;
- (id)labelLetterpressStyleForFont:(id)arg1;
- (id)foregroundLetterpressStyleForFont:(id)arg1;
- (id)foregroundColorOverStrip:(BOOL)arg1;
- (id)labelColorOverStrip:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isLight;

@end

