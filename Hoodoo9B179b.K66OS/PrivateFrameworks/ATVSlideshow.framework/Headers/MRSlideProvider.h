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

@class MCSlide, NSConditionLock, NSDictionary, MRLayer, NSString, MRLayerEffect, NSLock, MRFrame, NSInvocationOperation, MRImage;

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
@property(assign, nonatomic) CGSize defaultSize;	// G=0x3556c501; S=0x3556803d; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x3556c54d; S=0x355681bd; @synthesize=mEffectAttributes
@property(readonly, assign) MRFrame *frame;	// G=0x3556c665; @synthesize=mFrame
@property(readonly, assign, nonatomic) float imageAspectRatio;	// G=0x3556802d; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x3556c53d; S=0x35568149; @synthesize=mImageSizeScript
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x3556a1d1; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x3556a1d5; 
@property(readonly, assign, nonatomic) BOOL isLoaded;	// G=0x355682c5; 
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x35568091; S=0x355680a5; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x3556a0d5; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x3556a0d9; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x355682b1; S=0x35568e09; 
@property(assign, nonatomic) BOOL isStill;	// G=0x35568215; S=0x35568229; 
@property(assign) int kenBurnsType;	// G=0x3556c645; S=0x3556c655; @synthesize=mKenBurnsType
@property(readonly, assign, nonatomic) CGSize requestedSize;	// G=0x3556c5e9; @synthesize=mRequestedSize
@property(assign, nonatomic) double showDuration;	// G=0x3556c5bd; S=0x3556c5d5; @synthesize=mShowDuration
@property(assign, nonatomic) double showTime;	// G=0x3556c591; S=0x3556c5a9; @synthesize=mShowTime
@property(copy, nonatomic) NSString *showTimeScript;	// G=0x3556c55d; S=0x3556c56d; @synthesize=mShowTimeScript
@property(assign, nonatomic) CGSize sizeFactor;	// G=0x3556c605; S=0x3556c621; @synthesize=mSizeFactor
@property(retain, nonatomic) MCSlide *slide;	// G=0x3556c635; S=0x35568a85; @synthesize=mSlide
@property(readonly, assign, nonatomic) double slideDuration;	// G=0x3556c68d; @synthesize=mSlideDuration
@property(assign, nonatomic) BOOL slideIsReadonly;	// G=0x35568271; S=0x35568289; 
@property(readonly, assign, nonatomic) double slideStartTime;	// G=0x3556c675; @synthesize=mSlideStartTime
@property(assign, nonatomic) float stillTime;	// G=0x3556c51d; S=0x3556c52d; @synthesize=mStillTime
@property(assign, nonatomic) double time;	// G=0x35568ee9; S=0x35568efd; 
@property(assign, nonatomic) BOOL useMipmapping;	// G=0x355680ed; S=0x35568101; 
+ (void)applyKenBurnsForSlide:(id)slide inPlug:(id)plug forSize:(CGSize)size atTime:(double)time withTargetSize:(CGSize)targetSize kenBurnsType:(int)type translation:(CGPoint *)translation scale:(float *)scale rotation:(float *)rotation;	// 0x3556c6a5
- (id)initWithEffectLayer:(id)effectLayer;	// 0x35567b8d
- (void)_computeImageSizeInContext:(id)context withArguments:(id)arguments;	// 0x3556a1d9
- (void)_loadTextureWithArguments:(id)arguments;	// 0x35569b35
- (void)_unloadIfNotUpdatingLive;	// 0x3556903d
- (BOOL)beginLiveUpdate;	// 0x35568fe1
- (void)cancelLoading;	// 0x3556a025
- (void)cleanup;	// 0x35567d11
- (void)dealloc;	// 0x35567c91
// declared property getter: - (CGSize)defaultSize;	// 0x3556c501
// declared property getter: - (id)effectAttributes;	// 0x3556c54d
- (BOOL)endLiveUpdate;	// 0x35568ffd
- (void)finalize;	// 0x35567cd1
// declared property getter: - (id)frame;	// 0x3556c665
- (CGSize)framedImageSizeAtIndex:(unsigned long)index aspectRatio:(float)ratio;	// 0x35568319
// declared property getter: - (float)imageAspectRatio;	// 0x3556802d
// declared property getter: - (id)imageSizeScript;	// 0x3556c53d
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x3556a1d1
// declared property getter: - (BOOL)isInfinite;	// 0x3556a1d5
// declared property getter: - (BOOL)isLoaded;	// 0x355682c5
- (BOOL)isLoadedForTime:(double)time;	// 0x35569161
// declared property getter: - (BOOL)isMonochromatic;	// 0x35568091
// declared property getter: - (BOOL)isNative3D;	// 0x3556a0d5
// declared property getter: - (BOOL)isOpaque;	// 0x3556a0d9
// declared property getter: - (BOOL)isPlaying;	// 0x355682b1
// declared property getter: - (BOOL)isStill;	// 0x35568215
// declared property getter: - (int)kenBurnsType;	// 0x3556c645
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x35569175
- (void)loadTextureWithArguments:(id)arguments;	// 0x35569be9
- (void)loadWithArguments:(id)arguments;	// 0x35569829
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35567e91
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3556c3c5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3556ad7d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3556b181
// declared property getter: - (CGSize)requestedSize;	// 0x3556c5e9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3556b195
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x3556803d
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x355681bd
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x35568149
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x355680a5
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x35568e09
// declared property setter: - (void)setIsStill:(BOOL)still;	// 0x35568229
// declared property setter: - (void)setKenBurnsType:(int)type;	// 0x3556c655
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x3556c5d5
// declared property setter: - (void)setShowTime:(double)time;	// 0x3556c5a9
// declared property setter: - (void)setShowTimeScript:(id)script;	// 0x3556c56d
// declared property setter: - (void)setSizeFactor:(CGSize)factor;	// 0x3556c621
// declared property setter: - (void)setSlide:(id)slide;	// 0x35568a85
// declared property setter: - (void)setSlideIsReadonly:(BOOL)readonly;	// 0x35568289
// declared property setter: - (void)setStillTime:(float)time;	// 0x3556c52d
// declared property setter: - (void)setTime:(double)time;	// 0x35568efd
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x35568101
// declared property getter: - (double)showDuration;	// 0x3556c5bd
// declared property getter: - (double)showTime;	// 0x3556c591
// declared property getter: - (id)showTimeScript;	// 0x3556c55d
// declared property getter: - (CGSize)sizeFactor;	// 0x3556c605
// declared property getter: - (id)slide;	// 0x3556c635
// declared property getter: - (double)slideDuration;	// 0x3556c68d
// declared property getter: - (BOOL)slideIsReadonly;	// 0x35568271
// declared property getter: - (double)slideStartTime;	// 0x3556c675
// declared property getter: - (float)stillTime;	// 0x3556c51d
// declared property getter: - (double)time;	// 0x35568ee9
- (CGSize)unframedImageSizeForAspectRatio:(float)aspectRatio frameID:(id)anId andFrameAttributes:(id)attributes atIndex:(unsigned long)index framedImageSize:(CGSize *)size;	// 0x35568545
- (void)unload;	// 0x35569dd5
- (void)updateShowTimeAndDurationWithPlug:(id)plug andAttributes:(id)attributes;	// 0x355687a1
- (BOOL)updateStuffWithAssetManager:(id)assetManager;	// 0x3556a709
// declared property getter: - (BOOL)useMipmapping;	// 0x355680ed
@end
