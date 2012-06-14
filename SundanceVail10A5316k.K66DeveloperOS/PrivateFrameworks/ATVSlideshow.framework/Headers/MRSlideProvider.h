/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MCSlide, MRLayerEffect, NSInvocationOperation, NSLock, NSDictionary, MRFrame, NSString, NSConditionLock, MRImage, MRLayer;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable> {
	CGSize mDefaultSize;	// 4 = 0x4
	float mStillTime;	// 12 = 0xc
	NSString *mImageSizeScript;	// 16 = 0x10
	NSDictionary *mEffectAttributes;	// 20 = 0x14
	NSString *mShowTimeScript;	// 24 = 0x18
	NSInvocationOperation *mPreloadOperation;	// 28 = 0x1c
	NSLock *mPreloadOperationLock;	// 32 = 0x20
	NSConditionLock *mPreloadSemaphore;	// 36 = 0x24
	MRFrame *mFrame;	// 40 = 0x28
	MRImage *mOriginalImage;	// 44 = 0x2c
	MRImage *mOutputImage;	// 48 = 0x30
	CGSize mRequestedSize;	// 52 = 0x34
	double mShowTime;	// 60 = 0x3c
	double mShowDuration;	// 68 = 0x44
	double mSlideStartTime;	// 76 = 0x4c
	double mSlideDuration;	// 84 = 0x54
	MRLayerEffect *mEffectLayer;	// 92 = 0x5c
	MCSlide *mSlide;	// 96 = 0x60
	int mKenBurnsType;	// 100 = 0x64
	NSString *mAssetPath;	// 104 = 0x68
	float mOriginalImageAspectRatio;	// 108 = 0x6c
	MRLayer *mSlideLayer;	// 112 = 0x70
	CGSize mImageSize;	// 116 = 0x74
	CGSize mLastImageSize;	// 124 = 0x7c
	double mLastTime;	// 132 = 0x84
	CGSize mLastDaSize;	// 140 = 0x8c
	CGSize mSizeFactor;	// 148 = 0x94
	BOOL mIsAnimatedGIF;	// 156 = 0x9c
	MCSlide *mSlideCopy;	// 160 = 0xa0
	unsigned mSlideIndex;	// 164 = 0xa4
	unsigned mFlags;	// 168 = 0xa8
}
@property(readonly, assign) BOOL canPlay;	// G=0x365eb1d1; 
@property(assign, nonatomic) CGSize defaultSize;	// G=0x365ef675; S=0x365eaf51; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x365ef6c1; S=0x365eb0dd; @synthesize=mEffectAttributes
@property(readonly, assign) MRFrame *frame;	// G=0x365ef7e1; @synthesize=mFrame
@property(readonly, assign) BOOL hasFilters;	// G=0x365eb2b5; 
@property(readonly, assign, nonatomic) float imageAspectRatio;	// G=0x365eaf41; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x365ef6ad; S=0x365eb069; @synthesize=mImageSizeScript
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x365ed02d; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x365ed031; 
@property(readonly, assign, nonatomic) BOOL isLoaded;	// G=0x365eb215; 
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x365eafa9; S=0x365eafbd; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x365ecf31; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x365ecf35; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x365eb201; S=0x365ebdc1; 
@property(assign, nonatomic) BOOL isStill;	// G=0x365eb135; S=0x365eb149; 
@property(assign) int kenBurnsType;	// G=0x365ef7b5; S=0x365ef7c9; @synthesize=mKenBurnsType
@property(assign, nonatomic) BOOL needsToUpdateLayout;	// G=0x365eb269; S=0x365eb26d; 
@property(readonly, assign, nonatomic) CGSize requestedSize;	// G=0x365ef761; @synthesize=mRequestedSize
@property(assign, nonatomic) double showDuration;	// G=0x365ef735; S=0x365ef74d; @synthesize=mShowDuration
@property(assign, nonatomic) double showTime;	// G=0x365ef709; S=0x365ef721; @synthesize=mShowTime
@property(copy, nonatomic) NSString *showTimeScript;	// G=0x365ef6d1; S=0x365ef6e5; @synthesize=mShowTimeScript
@property(assign, nonatomic) CGSize sizeFactor;	// G=0x365ef779; S=0x365ef791; @synthesize=mSizeFactor
@property(retain, nonatomic) MCSlide *slide;	// G=0x365ef7a5; S=0x365eba3d; @synthesize=mSlide
@property(readonly, assign, nonatomic) double slideDuration;	// G=0x365ef80d; @synthesize=mSlideDuration
@property(assign, nonatomic) BOOL slideIsReadonly;	// G=0x365eb195; S=0x365eb1a9; 
@property(readonly, assign, nonatomic) double slideStartTime;	// G=0x365ef7f5; @synthesize=mSlideStartTime
@property(assign, nonatomic) float stillTime;	// G=0x365ef68d; S=0x365ef69d; @synthesize=mStillTime
@property(assign, nonatomic) double time;	// G=0x365ebea9; S=0x365ebec1; 
@property(assign, nonatomic) BOOL useMipmapping;	// G=0x365eb009; S=0x365eb01d; 
+ (void)applyKenBurnsForSlide:(id)slide inPlug:(id)plug forSize:(CGSize)size atTime:(double)time withTargetSize:(CGSize)targetSize kenBurnsType:(int)type translation:(CGPoint *)translation scale:(float *)scale rotation:(float *)rotation;	// 0x365ef825
- (id)initWithEffectLayer:(id)effectLayer;	// 0x365eaa79
- (void)_computeImageSizeInContext:(id)context withArguments:(id)arguments;	// 0x365ed035
- (void)_loadTextureWithArguments:(id)arguments;	// 0x365ec981
- (void)_unloadIfNotUpdatingLive;	// 0x365ec005
- (BOOL)beginLiveUpdate;	// 0x365ebfa9
// declared property getter: - (BOOL)canPlay;	// 0x365eb1d1
- (void)cancelLoading;	// 0x365ece89
- (void)cleanup;	// 0x365eac1d
- (void)dealloc;	// 0x365eab9d
// declared property getter: - (CGSize)defaultSize;	// 0x365ef675
// declared property getter: - (id)effectAttributes;	// 0x365ef6c1
- (BOOL)endLiveUpdate;	// 0x365ebfc5
- (void)finalize;	// 0x365eabdd
// declared property getter: - (id)frame;	// 0x365ef7e1
- (CGSize)framedImageSizeAtIndex:(unsigned long)index aspectRatio:(float)ratio;	// 0x365eb301
// declared property getter: - (BOOL)hasFilters;	// 0x365eb2b5
// declared property getter: - (float)imageAspectRatio;	// 0x365eaf41
// declared property getter: - (id)imageSizeScript;	// 0x365ef6ad
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x365ed02d
// declared property getter: - (BOOL)isInfinite;	// 0x365ed031
// declared property getter: - (BOOL)isLoaded;	// 0x365eb215
- (BOOL)isLoadedForTime:(double)time;	// 0x365ec12d
// declared property getter: - (BOOL)isMonochromatic;	// 0x365eafa9
// declared property getter: - (BOOL)isNative3D;	// 0x365ecf31
// declared property getter: - (BOOL)isOpaque;	// 0x365ecf35
// declared property getter: - (BOOL)isPlaying;	// 0x365eb201
// declared property getter: - (BOOL)isStill;	// 0x365eb135
// declared property getter: - (int)kenBurnsType;	// 0x365ef7b5
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x365ec141
- (void)loadTextureWithArguments:(id)arguments;	// 0x365eca49
- (void)loadWithArguments:(id)arguments;	// 0x365ec7b1
// declared property getter: - (BOOL)needsToUpdateLayout;	// 0x365eb269
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x365eadb1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365ef525
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365edcd5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365ee0a5
// declared property getter: - (CGSize)requestedSize;	// 0x365ef761
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365ee0b9
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x365eaf51
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x365eb0dd
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x365eb069
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x365eafbd
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x365ebdc1
// declared property setter: - (void)setIsStill:(BOOL)still;	// 0x365eb149
// declared property setter: - (void)setKenBurnsType:(int)type;	// 0x365ef7c9
// declared property setter: - (void)setNeedsToUpdateLayout:(BOOL)updateLayout;	// 0x365eb26d
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x365ef74d
// declared property setter: - (void)setShowTime:(double)time;	// 0x365ef721
// declared property setter: - (void)setShowTimeScript:(id)script;	// 0x365ef6e5
// declared property setter: - (void)setSizeFactor:(CGSize)factor;	// 0x365ef791
// declared property setter: - (void)setSlide:(id)slide;	// 0x365eba3d
// declared property setter: - (void)setSlideIsReadonly:(BOOL)readonly;	// 0x365eb1a9
// declared property setter: - (void)setStillTime:(float)time;	// 0x365ef69d
// declared property setter: - (void)setTime:(double)time;	// 0x365ebec1
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x365eb01d
// declared property getter: - (double)showDuration;	// 0x365ef735
// declared property getter: - (double)showTime;	// 0x365ef709
// declared property getter: - (id)showTimeScript;	// 0x365ef6d1
// declared property getter: - (CGSize)sizeFactor;	// 0x365ef779
// declared property getter: - (id)slide;	// 0x365ef7a5
// declared property getter: - (double)slideDuration;	// 0x365ef80d
// declared property getter: - (BOOL)slideIsReadonly;	// 0x365eb195
// declared property getter: - (double)slideStartTime;	// 0x365ef7f5
// declared property getter: - (float)stillTime;	// 0x365ef68d
// declared property getter: - (double)time;	// 0x365ebea9
- (CGSize)unframedImageSizeForAspectRatio:(float)aspectRatio frameID:(id)anId andFrameAttributes:(id)attributes atIndex:(unsigned long)index framedImageSize:(CGSize *)size;	// 0x365eb531
- (void)unload;	// 0x365ecc31
- (void)updateShowTimeAndDurationWithPlug:(id)plug andAttributes:(id)attributes;	// 0x365eb75d
- (BOOL)updateStuffWithAssetManager:(id)assetManager;	// 0x365ed651
// declared property getter: - (BOOL)useMipmapping;	// 0x365eb009
@end
