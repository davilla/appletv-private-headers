/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, MPMediaLibrary, MPMediaQuerySectionInfo, NSSet;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
@private
	MPMediaQueryInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x34e1e525; S=0x34e1e54d; @synthesize
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x34e1d5c5; S=0x34e1d60d; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x34e1d69d; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x34e1db51; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x34e1cf2d; 
@property(retain) id criteria;	// G=0x34e1e4c9; S=0x34e1e4dd; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x34e1d7cd; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x34e1cca5; S=0x34e1cced; 
@property(assign, nonatomic) int groupingType;	// G=0x34e1cf69; S=0x34e1cf8d; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x34e1d539; S=0x34e1d55d; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x34e1d675; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x34e1db29; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x34e1cef1; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x34e1ce9d; S=0x34e1cead; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x34e1d72d; S=0x34e1d6c5; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x34e1d7a1; S=0x34e1d775; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x34e1da89; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x34e1dab5; 
+ (id)ITunesUAudioQuery;	// 0x34e1c8c5
+ (id)activeGeniusPlaylist;	// 0x34e5d175
+ (id)albumsQuery;	// 0x34e1c521
+ (id)artistsQuery;	// 0x34e1c5f1
+ (id)audibleAudiobooksQuery;	// 0x34e1caa1
+ (id)audiobooksQuery;	// 0x34e1c9e9
+ (id)compilationsQuery;	// 0x34e1cb1d
+ (id)composersQuery;	// 0x34e1cbed
+ (id)geniusMixesQuery;	// 0x34e1d431
+ (id)genresQuery;	// 0x34e1cc49
+ (void)initialize;	// 0x34e1b9b9
+ (id)movieRentalsQuery;	// 0x34e1d2fd
+ (id)moviesQuery;	// 0x34e1d245
+ (id)musicVideosQuery;	// 0x34e1d0d5
+ (id)playlistsQuery;	// 0x34e1c799
+ (id)podcastsQuery;	// 0x34e1c7f5
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x34e1cfdd
+ (id)songsQuery;	// 0x34e1c6c1
+ (id)tvShowsQuery;	// 0x34e1d18d
+ (id)videoPodcastsQuery;	// 0x34e1d379
+ (id)videosQuery;	// 0x34e1d01d
- (id)init;	// 0x34e1ba09
- (id)initWithCoder:(id)coder;	// 0x34e1bf39
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x34e1ba1d
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x34e1bb9d
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x34e1bb29
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x34e1ba95
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x34e1e149
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x34e1dfb1
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x34e1e525
- (BOOL)_isFilteringDisabled;	// 0x34e1df65
// declared property getter: - (id)_orderingProperties;	// 0x34e1d72d
- (id)_sanitizedQuery;	// 0x34e1db79
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x34e1d6c5
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x34e1dbe9
- (void)addFilterPredicate:(id)predicate;	// 0x34e1cd55
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x34e1d5c5
// declared property getter: - (id)collectionSectionInfo;	// 0x34e1d69d
// declared property getter: - (id)collectionSections;	// 0x34e1db51
// declared property getter: - (id)collections;	// 0x34e1cf2d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e1c3b9
// converted property getter: - (id)criteria;	// 0x34e1e4c9
- (void)dealloc;	// 0x34e1bbe9
- (id)description;	// 0x34e1bc45
- (void)encodeWithCoder:(id)coder;	// 0x34e1c1cd
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x34e1d7cd
// declared property getter: - (id)filterPredicates;	// 0x34e1cca5
- (unsigned)groupingThreshold;	// 0x34e1dab1
// declared property getter: - (int)groupingType;	// 0x34e1cf69
- (unsigned)hash;	// 0x34e1bef5
- (BOOL)isEqual:(id)equal;	// 0x34e1be3d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x34e1d539
// declared property getter: - (id)itemSectionInfo;	// 0x34e1d675
// declared property getter: - (id)itemSections;	// 0x34e1db29
// declared property getter: - (id)items;	// 0x34e1cef1
// declared property getter: - (id)mediaLibrary;	// 0x34e1ce9d
- (id)predicateForProperty:(id)property;	// 0x34e5d315
- (void)removeFilterPredicate:(id)predicate;	// 0x34e1cdf1
- (void)removePredicatesForProperty:(id)property;	// 0x34e5d419
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x34e1d60d
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x34e1e4dd
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x34e5d529
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x34e1cced
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x34e5d585
// declared property setter: - (void)setGroupingType:(int)type;	// 0x34e1cf8d
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x34e1d55d
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x34e1cead
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x34e1d775
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x34e1e471
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x34e1e54d
// declared property getter: - (BOOL)sortItems;	// 0x34e1d7a1
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x34e1da89
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x34e1df41
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x34e1df1d
// declared property getter: - (BOOL)willGroupEntities;	// 0x34e1dab5
@end

