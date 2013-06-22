/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList, MKMapSnapshotCreator, NSMutableDictionary, NSString, UIImage;

@interface MKMapSnapshotRequest : NSObject
{
    id _requester;
    id _context;
    CDStruct_2c43369c _coordinate;
    unsigned int _zoomLevel;
    unsigned int _zoomAdd;
    struct CGSize _size;
    GEOTileKeyList *_tileKeyList;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _maxX;
    unsigned int _maxY;
    struct CGPoint _renderOffset;
    BOOL _paused;
    NSMutableDictionary *_objects;
}

@property(retain, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) id requester; // @synthesize requester=_requester;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)_restartLoadingAfterPause:(id)arg1;
- (void)tileRequesterFailedWithError:(id)arg1;
- (void)tileRequesterCompleted;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (id)init;
- (id)description;

@end
