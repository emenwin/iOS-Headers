/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBAwayListCellButtonHandler-Protocol.h"

@class NSArray, NSString, SBAlertItem, UIImage;

@interface SBAwaySystemAlertItem : NSObject <SBAwayListCellButtonHandler>
{
    SBAlertItem *_currentAlert;
    NSString *_title;
    NSArray *_buttonLabels;
    UIImage *_appImage;
    NSString *_message;
    int _cancelButtonIdx;
    BOOL _isAlarm;
}

- (id)initWithSystemAlert:(id)arg1;
- (void)dealloc;
- (id)currentAlert;
- (void)setCurrentAlert:(id)arg1;
- (id)message;
- (id)title;
- (id)iconImage;
- (id)sortDate;
- (id)buttonLabels;
- (void)buttonPressedAtIndex:(int)arg1;
- (int)cancelButtonIndex;
- (BOOL)isAlarm;

@end

