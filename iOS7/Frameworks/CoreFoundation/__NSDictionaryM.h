/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary
{
    unsigned int _used:26;
    unsigned int _kvo:1;
    unsigned int _size;
    unsigned long _mutations;
    id *_objs;
    id *_keys;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(const id *)arg2:(unsigned int)arg3:(BOOL)arg4:(BOOL)arg5;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setObservationInfo:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;

@end
