/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class CADisplayLink, MRRendererInternal, NSDictionary, MRContext, MCMontage, MRLayerParallelizer;
@protocol MRRenderingDelegate, MREditingDelegate, MRLiveSlideshowDelegate, MZMediaManagement, MRFeatureDelegate, MRAsynchronousOperationsDelegate;

@interface MRRenderer : NSObject {
	MCMontage *mMontage;	// 4 = 0x4
	MRLayerParallelizer *mTopMRLayer;	// 8 = 0x8
	float mVolume;	// 12 = 0xc
	CGSize mSize;	// 16 = 0x10
	double mTimeQuantum;	// 24 = 0x18
	int mOrientation;	// 32 = 0x20
	CADisplayLink *mDisplayLink;	// 36 = 0x24
	double mDisplayLinkTimestamp;	// 40 = 0x28
	BOOL mIsCleanedUp;	// 48 = 0x30
	BOOL mIsPlaying;	// 49 = 0x31
	BOOL mPushRendering;	// 50 = 0x32
	BOOL mRequestRenderingOnChanges;	// 51 = 0x33
	int mMode;	// 52 = 0x34
	BOOL mDisplaysFPS;	// 56 = 0x38
	BOOL mIsEditing;	// 57 = 0x39
	NSDictionary *mParameters;	// 60 = 0x3c
	MRRendererInternal *mInternal;	// 64 = 0x40
	id<MZMediaManagement> mAssetManagementDelegate;	// 68 = 0x44
	id<MRRenderingDelegate> mRenderingDelegate;	// 72 = 0x48
	id<MREditingDelegate> mEditingDelegate;	// 76 = 0x4c
	id<MRFeatureDelegate> mFeatureDelegate;	// 80 = 0x50
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 84 = 0x54
@private
	BOOL _asynchronousOperationsAreSuspended;	// 88 = 0x58
}
@property(retain, nonatomic) id<MZMediaManagement> assetManagementDelegate;	// G=0x3214c485; S=0x3214a665; @synthesize=mAssetManagementDelegate
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x3214c585; S=0x3214c595; @synthesize=_asynchronousOperationsAreSuspended
@property(retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;	// G=0x32150241; S=0x32150261; 
@property(readonly, assign) MRContext *context;	// G=0x3214ee89; 
@property(assign, nonatomic) CGPoint contextOffset;	// G=0x3214a399; S=0x3214a3c5; 
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x3214c475; S=0x3214a6d9; @synthesize=mDisplaysFPS
@property(assign) BOOL dontShowDRMUI;	// G=0x3214eea9; S=0x3214eec9; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x3214c505; S=0x3214c519; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x3214c495; S=0x3214c4a9; @synthesize=mFeatureDelegate
@property(assign) BOOL hideTextWhileEditing;	// G=0x321503ad; S=0x321503cd; 
@property(assign, nonatomic) BOOL isEditing;	// G=0x3214c405; S=0x3214c415; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x3214efcd; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x3214a64d; 
@property(readonly, assign) BOOL isPlaying;	// G=0x3214c425; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x321501fd; S=0x3215021d; 
@property(assign) double masterClock;	// G=0x3214eee9; S=0x3214ef41; 
@property(assign, nonatomic) int mode;	// G=0x3214c3f5; S=0x3214a529; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x3214c3c9; S=0x32145ff1; @synthesize=mMontage
@property(assign, nonatomic) int orientation;	// G=0x3214a48d; S=0x3214a49d; 
@property(readonly, assign) NSDictionary *parameters;	// G=0x3214c575; @synthesize=mParameters
@property(assign, nonatomic) BOOL pushRendering;	// G=0x3214c435; S=0x3214c445; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x3214c4cd; S=0x3214c4e1; @synthesize=mRenderingDelegate
@property(assign, nonatomic) BOOL requestRenderingOnChanges;	// G=0x3214c455; S=0x3214c465; @synthesize=mRequestRenderingOnChanges
@property(assign) BOOL screenBurnTest;	// G=0x32150285; S=0x321502a5; 
@property(assign, nonatomic) CGSize size;	// G=0x3214c3d9; S=0x3214a1bd; @synthesize=mSize
@property(assign) BOOL slaveFrameMode;	// G=0x32146389; S=0x321463a9; 
@property(assign, nonatomic) double time;	// G=0x32149f11; S=0x3214a0a9; 
@property(assign, nonatomic) double timeQuantum;	// G=0x3214c55d; S=0x3214a125; @synthesize=mTimeQuantum
@property(assign, nonatomic) float volume;	// G=0x3214c53d; S=0x3214c54d; @synthesize=mVolume
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x3214e455
- (id)init;	// 0x321457ad
- (id)initWithParameters:(id)parameters;	// 0x32145331
- (void)_displayFPS:(double)fps actuallyDisplay:(BOOL)display;	// 0x3214c825
- (double)_doAction:(id)action;	// 0x3214a715
- (void)_doActions;	// 0x3214b0f9
- (void)_doSnapshot;	// 0x32149671
- (void)_effectRequestedSlides:(id)slides;	// 0x3214be15
- (BOOL)_lockRendering;	// 0x321462c5
- (int)_maxLinesForCurrentEditingTextElement;	// 0x3214ee39
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x3214edd5
- (void)_nearingEndForSerializer:(id)serializer;	// 0x3214bd2d
- (void)_render:(id)render;	// 0x32146efd
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x32148e29
- (void)_renderThreadMain;	// 0x32146b25
- (void)_sendNotificationMainThread:(id)thread;	// 0x32150401
- (void)_setTime:(double)time isResyncing:(BOOL)resyncing;	// 0x3214c5a5
- (void)_startRenderTimer;	// 0x32146c79
- (void)_stopRenderTimer;	// 0x32146d81
- (double)_unalteredTime;	// 0x3214c68d
- (void)_undimAllLayersInLayer:(id)layer;	// 0x3214f21d
- (void)_unlockRendering;	// 0x3214635d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x3214e285
- (void)addAudioPlayer:(id)player;	// 0x3214eb5d
- (void)addNavigatorToBackHistory:(id)backHistory;	// 0x32149bb1
- (void)addNavigatorToForthHistory:(id)forthHistory;	// 0x32149c31
// declared property getter: - (id)assetManagementDelegate;	// 0x3214c485
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x3214c585
// declared property getter: - (id)asynchronousOperationsDelegate;	// 0x32150241
- (void)beginMorphingToAspectRatio:(float)aspectRatio andOrientation:(int)orientation withDuration:(double)duration;	// 0x3214c05d
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x3214e499
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x3214e6e1
- (BOOL)canGoBack;	// 0x32149b39
- (BOOL)canGoForth;	// 0x32149b75
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x3215046d
- (void)cleanup;	// 0x32145889
// declared property getter: - (id)context;	// 0x3214ee89
// declared property getter: - (CGPoint)contextOffset;	// 0x3214a399
- (CGImageRef)copyCGSnapshotAtTime:(double)time andSize:(CGSize)size;	// 0x32150019
- (CGImageRef)currentFrameAsCGImage;	// 0x32150041
- (id)currentState;	// 0x3214ba4d
- (void)dealloc;	// 0x321457c1
- (void)deselectAllLayers;	// 0x3214f0fd
- (void)deselectLayer:(id)layer;	// 0x3214f071
- (void)dimLayersExceptForPathTo:(id)to;	// 0x3214f599
// declared property getter: - (BOOL)displaysFPS;	// 0x3214c475
- (void)doAction:(id)action;	// 0x3214affd
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x3214eea9
- (int)dragTo:(CGPoint)to withModifiers:(unsigned)modifiers;	// 0x3214e159
- (void)dumpActiveHierarchy;	// 0x3214bca9
// declared property getter: - (id)editingDelegate;	// 0x3214c505
- (void)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x3214bf29
- (void)endMorphing;	// 0x3214c215
- (void)endTextEditing:(BOOL)editing;	// 0x3214e7dd
// declared property getter: - (id)featureDelegate;	// 0x3214c495
- (void)finalize;	// 0x32145825
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x3214e38d
- (void)goBack;	// 0x32149859
- (void)goForth;	// 0x321499c9
- (void)gotoState:(id)state;	// 0x3214bb21
// declared property getter: - (BOOL)hideTextWhileEditing;	// 0x321503ad
- (int)hitCanceledForKey:(id)key;	// 0x3214d341
- (int)hitForKey:(id)key endsAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x3214d179
- (int)hitForKey:(id)key startsAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x3214ce01
// declared property getter: - (BOOL)isEditing;	// 0x3214c405
// declared property getter: - (BOOL)isFlipped;	// 0x3214efcd
// declared property getter: - (BOOL)isOffscreen;	// 0x3214a64d
// declared property getter: - (BOOL)isPlaying;	// 0x3214c425
- (id)layerAtPath:(id)path fromLayer:(id)layer;	// 0x3214fad5
- (id)layerForPlug:(id)plug;	// 0x3214b901
- (id)layerForPlugObjectID:(id)plugObjectID;	// 0x3214b941
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x3214e179
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3 localTime:(double *)time;	// 0x3214e91d
// declared property getter: - (id)liveSlideshowDelegate;	// 0x321501fd
- (void)lockRendering;	// 0x321462a5
// declared property getter: - (double)masterClock;	// 0x3214eee9
// declared property getter: - (int)mode;	// 0x3214c3f5
// declared property getter: - (id)montage;	// 0x3214c3c9
- (unsigned)mouseDownAt:(CGPoint)at clickCount:(int)count withModifiers:(unsigned)modifiers;	// 0x3214e8f1
- (void)moveNavigatorFromBackToForthHistory:(id)forthHistory;	// 0x32149d09
- (void)moveNavigatorFromForthToBackHistory:(id)backHistory;	// 0x32149e0d
- (void)nearingEndForSerializer:(id)serializer;	// 0x3214bdbd
// declared property getter: - (int)orientation;	// 0x3214a48d
// declared property getter: - (id)parameters;	// 0x3214c575
- (void)pause;	// 0x321463c9
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x3214b961
- (void)processAudioPlayers;	// 0x3214e955
// declared property getter: - (BOOL)pushRendering;	// 0x3214c435
- (void)removeAudioPlayer:(id)player;	// 0x3214ed2d
- (void)removeNavigatorFromBackHistory:(id)backHistory;	// 0x32149cb1
- (void)removeNavigatorFromForthHistory:(id)forthHistory;	// 0x32149cdd
- (void)render;	// 0x3214e941
// declared property getter: - (id)renderingDelegate;	// 0x3214c4cd
- (void)requestRendering:(BOOL)rendering;	// 0x321466f1
// declared property getter: - (BOOL)requestRenderingOnChanges;	// 0x3214c455
- (BOOL)requestRenderingWithin:(double)within;	// 0x32146899
- (void)resume;	// 0x3214656d
// declared property getter: - (BOOL)screenBurnTest;	// 0x32150285
- (void)selectLayer:(id)layer;	// 0x3214f011
- (id)selectedLayers;	// 0x3214f1fd
- (void)sendNotification:(id)notification;	// 0x3215043d
- (BOOL)sendStandardAction:(id)action;	// 0x3214c2e9
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x3214a665
// declared property setter: - (void)setAsynchronousOperationsDelegate:(id)delegate;	// 0x32150261
// declared property setter: - (void)setContextOffset:(CGPoint)offset;	// 0x3214a3c5
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x3214a6d9
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x3214eec9
- (void)setEAGLContext:(id)context;	// 0x32145d91
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x3214c519
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x3214c4a9
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x3214ef69
// declared property setter: - (void)setHideTextWhileEditing:(BOOL)editing;	// 0x321503cd
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x3214c415
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x3215021d
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x3214ef41
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x32150169
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x321501a1
// declared property setter: - (void)setMode:(int)mode;	// 0x3214a529
// declared property setter: - (void)setMontage:(id)montage;	// 0x32145ff1
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3214a49d
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x3214c445
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x3214c4e1
// declared property setter: - (void)setRequestRenderingOnChanges:(BOOL)changes;	// 0x3214c465
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x321502a5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3214a1bd
// declared property setter: - (void)setSlaveFrameMode:(BOOL)mode;	// 0x321463a9
- (void)setTemporarySize:(CGSize)size;	// 0x3214a2c9
// declared property setter: - (void)setTime:(double)time;	// 0x3214a0a9
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x3214a125
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)workaround;	// 0x321503ed
// declared property setter: - (void)setVolume:(float)volume;	// 0x3214c54d
// declared property getter: - (CGSize)size;	// 0x3214c3d9
// declared property getter: - (BOOL)slaveFrameMode;	// 0x32146389
- (CGImageRef)snapshotAsCGImageForTime:(double)time andSize:(CGSize)size;	// 0x3214fbfd
- (id)snapshotOfStates:(id)states atSize:(CGSize)size;	// 0x3214bbf1
- (void)stall;	// 0x3214c021
- (void)stepBackward;	// 0x32149805
- (void)stepForward;	// 0x321497b1
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x3214c595
- (int)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x3214df3d
// declared property getter: - (double)time;	// 0x32149f11
// declared property getter: - (double)timeQuantum;	// 0x3214c55d
- (int)trackingAt:(CGPoint)at;	// 0x3214d509
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x3214b429
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x3214b695
- (void)undimAllLayers;	// 0x3214fa71
- (void)unlockRendering;	// 0x321462b5
- (void)updateSelectionLayer;	// 0x3214f00d
// declared property getter: - (float)volume;	// 0x3214c53d
- (void)warmupAudio:(BOOL)audio;	// 0x3214693d
- (void)warmupVideo:(BOOL)video;	// 0x32146941
@end

