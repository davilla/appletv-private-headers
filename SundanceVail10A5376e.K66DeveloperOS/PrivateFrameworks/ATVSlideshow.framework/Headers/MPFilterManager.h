/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {
	NSMutableDictionary *mFilters;	// 4 = 0x4
	NSArray *mFilterCategories;	// 8 = 0x8
	NSMutableDictionary *mFilterPresets;	// 12 = 0xc
}
+ (void)loadFilterManagerWithPaths:(id)paths;	// 0x361f65cd
+ (void)releaseSharedManager;	// 0x361f57cd
+ (id)sharedManager;	// 0x361f56d9
- (id)initWithPaths:(id)paths;	// 0x361f6629
- (id)allFilterIDs;	// 0x361f5929
- (id)animationsForFilterID:(id)filterID andPresetID:(id)anId;	// 0x361f5a89
- (id)attributesForFilterID:(id)filterID andPresetID:(id)anId;	// 0x361f59dd
- (id)constraintsForFilterPresetsMatchingList:(id)filterPresetsMatchingList andCriteria:(id)criteria;	// 0x361f5b51
- (void)dealloc;	// 0x361f5899
- (id)filterCategoryIDs;	// 0x361f5985
- (id)filterIDsForCategoryID:(id)categoryID;	// 0x361f5981
- (id)filterPresetsMatchingCriteria:(id)criteria;	// 0x361f6229
- (id)presetIDsForFilterID:(id)filterID;	// 0x361f5995
- (id)randomFilter:(BOOL)filter;	// 0x361f6571
- (id)randomFilterPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x361f5ff5
- (id)versionOfFilterID:(id)filterID;	// 0x361f5949
@end

