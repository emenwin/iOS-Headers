/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCH3DPixelBuffer : NSObject
{
    tvec2_3b141483 mSize;
    unsigned long long mComponents;
    struct CGContext *mBitmapContext;
}

+ (id)pixelBufferWithSize:(const tvec2_3b141483 *)arg1 components:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=mBitmapContext;
@property(readonly, nonatomic) unsigned long long components; // @synthesize components=mComponents;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (void)flip;
- (void)copyPixelsFromData:(const void *)arg1;
@property(readonly, nonatomic) char *buffer;
- (void *)data;
- (id)TSUImage;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1 components:(unsigned long long)arg2;

@end

