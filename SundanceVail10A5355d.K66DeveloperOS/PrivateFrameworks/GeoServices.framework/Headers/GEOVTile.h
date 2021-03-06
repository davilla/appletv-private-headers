/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray, GEOVConnectivity;

__attribute__((visibility("hidden")))
@interface GEOVTile : PBCodable {
	NSMutableArray *_coastlines;	// 4 = 0x4
	GEOVConnectivity *_connectivity;	// 8 = 0x8
	NSMutableArray *_labelLanguages;	// 12 = 0xc
	NSData *_labels;	// 16 = 0x10
	NSMutableArray *_lines;	// 20 = 0x14
	int _minZ;	// 24 = 0x18
	NSMutableArray *_points;	// 28 = 0x1c
	NSMutableArray *_polygons;	// 32 = 0x20
	unsigned _sectionDeltaLengthBits;	// 36 = 0x24
	unsigned _vertexBits;	// 40 = 0x28
	NSData *_vertices;	// 44 = 0x2c
	int _zBits;	// 48 = 0x30
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 52 = 0x34
}
@property(retain, nonatomic) NSMutableArray *coastlines;	// G=0x3459c769; S=0x3459c779; @synthesize=_coastlines
@property(retain, nonatomic) GEOVConnectivity *connectivity;	// G=0x3459c729; S=0x3459c739; @synthesize=_connectivity
@property(readonly, assign, nonatomic) BOOL hasConnectivity;	// G=0x3459a3cd; 
@property(readonly, assign, nonatomic) BOOL hasLabels;	// G=0x3459a39d; 
@property(assign, nonatomic) BOOL hasMinZ;	// G=0x3459a429; S=0x3459a40d; 
@property(assign, nonatomic) BOOL hasSectionDeltaLengthBits;	// G=0x3459a725; S=0x3459a705; 
@property(assign, nonatomic) BOOL hasVertexBits;	// G=0x3459a6a1; S=0x3459a681; 
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x3459a3b5; 
@property(assign, nonatomic) BOOL hasZBits;	// G=0x3459a485; S=0x3459a465; 
@property(retain, nonatomic) NSMutableArray *labelLanguages;	// G=0x3459c789; S=0x3459c799; @synthesize=_labelLanguages
@property(retain, nonatomic) NSData *labels;	// G=0x3459c6e9; S=0x3459c6f9; @synthesize=_labels
@property(retain, nonatomic) NSMutableArray *lines;	// G=0x3459c689; S=0x3459c699; @synthesize=_lines
@property(assign, nonatomic) int minZ;	// G=0x3459c749; S=0x3459a3e5; @synthesize=_minZ
@property(retain, nonatomic) NSMutableArray *points;	// G=0x3459c6c9; S=0x3459c6d9; @synthesize=_points
@property(retain, nonatomic) NSMutableArray *polygons;	// G=0x3459c6a9; S=0x3459c6b9; @synthesize=_polygons
@property(assign, nonatomic) unsigned sectionDeltaLengthBits;	// G=0x3459a6b5; S=0x3459a6dd; @synthesize=_sectionDeltaLengthBits
@property(assign, nonatomic) unsigned vertexBits;	// G=0x3459a631; S=0x3459a659; @synthesize=_vertexBits
@property(retain, nonatomic) NSData *vertices;	// G=0x3459c709; S=0x3459c719; @synthesize=_vertices
@property(assign, nonatomic) int zBits;	// G=0x3459c759; S=0x3459a43d; @synthesize=_zBits
- (void)addCoastlines:(id)coastlines;	// 0x3459a4b9
- (void)addLabelLanguage:(id)language;	// 0x3459a585
- (void)addLine:(id)line;	// 0x3459a159
- (void)addPoint:(id)point;	// 0x3459a2f1
- (void)addPolygon:(id)polygon;	// 0x3459a225
- (void)clearCoastlines;	// 0x3459a499
- (void)clearLabelLanguages;	// 0x3459a565
- (void)clearLines;	// 0x3459a139
- (void)clearPoints;	// 0x3459a2d1
- (void)clearPolygons;	// 0x3459a205
// declared property getter: - (id)coastlines;	// 0x3459c769
- (id)coastlinesAtIndex:(unsigned)index;	// 0x3459a545
- (unsigned)coastlinesCount;	// 0x3459a525
// declared property getter: - (id)connectivity;	// 0x3459c729
- (void)copyTo:(id)to;	// 0x3459be39
- (void)dealloc;	// 0x3459a069
- (id)description;	// 0x3459a739
- (id)dictionaryRepresentation;	// 0x3459a7a9
// declared property getter: - (BOOL)hasConnectivity;	// 0x3459a3cd
// declared property getter: - (BOOL)hasLabels;	// 0x3459a39d
// declared property getter: - (BOOL)hasMinZ;	// 0x3459a429
// declared property getter: - (BOOL)hasSectionDeltaLengthBits;	// 0x3459a725
// declared property getter: - (BOOL)hasVertexBits;	// 0x3459a6a1
// declared property getter: - (BOOL)hasVertices;	// 0x3459a3b5
// declared property getter: - (BOOL)hasZBits;	// 0x3459a485
- (unsigned)hash;	// 0x3459c4d5
- (BOOL)isEqual:(id)equal;	// 0x3459c221
- (id)labelLanguageAtIndex:(unsigned)index;	// 0x3459a611
// declared property getter: - (id)labelLanguages;	// 0x3459c789
- (unsigned)labelLanguagesCount;	// 0x3459a5f1
// declared property getter: - (id)labels;	// 0x3459c6e9
- (id)lineAtIndex:(unsigned)index;	// 0x3459a1e5
// declared property getter: - (id)lines;	// 0x3459c689
- (unsigned)linesCount;	// 0x3459a1c5
// declared property getter: - (int)minZ;	// 0x3459c749
- (id)pointAtIndex:(unsigned)index;	// 0x3459a37d
// declared property getter: - (id)points;	// 0x3459c6c9
- (unsigned)pointsCount;	// 0x3459a35d
- (id)polygonAtIndex:(unsigned)index;	// 0x3459a2b1
// declared property getter: - (id)polygons;	// 0x3459c6a9
- (unsigned)polygonsCount;	// 0x3459a291
- (BOOL)readFrom:(id)from;	// 0x3459b72d
// declared property getter: - (unsigned)sectionDeltaLengthBits;	// 0x3459a6b5
// declared property setter: - (void)setCoastlines:(id)coastlines;	// 0x3459c779
// declared property setter: - (void)setConnectivity:(id)connectivity;	// 0x3459c739
// declared property setter: - (void)setHasMinZ:(BOOL)z;	// 0x3459a40d
// declared property setter: - (void)setHasSectionDeltaLengthBits:(BOOL)bits;	// 0x3459a705
// declared property setter: - (void)setHasVertexBits:(BOOL)bits;	// 0x3459a681
// declared property setter: - (void)setHasZBits:(BOOL)bits;	// 0x3459a465
// declared property setter: - (void)setLabelLanguages:(id)languages;	// 0x3459c799
// declared property setter: - (void)setLabels:(id)labels;	// 0x3459c6f9
// declared property setter: - (void)setLines:(id)lines;	// 0x3459c699
// declared property setter: - (void)setMinZ:(int)z;	// 0x3459a3e5
// declared property setter: - (void)setPoints:(id)points;	// 0x3459c6d9
// declared property setter: - (void)setPolygons:(id)polygons;	// 0x3459c6b9
// declared property setter: - (void)setSectionDeltaLengthBits:(unsigned)bits;	// 0x3459a6dd
// declared property setter: - (void)setVertexBits:(unsigned)bits;	// 0x3459a659
// declared property setter: - (void)setVertices:(id)vertices;	// 0x3459c719
// declared property setter: - (void)setZBits:(int)bits;	// 0x3459a43d
// declared property getter: - (unsigned)vertexBits;	// 0x3459a631
// declared property getter: - (id)vertices;	// 0x3459c709
- (void)writeTo:(id)to;	// 0x3459b739
// declared property getter: - (int)zBits;	// 0x3459c759
@end

