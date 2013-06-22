/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAssetTrack, AVAudioMix, AVVideoComposition, AVWeakReference, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVAssetExportSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker *remaker;
    int status;
    NSError *error;
    float progress;
    AVAsset *asset;
    AVAssetTrack *firstVideoTrack;
    NSString *preset;
    NSString *preset16x9;
    NSURL *outputURL;
    NSString *outputFileType;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    CDStruct_e83c9415 timeRange;
    long long maxFileSize;
    id handler;
    BOOL optimizeForNetworkUse;
    BOOL outputFileCreatedByRemaker;
    BOOL useHardwareVideoEncoderIfAvailable;
    long compatibleFileTypesDispatchOncePredicate;
    NSArray *compatibleFileTypes;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
}

@end
