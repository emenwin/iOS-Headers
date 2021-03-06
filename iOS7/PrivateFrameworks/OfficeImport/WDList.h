/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDListDefinition;

// Not exported
@interface WDList : NSObject
{
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    unsigned long long mIndex;
    WDListDefinition *mListDefinition;
}

- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (long long)listId;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (id)levelOverrides;
- (id)addLevelOverride;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (id)listDefinition;
- (id)document;
- (void)dealloc;

@end

