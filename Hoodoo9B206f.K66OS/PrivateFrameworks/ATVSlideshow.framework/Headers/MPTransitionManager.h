/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {
	NSMutableDictionary *mTransitions;	// 4 = 0x4
	NSMutableDictionary *mTransitionCategories;	// 8 = 0x8
	NSMutableDictionary *mTransitionPresets;	// 12 = 0xc
}
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x30a0b3bd
+ (void)releaseSharedManager;	// 0x30a0a8d9
+ (id)sharedManager;	// 0x30a0a891
- (id)initWithPaths:(id)paths;	// 0x30a0bead
- (id)allCategoryIDs;	// 0x30a0a9b9
- (id)allTransitionIDs;	// 0x30a0a999
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x30a0aff5
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x30a0be01
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x30a0be55
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x30a0ab95
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x30a0b419
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x30a0b219
- (void)dealloc;	// 0x30a0a905
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x30a0b2f1
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x30a0aefd
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x30a0ad7d
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x30a0b179
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x30a0ad09
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x30a0ae55
- (id)presetsForTransitionID:(id)transitionID;	// 0x30a0b375
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x30a0b8b5
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x30a0b1c1
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x30a0babd
- (id)transitionsForCategoryID:(id)categoryID;	// 0x30a0abed
- (id)versionOfTransitionID:(id)transitionID;	// 0x30a0ab5d
@end

