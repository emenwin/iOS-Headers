/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDText;

@interface WDNote : WDRun
{
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (id)text;
- (id)reference;
- (BOOL)automaticNumbering;
- (void)setAutomaticNumbering:(BOOL)arg1;
- (int)runType;
- (id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2;
- (void)dealloc;

@end
