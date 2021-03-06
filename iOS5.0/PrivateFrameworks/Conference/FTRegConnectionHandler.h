/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface FTRegConnectionHandler : NSObject
{
    int _serviceType;
    unsigned long long _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    CDStruct_34e8bc21 _handlerFlags;
}

- (id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned long long)arg3;
- (id)initWithServiceType:(int)arg1 name:(id)arg2;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *_serviceName;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
@property(nonatomic) unsigned long long caps; // @synthesize caps=_caps;
- (BOOL)_isServiceSupported;
- (BOOL)isConnectedToDaemon;
- (BOOL)connectToDaemon:(BOOL)arg1;
- (BOOL)connectToDaemon;
- (void)_disconnectFromDaemon;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
@property(retain, nonatomic) NSString *_logName; // @synthesize _logName;
@property(copy, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

