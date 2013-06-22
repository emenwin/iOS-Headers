/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray, UIImage;

@interface UIImageView : UIView
{
    id _storage;
}

- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) int animationRepeatCount;
@property(nonatomic) double animationDuration;
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
@property(copy, nonatomic) NSArray *highlightedAnimationImages;
@property(copy, nonatomic) NSArray *animationImages;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setViewGeometry:(struct CGRect)arg1 forMetric:(int)arg2;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @dynamic userInteractionEnabled;

@end
