/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class NSMutableArray, MRImageProvider, NSString, NSMutableDictionary;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {
	MRImageProvider *mRopeImageProvider;	// 116 = 0x74
	MRImageProvider *mPhotoFrameImageProviders[3];	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 132 = 0x84
	NSMutableDictionary *mMatrices;	// 136 = 0x88
	NSString *mCurrentMainSlideKey;	// 140 = 0x8c
	NSMutableArray *mSmallSlideProviders;	// 144 = 0x90
	double mSlideTimings[20][3];	// 148 = 0x94
	BOOL mScenario[9];	// 628 = 0x274
	unsigned char mNumberOfRopes;	// 637 = 0x27d
	unsigned short mFrameIndices;	// 638 = 0x27e
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x33404611
+ (BOOL)hasCustomTiming;	// 0x3340460d
+ (void)initialize;	// 0x33404171
- (id)initWithEffectID:(id)effectID;	// 0x33404249
- (void)_applyTimingToSlideProviders;	// 0x334048b1
- (void)_applyTimingToSmallSlideProviders;	// 0x334049d5
- (double)_buildScenarioWithNumberOfSlides:(unsigned)slides orientationInformation:(BOOL *)information;	// 0x33404e09
- (void)_cleanup;	// 0x3340452d
- (void)_unload;	// 0x33407d39
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x3340484d
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x33404881
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33407add
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33407c85
- (BOOL)isLoadedForTime:(double)time;	// 0x334053c1
- (double)lowestDisplayTime;	// 0x33404899
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334055b1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33406e81
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x33404b69
- (void)setPixelSize:(CGSize)size;	// 0x33404bc9
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x334047e9
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x334047b9
@end

