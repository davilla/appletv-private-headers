/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {
	NSMutableArray *mSlides;	// 4 = 0x4
	NSMutableSet *mPathsInCluster;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
	float mRating;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
}
@property(retain) NSMutableArray *items;	// G=0x3321c0f5; S=0x3321c10d; @synthesize=mSlides
@property(copy) NSString *name;	// G=0x3321c135; S=0x3321c14d; @synthesize=mName
@property(assign) float rating;	// G=0x3321c179; S=0x3321c189; @synthesize=mRating
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x3321c199; S=0x3321c1b1; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x3321b819
- (void)addSlide:(id)slide;	// 0x3321b999
- (id)allSlides;	// 0x3321ba49
- (id)allSlidesSortedChronologically;	// 0x3321ba81
- (BOOL)clusterContainsSlideAtPath:(id)path;	// 0x3321ba59
- (void)dealloc;	// 0x3321b8e9
- (id)description;	// 0x3321c061
- (void)detailedDescription;	// 0x3321bee9
// declared property getter: - (id)items;	// 0x3321c0f5
// declared property getter: - (id)name;	// 0x3321c135
// declared property getter: - (float)rating;	// 0x3321c179
- (void)removeAllSlides;	// 0x3321b9f5
- (void)resetAllUsageCounters;	// 0x3321bce1
// declared property setter: - (void)setItems:(id)items;	// 0x3321c10d
// declared property setter: - (void)setName:(id)name;	// 0x3321c14d
// declared property setter: - (void)setRating:(float)rating;	// 0x3321c189
- (void)setUsageCountForLayer:(id)layer to:(float)to;	// 0x3321babd
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x3321c1b1
- (int)slideCount;	// 0x3321ba29
- (id)usageCountDescription;	// 0x3321bd99
- (float)usageCountForLayer:(id)layer;	// 0x3321bbc5
// declared property getter: - (id)usageCounterPerLayer;	// 0x3321c199
@end
