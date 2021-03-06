/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class OIXMLElement, WDParagraph;

// Not exported
@interface WMParagraphMapper : CMMapper
{
    WDParagraph *wdParagraph;
    WMParagraphMapper *mCurrentMapper;
    OIXMLElement *mActiveNode;
    _Bool mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect)arg2 withState:(id)arg3;
- (id)runAtIndex:(int)arg1;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (void)mapParagraphBodyWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)activeNode;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;

@end

