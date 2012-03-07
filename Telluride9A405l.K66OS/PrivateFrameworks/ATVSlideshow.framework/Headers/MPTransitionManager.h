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
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x33504341
+ (void)releaseSharedManager;	// 0x3350385d
+ (id)sharedManager;	// 0x33503815
- (id)initWithPaths:(id)paths;	// 0x33504e31
- (id)allCategoryIDs;	// 0x3350393d
- (id)allTransitionIDs;	// 0x3350391d
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x33503f79
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x33504d85
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x33504dd9
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x33503b19
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x3350439d
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x3350419d
- (void)dealloc;	// 0x33503889
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x33504275
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x33503e81
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x33503d01
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x335040fd
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x33503c8d
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x33503dd9
- (id)presetsForTransitionID:(id)transitionID;	// 0x335042f9
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x33504839
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x33504145
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x33504a41
- (id)transitionsForCategoryID:(id)categoryID;	// 0x33503b71
- (id)versionOfTransitionID:(id)transitionID;	// 0x33503ae1
@end
