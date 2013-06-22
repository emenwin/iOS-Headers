/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface TSUColor : NSObject <NSCopying>
{
    struct CGColor *mCGColor;
}

+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)randomColor;
+ (id)clearColor;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)lightGrayColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)blueColor;
+ (id)cyanColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)brownColor;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (float)redComponent;
- (float)greenComponent;
- (float)blueComponent;
- (float)alphaComponent;
- (id)grayscaleColor;
- (id)invertedColor;
- (id)colorWithAlphaComponent:(float)arg1;
- (float)luminance;
- (BOOL)isOpaque;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;

@end
