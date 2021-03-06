/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray, NSSet, NSMutableSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
@private
	NSMutableSet *_filterPredicates;	// 4 = 0x4
	int _entityOrder;	// 8 = 0x8
	int _groupingType;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	NSSet *_itemPropertiesToFetch;	// 20 = 0x14
	NSSet *_collectionPropertiesToFetch;	// 24 = 0x18
}
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x303dbb09; S=0x303dbb19; @synthesize=_collectionPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x303db19d; 
@property(copy, nonatomic) NSSet *filterPredicates;	// G=0x303dbb91; S=0x303db515; @synthesize=_filterPredicates
@property(assign, nonatomic) int groupingType;	// G=0x303dbb3d; S=0x303dbb4d; @synthesize=_groupingType
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x303dbba1; S=0x303dbbb1; @synthesize=_itemPropertiesToFetch
@property(copy, nonatomic) NSArray *orderingProperties;	// G=0x303dbb5d; S=0x303dbb6d; @synthesize=_orderingProperties
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x303db8a1; 
- (id)init;	// 0x303dab81
- (id)ML3CollectionsQueryInLibrary:(id)library;	// 0x303c7f21
- (id)ML3ItemsQueryInLibrary:(id)library;	// 0x303c7ad9
- (id)ML3ItemsQueryInLibrary:(id)library orderingProperties:(id)properties nameBlankProperty:(id)property;	// 0x303c7b35
- (id)ML3OrderingPropertiesForGroupingType:(int)groupingType;	// 0x303c782d
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)mporderingProperties;	// 0x303c7581
- (void)addFilterPredicate:(id)predicate;	// 0x303db455
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x303dbb09
- (id)copyWithZone:(NSZone *)zone;	// 0x303db0b9
- (void)dealloc;	// 0x303dabc1
- (id)description;	// 0x303dac49
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x303db19d
// declared property getter: - (id)filterPredicates;	// 0x303dbb91
// declared property getter: - (int)groupingType;	// 0x303dbb3d
- (unsigned)hash;	// 0x303dae45
- (BOOL)isEqual:(id)equal;	// 0x303dad1d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x303dbba1
// declared property getter: - (id)orderingProperties;	// 0x303dbb5d
- (id)predicateForProperty:(id)property;	// 0x303db5c9
- (void)removeFilterPredicate:(id)predicate;	// 0x303db4b9
- (void)removePredicatesForProperty:(id)property;	// 0x303db6c5
- (id)sanitizedQueryCriteria;	// 0x303db9ad
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x303dbb19
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x303db515
// declared property setter: - (void)setGroupingType:(int)type;	// 0x303dbb4d
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x303dbbb1
// declared property setter: - (void)setOrderingProperties:(id)properties;	// 0x303dbb6d
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x303db8a1
@end

