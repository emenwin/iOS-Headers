/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;
- (const CDStruct_8acff13f *)defaultFormatData;
- (int)formatType;
- (id)formatName;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end

