/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <CAEAGLLayer.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"

@class MPDocument, MRRenderer, EAGLContext, MPFaceDetector;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaHitBlobSupport, MRMarimbaPlayback, MRMarimbaBasicPlayback> {
@private
	MRRenderer *_renderer;	// 52 = 0x34
	MPDocument *_document;	// 56 = 0x38
	BOOL _masterClockIsSet;	// 60 = 0x3c
	BOOL _bailTimeWatcher;	// 61 = 0x3d
	BOOL _stopWithVideo;	// 62 = 0x3e
	BOOL _readOnly;	// 63 = 0x3f
	MPFaceDetector *_faceDetector;	// 64 = 0x40
	EAGLContext *_context;	// 68 = 0x44
	unsigned _viewRenderbuffer;	// 72 = 0x48
	unsigned _viewFramebuffer;	// 76 = 0x4c
}
@property(assign) BOOL bailTimeWatcher;	// G=0x31b6211d; S=0x31b6212d; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x31b61021; S=0x31b61045; 
@property(retain, nonatomic) MPDocument *document;	// G=0x31b60641; S=0x31b60815; 
@property(readonly, assign) BOOL isPlaying;	// G=0x31b60e55; 
@property(readonly, assign) MRRenderer *renderer;	// G=0x31b613b5; 
@property(readonly, assign) CGSize size;	// G=0x31b607dd; 
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x31b60f71; S=0x31b60f81; 
@property(assign, nonatomic) double time;	// G=0x31b61065; S=0x31b61085; 
@property(readonly, assign) double timeRemaining;	// G=0x31b610c9; 
@property(assign, nonatomic) float volume;	// G=0x31b61129; S=0x31b61149; 
+ (id)layerWithDocument:(id)document size:(CGSize)size;	// 0x31b60181
+ (void)releaseResources;	// 0x31b601f5
- (id)init;	// 0x31b60329
- (id)_currentEffectContainer;	// 0x31b5d2d5
- (id)_effectContainerForTime:(double)time;	// 0x31b5da89
- (id)_firstEffectContainer;	// 0x31b5d9dd
- (int)_mainLayerIndex;	// 0x31b5dbb1
- (void)_warmupRendererThreaded:(id)threaded;	// 0x31b614a5
- (void)aspectRatioChangedTo:(id)to;	// 0x31b61f3d
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x31b6211d
- (void)beginGesture:(id)gesture;	// 0x31b5f989
- (BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;	// 0x31b5f78d
- (id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint *)point3;	// 0x31b5f271
- (void)callbackThread:(id)thread;	// 0x31b5dc65
- (void)cancelGesture:(id)gesture;	// 0x31b600d1
- (void)cleanup;	// 0x31b60599
- (CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;	// 0x31b5f6b1
- (id)currentSlide;	// 0x31b5dfdd
- (id)currentSlides;	// 0x31b5de2d
- (void)dealloc;	// 0x31b60491
- (void)destroyFramebuffer;	// 0x31b6213d
- (void)didAddEffects:(id)effects;	// 0x31b61ec9
- (void)didApplyStyle:(id)style;	// 0x31b61d39
- (void)didLiveChanged:(id)changed;	// 0x31b60db9
- (id)displayedEffectContainers;	// 0x31b5c8e9
// declared property getter: - (BOOL)displaysFPS;	// 0x31b61021
- (void)doGesture:(id)gesture;	// 0x31b5fd51
// declared property getter: - (id)document;	// 0x31b60641
- (void)endGesture:(id)gesture;	// 0x31b60081
- (BOOL)endLiveUpdateForHitBlob:(id)hitBlob;	// 0x31b5f88d
- (BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;	// 0x31b5f479
- (void)goBack;	// 0x31b611a1
- (void)goForth;	// 0x31b611c1
- (void)gotoBeginning;	// 0x31b61299
- (void)gotoEnd;	// 0x31b611e1
- (void)gotoNextSlide;	// 0x31b5e395
- (void)gotoPreviousSlide;	// 0x31b5e9bd
- (void)gotoSlide:(id)slide;	// 0x31b5ef41
- (void)hitStartAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x31b6200d
- (BOOL)isInTransition;	// 0x31b5d499
// declared property getter: - (BOOL)isPlaying;	// 0x31b60e55
- (void)lockRendering;	// 0x31b61519
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x31b5c94d
- (void)moveToNextEffectContainer;	// 0x31b5cb51
- (void)moveToPreviousEffectContainer;	// 0x31b5cc2d
- (void)moveToSubtitleForSlide:(id)slide;	// 0x31b5cff1
- (void)moveToTitleSlide;	// 0x31b5cd05
- (BOOL)nearingEndForEffect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x31b61905
- (BOOL)nearingEndForEffectAfterDelay:(id)effectAfterDelay;	// 0x31b61c19
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x31b61559
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x31b61805
- (void)nextFrame;	// 0x31b612e5
- (void)pause;	// 0x31b60f35
- (void)play;	// 0x31b60e79
- (void)prevFrame;	// 0x31b6134d
- (double)relativeTime;	// 0x31b5c791
- (double)relativeTimeForBackgroundAudio;	// 0x31b5c7e1
- (double)relativeTimeForLayer:(id)layer;	// 0x31b5c841
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x31b5e191
- (void)removeFadeIn;	// 0x31b5f11d
// declared property getter: - (id)renderer;	// 0x31b613b5
- (void)requestRendering:(BOOL)rendering;	// 0x31b613c5
- (void)setAsynchronous:(BOOL)asynchronous;	// 0x31b60651
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x31b6212d
- (void)setBounds:(CGRect)bounds;	// 0x31b606c1
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x31b61045
// declared property setter: - (void)setDocument:(id)document;	// 0x31b60815
- (void)setFrame:(CGRect)frame;	// 0x31b60655
- (void)setReadOnly:(BOOL)only;	// 0x31b6210d
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x31b60f81
- (void)setSuspended:(BOOL)suspended;	// 0x31b61169
// declared property setter: - (void)setTime:(double)time;	// 0x31b61085
// declared property setter: - (void)setVolume:(float)volume;	// 0x31b61149
// declared property getter: - (CGSize)size;	// 0x31b607dd
- (CGImageRef)snapshotAsCGImage;	// 0x31b61fed
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x31b61f41
// declared property getter: - (BOOL)stopWithVideo;	// 0x31b60f71
- (void)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x31b6208d
// declared property getter: - (double)time;	// 0x31b61065
// declared property getter: - (double)timeRemaining;	// 0x31b610c9
- (void)togglePlayback;	// 0x31b60e09
- (void)unlockRendering;	// 0x31b61539
- (BOOL)updateFramebuffer;	// 0x31b62219
// declared property getter: - (float)volume;	// 0x31b61129
- (void)warmupRenderer;	// 0x31b613e5
- (void)watcherThread:(id)thread;	// 0x31b5dd4d
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x31b5d6ad
@end

