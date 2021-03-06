/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;

@interface WDListLevel : NSObject
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    int mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    int mLegacySpace;
    int mLegacyIndent;
    int mJustification;
}

- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (long)startNumber;
- (void)setStartNumber:(long)arg1;
- (BOOL)startNumberOverridden;
- (int)numberFormat;
- (void)setNumberFormat:(int)arg1;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)restartNumbering;
- (void)setRestartNumbering:(BOOL)arg1;
- (BOOL)restartNumberingOverridden;
- (BOOL)legal;
- (void)setLegal:(BOOL)arg1;
- (BOOL)legalOverridden;
- (int)suffix;
- (void)setSuffix:(int)arg1;
- (BOOL)suffixOverridden;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)textOverridden;
- (BOOL)legacy;
- (void)setLegacy:(BOOL)arg1;
- (long)legacySpace;
- (void)setLegacySpace:(long)arg1;
- (long)legacyIndent;
- (void)setLegacyIndent:(long)arg1;
- (int)justification;
- (void)setJustification:(int)arg1;
- (BOOL)justificationOverridden;
- (id)paragraphProperties;
- (id)characterProperties;

@end

