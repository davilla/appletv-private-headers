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

@class MRLayerEffect, NSDictionary, NSString, NSOperation, MRImage;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRLayerEffect *mEffectLayer;	// 8 = 0x8
	MRImage *mOutputImage;	// 12 = 0xc
	NSString *mEffectID;	// 16 = 0x10
	NSDictionary *mAttributes;	// 20 = 0x14
	NSDictionary *mFlattenedAttributes;	// 24 = 0x18
	unsigned mSeed;	// 28 = 0x1c
	NSRange mMultiImageSlideRange;	// 32 = 0x20
	BOOL mNeedsToUpdateSlides;	// 40 = 0x28
	BOOL mNeedsToUpdateTexts;	// 41 = 0x29
	BOOL mNeedsToUpdateAttributes;	// 42 = 0x2a
	NSOperation *mPreloadOperation;	// 44 = 0x2c
	CGSize mPixelSize;	// 48 = 0x30
	MRImage *mAccumulatedImage;	// 56 = 0x38
	BOOL mNeedsToUpdateAccumulatedImage;	// 60 = 0x3c
	double mDefaultPhaseInDuration;	// 64 = 0x40
	double mDefaultMainDuration;	// 72 = 0x48
	double mDefaultPhaseOutDuration;	// 80 = 0x50
	double mPhaseInDuration;	// 88 = 0x58
	double mMainDuration;	// 96 = 0x60
	double mPhaseOutDuration;	// 104 = 0x68
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x31aeb591; S=0x31aea99d; @synthesize=mAccumulatedImage
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x31aeb525; S=0x31aea7fd; @synthesize=mAttributes
@property(readonly, assign) NSString *effectID;	// G=0x31aeb515; @synthesize=mEffectID
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x31aeb181; 
@property(readonly, assign) BOOL isInfinite;	// G=0x31aeb1ed; 
@property(readonly, assign) BOOL isNative3D;	// G=0x31aeb0d5; 
@property(readonly, assign) BOOL isOpaque;	// G=0x31aeb141; 
@property(readonly, assign) double mainDuration;	// G=0x31aeb605; @synthesize=mMainDuration
@property(assign) NSRange multiImageSlideRange;	// G=0x31aeb5a1; S=0x31aeb5bd; @synthesize=mMultiImageSlideRange
@property(assign) BOOL needsToUpdateSlides;	// G=0x31aeb551; S=0x31aeb561; @synthesize=mNeedsToUpdateSlides
@property(assign) BOOL needsToUpdateTexts;	// G=0x31aeb571; S=0x31aeb581; @synthesize=mNeedsToUpdateTexts
@property(readonly, assign) double phaseInDuration;	// G=0x31aeb5d1; @synthesize=mPhaseInDuration
@property(readonly, assign) double phaseOutDuration;	// G=0x31aeb639; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) CGSize pixelSize;	// G=0x31aeb535; S=0x31aea799; @synthesize=mPixelSize
@property(readonly, assign) BOOL supportsDynamicExpansion;	// G=0x31aeb675; 
@property(readonly, assign) unsigned typicalSlideBatchSize;	// G=0x31aeb679; 
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x31aea791
+ (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x31aea795
+ (BOOL)hasCustomTiming;	// 0x31aea78d
+ (id)retainedEffectWithEffectID:(id)effectID forEffectLayer:(id)effectLayer;	// 0x31ae9ff5
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x31aeb66d
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x31aeb671
- (id)initWithEffectID:(id)effectID;	// 0x31aea049
- (void)_cleanup;	// 0x31aea765
- (double)_computePhaseTimeForTime:(double)time;	// 0x31aea53d
- (double)_computeTimeForPhaseTime:(double)phaseTime;	// 0x31aea651
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31aeb685
- (int)_maxLinesForTextElement:(id)textElement;	// 0x31aeb511
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x31aeb4f9
- (void)_unload;	// 0x31aeb689
// declared property getter: - (id)accumulatedImage;	// 0x31aeb591
// declared property getter: - (id)attributes;	// 0x31aeb525
- (void)cancelLoading;	// 0x31aeafed
- (void)cleanup;	// 0x31aea1f5
- (void)dealloc;	// 0x31aea175
// declared property getter: - (id)effectID;	// 0x31aeb515
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31aea9f5
- (void)finalize;	// 0x31aea1b5
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x31aeb67d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31aea9f9
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x31aeb181
// declared property getter: - (BOOL)isInfinite;	// 0x31aeb1ed
- (BOOL)isLoadedForTime:(double)time;	// 0x31aea9fd
// declared property getter: - (BOOL)isNative3D;	// 0x31aeb0d5
// declared property getter: - (BOOL)isOpaque;	// 0x31aeb141
- (BOOL)isRetainedByEffectLayer;	// 0x31aea4e1
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x31aeaa01
- (void)loadWithArguments:(id)arguments;	// 0x31aeacc5
// declared property getter: - (double)mainDuration;	// 0x31aeb605
// declared property getter: - (NSRange)multiImageSlideRange;	// 0x31aeb5a1
// declared property getter: - (BOOL)needsToUpdateSlides;	// 0x31aeb551
// declared property getter: - (BOOL)needsToUpdateTexts;	// 0x31aeb571
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31aeb391
// declared property getter: - (double)phaseInDuration;	// 0x31aeb5d1
// declared property getter: - (double)phaseOutDuration;	// 0x31aeb639
// declared property getter: - (CGSize)pixelSize;	// 0x31aeb535
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31aeb1f1
- (void)releaseByEffectLayer:(id)layer;	// 0x31aea425
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31aeb299
- (void)retainByEffectLayer:(id)layer;	// 0x31aea39d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31aeb2dd
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x31aea99d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31aea7fd
// declared property setter: - (void)setMultiImageSlideRange:(NSRange)range;	// 0x31aeb5bd
// declared property setter: - (void)setNeedsToUpdateSlides:(BOOL)updateSlides;	// 0x31aeb561
// declared property setter: - (void)setNeedsToUpdateTexts:(BOOL)updateTexts;	// 0x31aeb581
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x31aea4f9
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x31aea799
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x31aeb675
// declared property getter: - (unsigned)typicalSlideBatchSize;	// 0x31aeb679
- (void)unload;	// 0x31aeae81
@end

