/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SKUIReleaseNote : NSObject
{
    NSString *_changeNotes;
    NSString *_dateString;
    NSString *_versionString;
}

@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, nonatomic) NSString *changeNotes; // @synthesize changeNotes=_changeNotes;
- (void).cxx_destruct;
- (id)initWithReleaseNoteDictionary:(id)arg1;

@end
