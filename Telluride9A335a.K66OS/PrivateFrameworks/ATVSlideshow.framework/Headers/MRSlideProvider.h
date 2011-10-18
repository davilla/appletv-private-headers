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

@class MCSlide, MRLayerEffect, NSLock, NSDictionary, MRFrame, NSString, MRImage, NSInvocationOperation, MRLayer;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable> {
	CGSize mDefaultSize;	// 4 = 0x4
	float mStillTime;	// 12 = 0xc
	NSString *mImageSizeScript;	// 16 = 0x10
	NSDictionary *mEffectAttributes;	// 20 = 0x14
	NSString *mShowTimeScript;	// 24 = 0x18
	NSInvocationOperation *mPreloadOperation;	// 28 = 0x1c
	NSLock *mPreloadOperationLock;	// 32 = 0x20
	MRFrame *mFrame;	// 36 = 0x24
	MRImage *mOriginalImage;	// 40 = 0x28
	MRImage *mOutputImage;	// 44 = 0x2c
	CGSize mRequestedSize;	// 48 = 0x30
	double mShowTime;	// 56 = 0x38
	double mShowDuration;	// 64 = 0x40
	MRLayerEffect *mEffectLayer;	// 72 = 0x48
	MCSlide *mSlide;	// 76 = 0x4c
	int mKenBurnsType;	// 80 = 0x50
	NSString *mAssetPath;	// 84 = 0x54
	float mOriginalImageAspectRatio;	// 88 = 0x58
	MRLayer *mSlideLayer;	// 92 = 0x5c
	CGSize mImageSize;	// 96 = 0x60
	CGSize mLastImageSize;	// 104 = 0x68
	double mLastTime;	// 112 = 0x70
	CGSize mLastDaSize;	// 120 = 0x78
	CGSize mSizeFactor;	// 128 = 0x80
	MCSlide *mSlideCopy;	// 136 = 0x88
	unsigned mSlideIndex;	// 140 = 0x8c
	unsigned mFlags;	// 144 = 0x90
}
@property(assign, nonatomic) CGSize defaultSize;	// G=0x31b74735; S=0x31b70aa1; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x31b74781; S=0x31b70c1d; @synthesize=mEffectAttributes
@property(readonly, assign) MRFrame *frame;	// G=0x31b74911; @synthesize=mFrame
@property(readonly, assign) float imageAspectRatio;	// G=0x31b70a91; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x31b74771; S=0x31b70bad; @synthesize=mImageSizeScript
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x31b7275d; 
@property(readonly, assign) BOOL isInfinite;	// G=0x31b72761; 
@property(readonly, assign) BOOL isLoaded;	// G=0x31b70ce5; 
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x31b70af5; S=0x31b70b09; 
@property(readonly, assign) BOOL isNative3D;	// G=0x31b7268d; 
@property(readonly, assign) BOOL isOpaque;	// G=0x31b72691; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x31b70cd1; S=0x31b71819; 
@property(assign) BOOL isStill;	// G=0x31b70c75; S=0x31b70c89; 
@property(assign) int kenBurnsType;	// G=0x31b748f1; S=0x31b74901; @synthesize=mKenBurnsType
@property(readonly, assign) CGSize requestedSize;	// G=0x31b74895; @synthesize=mRequestedSize
@property(assign) double showDuration;	// G=0x31b7482d; S=0x31b74861; @synthesize=mShowDuration
@property(assign) double showTime;	// G=0x31b747c5; S=0x31b747f9; @synthesize=mShowTime
@property(copy, nonatomic) NSString *showTimeScript;	// G=0x31b74791; S=0x31b747a1; @synthesize=mShowTimeScript
@property(assign) CGSize sizeFactor;	// G=0x31b748b1; S=0x31b748cd; @synthesize=mSizeFactor
@property(retain, nonatomic) MCSlide *slide;	// G=0x31b748e1; S=0x31b714bd; @synthesize=mSlide
@property(assign) float stillTime;	// G=0x31b74751; S=0x31b74761; @synthesize=mStillTime
@property(assign) double time;	// G=0x31b718f5; S=0x31b71909; 
@property(assign) BOOL useMipmapping;	// G=0x31b70b51; S=0x31b70b65; 
+ (void)applyKenBurnsForSlide:(id)slide inPlug:(id)plug forSize:(CGSize)size atTime:(double)time withTargetSize:(CGSize)targetSize kenBurnsType:(int)type translation:(CGPoint *)translation scale:(float *)scale rotation:(float *)rotation;	// 0x31b74921
- (id)initWithEffectLayer:(id)effectLayer;	// 0x31b7062d
- (void)_computeImageSizeInContext:(id)context withArguments:(id)arguments;	// 0x31b72765
- (BOOL)beginLiveUpdate;	// 0x31b719ed
- (void)cancelLoading;	// 0x31b72615
- (void)cleanup;	// 0x31b70775
- (void)dealloc;	// 0x31b706f5
// declared property getter: - (CGSize)defaultSize;	// 0x31b74735
// declared property getter: - (id)effectAttributes;	// 0x31b74781
- (BOOL)endLiveUpdate;	// 0x31b71a09
- (void)finalize;	// 0x31b70735
// declared property getter: - (id)frame;	// 0x31b74911
- (CGSize)framedImageSizeAtIndex:(unsigned long)index aspectRatio:(float)ratio;	// 0x31b70d39
// declared property getter: - (float)imageAspectRatio;	// 0x31b70a91
// declared property getter: - (id)imageSizeScript;	// 0x31b74771
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x31b7275d
// declared property getter: - (BOOL)isInfinite;	// 0x31b72761
// declared property getter: - (BOOL)isLoaded;	// 0x31b70ce5
- (BOOL)isLoadedForTime:(double)time;	// 0x31b71a25
// declared property getter: - (BOOL)isMonochromatic;	// 0x31b70af5
// declared property getter: - (BOOL)isNative3D;	// 0x31b7268d
// declared property getter: - (BOOL)isOpaque;	// 0x31b72691
// declared property getter: - (BOOL)isPlaying;	// 0x31b70cd1
// declared property getter: - (BOOL)isStill;	// 0x31b70c75
// declared property getter: - (int)kenBurnsType;	// 0x31b748f1
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x31b71a39
- (void)loadWithArguments:(id)arguments;	// 0x31b72081
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31b708f5
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b745f9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b730b5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b733d9
// declared property getter: - (CGSize)requestedSize;	// 0x31b74895
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b733ed
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x31b70aa1
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x31b70c1d
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x31b70bad
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x31b70b09
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x31b71819
// declared property setter: - (void)setIsStill:(BOOL)still;	// 0x31b70c89
// declared property setter: - (void)setKenBurnsType:(int)type;	// 0x31b74901
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x31b74861
// declared property setter: - (void)setShowTime:(double)time;	// 0x31b747f9
// declared property setter: - (void)setShowTimeScript:(id)script;	// 0x31b747a1
// declared property setter: - (void)setSizeFactor:(CGSize)factor;	// 0x31b748cd
// declared property setter: - (void)setSlide:(id)slide;	// 0x31b714bd
// declared property setter: - (void)setStillTime:(float)time;	// 0x31b74761
// declared property setter: - (void)setTime:(double)time;	// 0x31b71909
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x31b70b65
// declared property getter: - (double)showDuration;	// 0x31b7482d
// declared property getter: - (double)showTime;	// 0x31b747c5
// declared property getter: - (id)showTimeScript;	// 0x31b74791
// declared property getter: - (CGSize)sizeFactor;	// 0x31b748b1
// declared property getter: - (id)slide;	// 0x31b748e1
// declared property getter: - (float)stillTime;	// 0x31b74751
// declared property getter: - (double)time;	// 0x31b718f5
- (CGSize)unframedImageSizeForAspectRatio:(float)aspectRatio frameID:(id)anId andFrameAttributes:(id)attributes atIndex:(unsigned long)index framedImageSize:(CGSize *)size;	// 0x31b70f75
- (void)unload;	// 0x31b7238d
- (void)updateShowTimeAndDurationWithPlug:(id)plug andAttributes:(id)attributes;	// 0x31b711d5
- (BOOL)updateStuffWithAssetManager:(id)assetManager;	// 0x31b72c51
// declared property getter: - (BOOL)useMipmapping;	// 0x31b70b51
@end

