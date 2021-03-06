/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOTileSetVersion : PBCodable {
	unsigned _identifier;	// 4 = 0x4
	NSMutableArray *_availableTiles;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *availableTiles;	// G=0x35f36431; S=0x35f36441; @synthesize=_availableTiles
@property(assign, nonatomic) unsigned identifier;	// G=0x35f36411; S=0x35f36421; @synthesize=_identifier
- (void)addAvailableTiles:(id)tiles;	// 0x35f35e71
// declared property getter: - (id)availableTiles;	// 0x35f36431
- (id)availableTilesAtIndex:(unsigned)index;	// 0x35f35ef5
- (unsigned)availableTilesCount;	// 0x35f35ed5
- (void)dealloc;	// 0x35f35e2d
- (id)description;	// 0x35f35f15
- (id)dictionaryRepresentation;	// 0x35f35f85
// declared property getter: - (unsigned)identifier;	// 0x35f36411
- (BOOL)readFrom:(id)from;	// 0x35f36139
// declared property setter: - (void)setAvailableTiles:(id)tiles;	// 0x35f36441
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x35f36421
- (void)writeTo:(id)to;	// 0x35f362d9
@end

