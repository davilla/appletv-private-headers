/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableArray, NSDictionary, MRImage, MRCAMLBezierData, NSMutableDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableArray *mLayouts;	// 120 = 0x78
	int mSlideStartIndex;	// 124 = 0x7c
	int mIterationStartIndex;	// 128 = 0x80
	int mLastSlideIndex;	// 132 = 0x84
	MRImage *mSavedImage;	// 136 = 0x88
	int mLastIteration;	// 140 = 0x8c
	MRCAMLBezierData *mCurves[2];	// 144 = 0x90
	MRCAMLBezierData *mBreakCurves[2];	// 152 = 0x98
	BOOL mNeedsToRecalculateIterations;	// 160 = 0xa0
	float mAspectRatio;	// 164 = 0xa4
	NSDictionary *mBreakInformation;	// 168 = 0xa8
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x365e6869
+ (BOOL)hasCustomTiming;	// 0x365e6861
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x365e6929
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x365e692d
- (id)initWithEffectID:(id)effectID;	// 0x365e649d
- (void)_applyTimingToSlideProviders;	// 0x365e6db9
- (float)_aspectRatioForLayout:(int)layout atIndex:(int)index inAspectRatio:(float)aspectRatio;	// 0x365e8ec9
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x365e7c91
- (double)_calculateMainDuration;	// 0x365e7881
- (void)_cleanup;	// 0x365e66ed
- (void)_drawSlideAtIndex:(int)index size:(CGSize)size position:(CGPoint)position atTime:(double)time iterationTime:(double)time5 iterationDuration:(double)duration inContext:(id)context withArguments:(id)arguments;	// 0x365e9fed
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation;	// 0x365e7d2d
- (int)_iterationForTime:(double)time;	// 0x365e92e1
- (BOOL)_layoutAtIndexHasBreak:(int)indexHasBreak;	// 0x365e928d
- (int)_layoutCount:(int)count;	// 0x365e6d95
- (int)_lowestDisplayIteration;	// 0x365e6ae5
- (void)_renderIteration:(id)iteration atTime:(double)time relativeTime:(double)time3 inContext:(id)context withArguments:(id)arguments;	// 0x365e979d
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo aspectRatio:(float)ratio;	// 0x365e7e69
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x365ea0c5
- (void)_unload;	// 0x365ea2f1
- (void)_updateSizeScripts;	// 0x365e71e1
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x365e6cd1
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x365e7b39
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x365e7c79
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x365ea15d
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x365e6971
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x365ea2a9
- (double)lowestDisplayTime;	// 0x365e7b21
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365e8f99
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365e9411
- (void)setAttributes:(id)attributes;	// 0x365e67c5
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x365e6bb9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x365e6d49
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x365e79a1
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x365e7769
- (BOOL)supportsDynamicExpansion;	// 0x365e6931
- (int)typicalSlideBatchSize;	// 0x365e6935
@end
