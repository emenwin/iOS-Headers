/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class CAShapeLayer, CalibrationBallView, CompassBackgroundView, UILabel;

@interface CalibrationViewController : UIViewController
{
    CompassBackgroundView *_compassBackgroundView;
    CAShapeLayer *_compassBackgroundViewMask;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    CalibrationBallView *_ballView;
    struct CGPoint _compassOriginPoint;
    float *_ticsShowingArray;
    double _angleToRim;
    double _angleOfAwesome;
    int _quantizationType;
    double _previousTimestamp;
    double _startTicAngle;
    _Bool _ignoreMotionUpdates;
    _Bool _shouldFillTics;
    _Bool _shouldCompleteTics;
    double _previousHorizontalAngle;
    struct Vec3Imp<double> _previousGravity;
    unsigned long long _numCompleteTics;
    double _compassRadius;
}

- (id).cxx_construct;
- (void)dealloc;
- (double)completeCircle;
- (void)setMotion:(id)arg1;
- (double)_correctedAngleForCurrentOrientation:(double)arg1;
- (void)setBallAngle:(double)arg1 tiltAngle:(double)arg2;
- (_Bool)circleIsCompleted;
- (void)hideAllTics;
- (void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3;
- (void)showTicAtAngle:(double)arg1 withCredit:(double)arg2;
- (void)updateMaskingPath;
- (id)updatedMaskingPath;
- (void)reset;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (float)quantizedPercentage:(double)arg1;
- (void)userDefaultsChanged:(id)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithOriginPoint:(struct CGPoint)arg1;
- (id)init;

@end

