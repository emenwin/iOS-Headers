/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MPWeighterConstraint : NSObject
{
    long long numOfImages;
    NSDictionary *nextConstraints;
    NSString *presetID;
    long long movieCount;
    _Bool moviesOnly;
    _Bool ignoreMovies;
    long long wideLandscape;
    long long square;
    long long landscape;
    long long portrait;
    long long hBreaks;
    long long vBreaks;
    long long supportsHBreaks;
    long long supportsVBreaks;
    long long supportsAllBreaks;
    long long allBreaks;
    _Bool hasBreak;
    NSArray *maxAspectRatios;
    NSArray *minAspectRatios;
    NSArray *tags;
    _Bool tagsOnSourceOnly;
    _Bool shelf;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags;
@property(retain, nonatomic) NSArray *minAspectRatios; // @synthesize minAspectRatios;
@property(retain, nonatomic) NSArray *maxAspectRatios; // @synthesize maxAspectRatios;
@property(retain, nonatomic) NSString *presetID; // @synthesize presetID;
@property(retain, nonatomic) NSDictionary *nextConstraints; // @synthesize nextConstraints;
- (void)dealloc;
- (id)init;

@end

