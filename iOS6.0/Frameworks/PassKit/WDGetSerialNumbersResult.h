/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface WDGetSerialNumbersResult : NSObject
{
    NSArray *_serialNumbers;
    NSString *_lastUpdatedTag;
}

@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic) NSArray *serialNumbers; // @synthesize serialNumbers=_serialNumbers;
- (void)dealloc;

@end
