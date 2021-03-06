/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, GEOMapRegion;

@interface GEOPlaceSearchResponse : PBCodable {
	int _localSearchProviderID;	// 4 = 0x4
	GEOMapRegion *_mapRegion;	// 8 = 0x8
	NSMutableArray *_placeResults;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
	int _status;	// 20 = 0x14
	int _statusCodeInfo;	// 24 = 0x18
	XXStruct_UvnNeB _has;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x32471e29; S=0x32471e0d; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x32471d01; 
@property(assign, nonatomic) BOOL hasStatusCodeInfo;	// G=0x32471e85; S=0x32471e65; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x32472dcd; S=0x32471de5; @synthesize=_localSearchProviderID
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x32472d8d; S=0x32472d9d; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x32472d6d; S=0x32472d7d; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x32472dad; S=0x32472dbd; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x32472d4d; S=0x32472d5d; @synthesize=_status
@property(assign, nonatomic) int statusCodeInfo;	// G=0x32472ddd; S=0x32471e3d; @synthesize=_statusCodeInfo
- (void)addPlaceResult:(id)result;	// 0x32471c55
- (void)addSearch:(id)search;	// 0x32471d39
- (void)clearPlaceResults;	// 0x32471c35
- (void)clearSearchs;	// 0x32471d19
- (void)copyTo:(id)to;	// 0x32472949
- (void)dealloc;	// 0x32471bc9
- (id)description;	// 0x32471e99
- (id)dictionaryRepresentation;	// 0x32471f09
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x32471e29
// declared property getter: - (BOOL)hasMapRegion;	// 0x32471d01
// declared property getter: - (BOOL)hasStatusCodeInfo;	// 0x32471e85
- (unsigned)hash;	// 0x32472c69
- (BOOL)isEqual:(id)equal;	// 0x32472b1d
// declared property getter: - (int)localSearchProviderID;	// 0x32472dcd
// declared property getter: - (id)mapRegion;	// 0x32472d8d
- (id)placeResultAtIndex:(unsigned)index;	// 0x32471ce1
// declared property getter: - (id)placeResults;	// 0x32472d6d
- (unsigned)placeResultsCount;	// 0x32471cc1
- (BOOL)readFrom:(id)from;	// 0x32472655
- (id)searchAtIndex:(unsigned)index;	// 0x32471dc5
// declared property getter: - (id)searchs;	// 0x32472dad
- (unsigned)searchsCount;	// 0x32471da5
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x32471e0d
// declared property setter: - (void)setHasStatusCodeInfo:(BOOL)info;	// 0x32471e65
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x32471de5
// declared property setter: - (void)setMapRegion:(id)region;	// 0x32472d9d
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x32472d7d
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x32472dbd
// declared property setter: - (void)setStatus:(int)status;	// 0x32472d5d
// declared property setter: - (void)setStatusCodeInfo:(int)info;	// 0x32471e3d
// declared property getter: - (int)status;	// 0x32472d4d
// declared property getter: - (int)statusCodeInfo;	// 0x32472ddd
- (void)writeTo:(id)to;	// 0x32472661
@end

