/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDBezierPathSource.h>

@interface TSDBezierPathSource (PersistenceAdditions)
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1 andBezierArchive:(struct BezierPathSourceArchive *)arg2;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1 andBezierArchive:(const struct BezierPathSourceArchive *)arg2;
@end
