/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartCommand.h>

// Not exported
@interface TSCHCommandMoveGridRows : TSCHChartCommand
{
    struct _NSRange mRowRange;
    long long mAfterRow;
}

- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (id)initWithChartInfo:(id)arg1 rows:(struct _NSRange)arg2 afterRow:(long long)arg3;

@end

