/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOMapRegion : PBCodable {
	double _eastLng;	// 4 = 0x4
	double _northLat;	// 12 = 0xc
	double _southLat;	// 20 = 0x14
	double _westLng;	// 28 = 0x1c
	NSMutableArray *_vertexs;	// 36 = 0x24
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) double centerLat;	// G=0x37a095d1; 
@property(readonly, assign, nonatomic) double centerLng;	// G=0x37a09621; 
@property(assign, nonatomic) double eastLng;	// G=0x379e1f81; S=0x379dae15; @synthesize=_eastLng
@property(assign, nonatomic) BOOL hasEastLng;	// G=0x37a14815; S=0x37a147f9; 
@property(assign, nonatomic) BOOL hasNorthLat;	// G=0x37a147e1; S=0x37a147c1; 
@property(assign, nonatomic) BOOL hasSouthLat;	// G=0x37a14771; S=0x37a14751; 
@property(assign, nonatomic) BOOL hasWestLng;	// G=0x37a147a9; S=0x37a14789; 
@property(assign, nonatomic) double northLat;	// G=0x379e1d21; S=0x379daddd; @synthesize=_northLat
@property(assign, nonatomic) double southLat;	// G=0x379e1f69; S=0x379dad6d; @synthesize=_southLat
@property(readonly, assign, nonatomic) double spanLat;	// G=0x37a09671; 
@property(readonly, assign, nonatomic) double spanLng;	// G=0x37a096bd; 
@property(retain, nonatomic) NSMutableArray *vertexs;	// G=0x37a151d1; S=0x379daea1; @synthesize=_vertexs
@property(assign, nonatomic) double westLng;	// G=0x379e1d39; S=0x379dada5; @synthesize=_westLng
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x379dacb9
- (id)initWithMapRect:(XXStruct_03F4WD)mapRect;	// 0x379f5a19
- (id)initWithSpannedRegion:(XXStruct_SnKRpD)spannedRegion;	// 0x37a094e9
- (void)addVertex:(id)vertex;	// 0x37a14849
// declared property getter: - (double)centerLat;	// 0x37a095d1
// declared property getter: - (double)centerLng;	// 0x37a09621
- (void)clearVertexs;	// 0x37a14829
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x37a09709
- (void)copyTo:(id)to;	// 0x37a14c75
- (void)dealloc;	// 0x379dae59
- (id)description;	// 0x37a148f5
- (id)dictionaryRepresentation;	// 0x37a14965
// declared property getter: - (double)eastLng;	// 0x379e1f81
// declared property getter: - (BOOL)hasEastLng;	// 0x37a14815
// declared property getter: - (BOOL)hasNorthLat;	// 0x37a147e1
// declared property getter: - (BOOL)hasSouthLat;	// 0x37a14771
// declared property getter: - (BOOL)hasWestLng;	// 0x37a147a9
- (unsigned)hash;	// 0x37a14f71
- (BOOL)isEqual:(id)equal;	// 0x37a14df5
// declared property getter: - (double)northLat;	// 0x379e1d21
- (BOOL)readFrom:(id)from;	// 0x37a14c69
// declared property setter: - (void)setEastLng:(double)lng;	// 0x379dae15
// declared property setter: - (void)setHasEastLng:(BOOL)lng;	// 0x37a147f9
// declared property setter: - (void)setHasNorthLat:(BOOL)lat;	// 0x37a147c1
// declared property setter: - (void)setHasSouthLat:(BOOL)lat;	// 0x37a14751
// declared property setter: - (void)setHasWestLng:(BOOL)lng;	// 0x37a14789
- (void)setMapRect:(XXStruct_03F4WD)rect;	// 0x379f5a89
// declared property setter: - (void)setNorthLat:(double)lat;	// 0x379daddd
// declared property setter: - (void)setSouthLat:(double)lat;	// 0x379dad6d
- (void)setSpannedRegion:(XXStruct_SnKRpD)region;	// 0x37a0955d
// declared property setter: - (void)setVertexs:(id)vertexs;	// 0x379daea1
// declared property setter: - (void)setWestLng:(double)lng;	// 0x379dada5
// declared property getter: - (double)southLat;	// 0x379e1f69
// declared property getter: - (double)spanLat;	// 0x37a09671
// declared property getter: - (double)spanLng;	// 0x37a096bd
- (id)vertexAtIndex:(unsigned)index;	// 0x37a148d5
// declared property getter: - (id)vertexs;	// 0x37a151d1
- (unsigned)vertexsCount;	// 0x37a148b5
// declared property getter: - (double)westLng;	// 0x379e1d39
- (void)writeTo:(id)to;	// 0x379fc6bd
@end
