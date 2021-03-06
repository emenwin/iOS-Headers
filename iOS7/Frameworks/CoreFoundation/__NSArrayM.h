/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSMutableArray.h>

// Not exported
@interface __NSArrayM : NSMutableArray
{
    unsigned long long _used;
    unsigned int _doHardRetain:1;
    unsigned int _doWeakAccess:1;
    unsigned int _size:62;
    unsigned int _hasObjects:1;
    unsigned int _hasStrongReferences:1;
    unsigned int _offset:62;
    unsigned long long _mutations;
    id *_list;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(unsigned long long)arg2:(_Bool)arg3:(_Bool)arg4:(_Bool)arg5;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_mutate;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)_hasStrongReferences;
- (_Bool)_hasObjects;

@end

