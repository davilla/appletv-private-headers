/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMIncomingTile : PBCodable {
@private
	int _zoom;	// 4 = 0x4
	NSMutableArray *_tiles;	// 8 = 0x8
	int _numHorizontalTiles;	// 12 = 0xc
	int _numVerticalTiles;	// 16 = 0x10
}
@property(assign, nonatomic) int numHorizontalTiles;	// G=0x30a7cf8d; S=0x30a7cf9d; @synthesize=_numHorizontalTiles
@property(assign, nonatomic) int numVerticalTiles;	// G=0x30a7cf6d; S=0x30a7cf7d; @synthesize=_numVerticalTiles
@property(retain, nonatomic) NSMutableArray *tiles;	// G=0x30a7cfad; S=0x30a7d699; @synthesize=_tiles
@property(readonly, assign, nonatomic) int tilesCount;	// G=0x30a7d62d; 
@property(assign, nonatomic) int zoom;	// G=0x30a7cfbd; S=0x30a7cfcd; @synthesize=_zoom
- (id)init;	// 0x30a7cfdd
- (void)addTile:(id)tile;	// 0x30a7d531
- (void)dealloc;	// 0x30a7d651
- (id)description;	// 0x30a7d0ed
- (id)dictionaryRepresentation;	// 0x30a7d009
// declared property getter: - (int)numHorizontalTiles;	// 0x30a7cf8d
// declared property getter: - (int)numVerticalTiles;	// 0x30a7cf6d
- (BOOL)readFrom:(id)from;	// 0x30a7d391
// declared property setter: - (void)setNumHorizontalTiles:(int)tiles;	// 0x30a7cf9d
// declared property setter: - (void)setNumVerticalTiles:(int)tiles;	// 0x30a7cf7d
- (void)setTile:(id)tile atIndex:(unsigned)index;	// 0x30a7d5c5
// declared property setter: - (void)setTiles:(id)tiles;	// 0x30a7d699
// declared property setter: - (void)setZoom:(int)zoom;	// 0x30a7cfcd
- (id)tileAtIndex:(unsigned)index;	// 0x30a7d561
// declared property getter: - (id)tiles;	// 0x30a7cfad
// declared property getter: - (int)tilesCount;	// 0x30a7d62d
- (void)writeTo:(id)to;	// 0x30a7d235
// declared property getter: - (int)zoom;	// 0x30a7cfbd
@end

