/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {
	int _totalWeight;	// 4 = 0x4
	NSMutableArray *_weights;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSMutableArray *_constraints;	// 16 = 0x10
	NSMutableArray *_usageCount;	// 20 = 0x14
	NSMutableIndexSet *_ignoreIndices;	// 24 = 0x18
	BOOL _evenlyPickByID;	// 28 = 0x1c
}
- (id)init;	// 0x34996c51
- (void)addIndexToIgnore:(int)ignore;	// 0x3499802d
- (void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;	// 0x34996e1d
- (id)allConstraints;	// 0x3499805d
- (id)allItems;	// 0x3499804d
- (id)allUsageCounts;	// 0x3499806d
- (void)clearAllItems;	// 0x3499810d
- (id)constraintsForItem:(id)item;	// 0x3499807d
- (int)count;	// 0x349980ed
- (void)dealloc;	// 0x34996d55
- (int)getRandomIndex;	// 0x34997615
- (int)getRandomIndexInSubset:(id)subset;	// 0x34997471
- (int)getRandomIndexMeetingContraints:(id)contraints;	// 0x34996ed9
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 movies:(int)movies fitsInExtraWide:(int)extraWide;	// 0x3499709d
- (void)ignoreIndices:(id)indices;	// 0x34997fed
- (id)ignoredIndices;	// 0x34997fdd
- (id)imageCounts;	// 0x34997ee9
- (void)increaseUsageCountOfObjectAtIndex:(int)index;	// 0x34997b7d
- (id)indicesEqualingConstraints:(id)constraints;	// 0x34997c79
- (id)indicesMeetingConstraints:(id)constraints;	// 0x34997bf5
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;	// 0x349978f5
- (int)numberOfItemsWithImageCount:(int)imageCount;	// 0x34997e19
- (void)setEvenlyPickByID:(BOOL)anId;	// 0x34997e09
@end

