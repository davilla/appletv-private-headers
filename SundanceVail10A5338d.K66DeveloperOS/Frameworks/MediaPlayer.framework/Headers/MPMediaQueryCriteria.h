/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSSet, NSMutableSet, NSArray;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
	NSMutableSet *_filterPredicates;	// 4 = 0x4
	int _entityOrder;	// 8 = 0x8
	int _groupingType;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	NSSet *_itemPropertiesToFetch;	// 20 = 0x14
	NSSet *_collectionPropertiesToFetch;	// 24 = 0x18
	BOOL _useSections;	// 28 = 0x1c
}
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x341ee11d; S=0x341ee131; @synthesize=_collectionPropertiesToFetch
@property(assign, nonatomic) int entityOrder;	// G=0x341ee1bd; S=0x341ee1cd; @synthesize=_entityOrder
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x341ed6c9; 
@property(copy, nonatomic) NSSet *filterPredicates;	// G=0x341ee185; S=0x341edab1; @synthesize=_filterPredicates
@property(assign, nonatomic) int groupingType;	// G=0x341ee141; S=0x341ee151; @synthesize=_groupingType
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x341ee199; S=0x341ee1ad; @synthesize=_itemPropertiesToFetch
@property(copy, nonatomic) NSArray *orderingProperties;	// G=0x341ee161; S=0x341ee175; @synthesize=_orderingProperties
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x341edea1; 
- (id)init;	// 0x341ed075
- (id)ML3CollectionsQueryInLibrary:(id)library;	// 0x341d725d
- (id)ML3ItemsQueryInLibrary:(id)library;	// 0x341d6ca9
- (id)ML3ItemsQueryInLibrary:(id)library orderingProperties:(id)properties nameBlankProperty:(id)property;	// 0x341d6d05
- (id)ML3OrderingPropertiesForGroupingType:(int)groupingType;	// 0x341d6a69
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)mporderingProperties;	// 0x341d6795
- (void)addFilterPredicate:(id)predicate;	// 0x341ed9ed
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x341ee11d
- (id)copyWithZone:(NSZone *)zone;	// 0x341ed5dd
- (void)dealloc;	// 0x341ed0c5
- (id)description;	// 0x341ed151
// declared property getter: - (int)entityOrder;	// 0x341ee1bd
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x341ed6c9
// declared property getter: - (id)filterPredicates;	// 0x341ee185
// declared property getter: - (int)groupingType;	// 0x341ee141
- (unsigned)hash;	// 0x341ed361
- (BOOL)isEqual:(id)equal;	// 0x341ed225
// declared property getter: - (id)itemPropertiesToFetch;	// 0x341ee199
// declared property getter: - (id)orderingProperties;	// 0x341ee161
- (id)predicateForProperty:(id)property;	// 0x341edb61
- (void)removeFilterPredicate:(id)predicate;	// 0x341eda5d
- (void)removePredicatesForProperty:(id)property;	// 0x341edc85
- (id)sanitizedQueryCriteria;	// 0x341edfd1
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x341ee131
// declared property setter: - (void)setEntityOrder:(int)order;	// 0x341ee1cd
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x341edab1
// declared property setter: - (void)setGroupingType:(int)type;	// 0x341ee151
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x341ee1ad
// declared property setter: - (void)setOrderingProperties:(id)properties;	// 0x341ee175
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x341edea1
@end

