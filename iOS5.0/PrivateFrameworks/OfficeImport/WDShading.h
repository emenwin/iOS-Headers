/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSColorStub;

@interface WDShading : NSObject <NSCopying>
{
    int mStyle;
    NSColorStub *mForegroundColor;
    NSColorStub *mBackgroundColor;
}

- (id)init;
- (void)dealloc;
- (BOOL)isEqualToShading:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setShading:(id)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)foreground;
- (void)setForeground:(id)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

