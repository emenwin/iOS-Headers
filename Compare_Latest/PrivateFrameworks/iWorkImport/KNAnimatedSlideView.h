/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDCanvasDelegate-Protocol.h"
#import "TSDConnectedInfoReplacing-Protocol.h"

@class KNAnimatedSlideModel, KNPlaybackSession, KNSlide, KNSlideNode, NSIndexSet, NSMutableArray, NSMutableSet, NSSet, TSDCanvas, TSUNoCopyDictionary;

// Not exported
@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing>
{
    KNSlide *mSlide;
    KNSlideNode *mAlternateDestinationSlideNode;
    KNPlaybackSession *mSession;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned long long mCurrentEventIndex;
    NSIndexSet *mEventIndexesToAnimate;
    _Bool mSlideIsBuildable;
    _Bool mTransitionInitialized;
    _Bool mShouldStopAnimations;
    NSMutableSet *mMovieRenderers;
    NSMutableSet *mBuildRenderers;
    unsigned long long mSlideNumber;
    double mTransitionStartTime;
    unsigned long long mAnimationsActive;
    unsigned long long mAnimationsStarted;
    _Bool mIsInDelayBeforeActiveAnimations;
    NSMutableArray *mChunks;
    TSUNoCopyDictionary *mBuildsToStartAfterMovieStartsMap;
    TSUNoCopyDictionary *mTextureSetForInfoMap;
    id mEventStartCallbackTarget;
    SEL mEventStartCallbackSelector;
    id mEventAnimationActiveCallbackTarget;
    SEL mEventAnimationActiveCallbackSelector;
    id mEventEndCallbackTarget;
    SEL mEventEndCallbackSelector;
    id mMovieStartCallbackTarget;
    SEL mMovieStartCallbackSelector;
    id mMovieEndCallbackTarget;
    SEL mMovieEndCallbackSelector;
    _Bool mEventTriggered;
    _Bool mQueuedTrigger;
    _Bool mSkipDelayOnTransition;
    TSDCanvas *mCanvas;
    int mIsTexturePreloadingCancelled;
    NSMutableSet *mTextureSets;
}

+ (void)registerUserDefaults;
+ (void)initialize;
@property(nonatomic) _Bool triggerQueued; // @synthesize triggerQueued=mQueuedTrigger;
@property(nonatomic) _Bool skipDelayOnTransition; // @synthesize skipDelayOnTransition=mSkipDelayOnTransition;
@property(readonly, nonatomic) KNPlaybackSession *session; // @synthesize session=mSession;
@property(readonly, nonatomic) KNAnimatedSlideModel *model; // @synthesize model=mAnimatedSlideModel;
@property(copy, nonatomic) NSIndexSet *eventIndexesToAnimate; // @synthesize eventIndexesToAnimate=mEventIndexesToAnimate;
@property(nonatomic) _Bool eventHasTriggered; // @synthesize eventHasTriggered=mEventTriggered;
@property(readonly, nonatomic) NSSet *animatingBuildRenderers; // @synthesize animatingBuildRenderers=mBuildRenderers;
- (id)textureSetForRep:(id)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2;
- (void)p_resetMovieTextures;
- (void)p_clearMovieRenderers;
- (void)p_removeMovieRenderer:(id)arg1;
- (void)p_addMovieRenderer:(id)arg1;
@property(readonly, nonatomic) NSSet *movieRenderers;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (_Bool)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2;
- (void)p_animateBuild:(id)arg1 isMoviePlayback:(_Bool)arg2;
- (void)p_animateTransition:(id)arg1;
- (void)p_animateCurrentEventIgnoringDelays:(_Bool)arg1;
- (id)p_getRenderersAtEventIndex:(long long)arg1;
- (id)p_infosForSlide;
- (_Bool)p_shouldAddInfoToTree:(id)arg1;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)p_stopAllMovieRenderers;
- (void)interruptAndReset;
@property(readonly, nonatomic) _Bool isDoneAnimating;
- (_Bool)hasTransitionAtEventIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool hasBuilds;
@property(readonly, nonatomic) unsigned long long eventCount;
- (void)setNewDestinationSlideNode:(id)arg1;
- (_Bool)isAtFirstEvent;
@property(nonatomic) unsigned long long eventIndex;
- (void)triggerNextEventIgnoringDelay:(_Bool)arg1;
- (void)triggerNextEvent;
- (_Bool)playAutomaticEvents;
- (void)renderEvent:(unsigned long long)arg1 intoContext:(struct CGContext *)arg2 ignoreBuildVisibility:(_Bool)arg3;
- (struct CGImage *)copyImageOfCurrentEvent;
- (void)renderCurrentEventPreparingNextEvent:(_Bool)arg1;
- (void)renderCurrentEvent;
- (void)renderEvent:(unsigned long long)arg1 shouldPrepareBuildAnimation:(_Bool)arg2 shouldPrepareTransition:(_Bool)arg3;
- (void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(_Bool)arg3;
- (void)cancelRendering;
- (void)beginRenderingEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(_Bool)arg3 completionHandler:(id)arg4;
- (void)p_renderTexturesForEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 intoContext:(struct CGContext *)arg3 shouldPrepareBuildAnimation:(_Bool)arg4 ignoreBuildVisibility:(_Bool)arg5;
- (void)p_preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(_Bool)arg2 priority:(long long)arg3 completionHandler:(id)arg4;
- (id)infosVisibleAtEvent:(unsigned long long)arg1;
- (id)repsCurrentlyVisible;
- (id)infosCurrentlyVisible;
- (_Bool)infoIsVisible:(id)arg1 incoming:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isMovieAnimating;
@property(readonly, nonatomic) _Bool isNonMovieAnimationAnimating;
@property(readonly, nonatomic) _Bool isNonMovieAnimationActive;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)buildHasFinishedAnimating:(id)arg1;
- (void)movieHasFinishedPlayback:(id)arg1;
- (void)p_movieStarted:(id)arg1;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (void)reset;
- (void)setupTransition;
- (void)p_setupTransitionStartTime;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (unsigned long long)slideNumber;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)isPrintingCanvas;
- (id)documentRoot;
- (void)p_tearDownTextures;
- (void)dealloc;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;

@end
