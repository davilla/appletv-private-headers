/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MZEffectTiming.h"
#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableArray, MREffectCoverCascadeSlideStory;

@interface MREffectCoverCascade : MREffect <MZEffectTiming> {
	NSMutableArray *_slideStories;	// 112 = 0x70
	MREffectCoverCascadeSlideStory *_grid[7][4];	// 116 = 0x74
	NSRange _previousNewSlideRange;	// 228 = 0xe4
	unsigned _numberOfStoriesRemoved;	// 236 = 0xec
	unsigned char _previousScenarioType;	// 240 = 0xf0
	unsigned char _previousStartX;	// 241 = 0xf1
}
@property(readonly, assign) double mainDuration;	// @dynamic
@property(readonly, assign) double phaseInDuration;	// @dynamic
@property(readonly, assign) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x34ab0741
+ (BOOL)hasCustomTiming;	// 0x34ab073d
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x34ab3eb1
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x34ab3eb5
- (void)_applyTimingToSlideProviders;	// 0x34ab0ae5
- (double)_buildNumberOfSlideStories:(unsigned)slideStories withSlideRange:(NSRange)slideRange;	// 0x34ab17bd
- (void)_unload;	// 0x34ab3e85
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x34ab09f9
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x34ab094d
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x34ab09d1
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x34ab3ef9
- (double)lowestDisplayTime;	// 0x34ab09e5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34ab2315
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34ab23f9
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x34ab4051
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x34ab0dd5
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x34ab08d1
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x34ab0881
- (BOOL)supportsDynamicExpansion;	// 0x34ab3eb9
- (int)typicalSlideBatchSize;	// 0x34ab3ebd
@end

