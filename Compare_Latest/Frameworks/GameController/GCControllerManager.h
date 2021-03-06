/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GameControllerDaemonListener-Protocol.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

// Not exported
@interface GCControllerManager : NSObject <GameControllerDaemonListener>
{
    struct __IOHIDManager *_hidManager;
    NSMutableArray *_controllers;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    struct IONotificationPort *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    id _logger;
}

@property(copy, nonatomic) id logger; // @synthesize logger=_logger;
@property struct __IOHIDManager *hidManager; // @synthesize hidManager=_hidManager;
- (void).cxx_destruct;
- (void)open;
- (id)controllers;
- (void)removeController:(id)arg1;
- (void)controllerIndex:(long long)arg1 setData:(id)arg2;
- (void)addController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

