/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface MREffectOrigami : MREffect {
	NSArray *mPatchworkAtBeginning;	// 112 = 0x70
	NSArray *mPatchworkAtEnd;	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 120 = 0x78
	NSMutableArray *mSpriteKeysWatcher;	// 124 = 0x7c
	NSMutableArray *mAnimationTimeBounds;	// 128 = 0x80
	double mDurationStretchFactor;	// 132 = 0x84
	float mDescriptionAspectRatio;	// 140 = 0x8c
	float mPixelUnit;	// 144 = 0x90
}
+ (void)initialize;	// 0x32f07c3d
- (id)init;	// 0x32f07d01
- (void)_cleanup;	// 0x32f07dc5
- (void)_setTargetSizeOfImageProviders;	// 0x32f07e69
- (void)_unload;	// 0x32f07e49
- (BOOL)changedBetweenTime:(double)time andTime:(double)time2 remainingStillDuration:(double)duration;	// 0x32f15421
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x32f0a435
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x32f0a565
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f14539
- (void)render1To3DownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0f999
- (void)render1To3LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f10da9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f09b1d
- (void)renderFallAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0ae65
- (void)renderFlipDiagonalAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f1351d
- (void)renderFlipDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0cc99
- (void)renderFlipLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0b531
- (void)renderFold4LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f1218d
- (void)renderFoldDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0f231
- (void)renderFoldLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0e589
- (void)renderStillAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f0b17d
- (void)renderUnfoldingFlowerAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f13a51
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x32f0a5ad
- (double)stillDurationFromTime:(double)time;	// 0x32f1526d
- (double)stretchTime:(double)time;	// 0x32f1511d
@end

