/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface _NSKeyedCoderOldStyleArray : NSObject
{
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    BOOL _type;
    _Bool _decoded;
    char _padding[2];
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;

@end

