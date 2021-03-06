/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMTile : PBCodable {
@private
	int _tileXIndex;	// 4 = 0x4
	NSData *_tileData;	// 8 = 0x8
	int _tileYIndex;	// 12 = 0xc
	int _face;	// 16 = 0x10
	BOOL _hasFace;	// 20 = 0x14
}
@property(assign, nonatomic) int face;	// G=0x32b8b985; S=0x32b8b959; @synthesize=_face
@property(readonly, assign, nonatomic) BOOL hasFace;	// G=0x32b8b975; @synthesize=_hasFace
@property(retain, nonatomic) NSData *tileData;	// G=0x32b8b9b5; S=0x32b8be91; @synthesize=_tileData
@property(assign, nonatomic) int tileXIndex;	// G=0x32b8b9c5; S=0x32b8b9d5; @synthesize=_tileXIndex
@property(assign, nonatomic) int tileYIndex;	// G=0x32b8b995; S=0x32b8b9a5; @synthesize=_tileYIndex
+ (void *)createImageRefFromTileData:(id)tileData isCompact:(BOOL)compact;	// 0x32b852a1
+ (void *)createImageRefFromTileData:(const char *)tileData length:(unsigned long)length;	// 0x32b8528d
- (id)init;	// 0x32b8b9e5
- (void)dealloc;	// 0x32b8be49
- (id)description;	// 0x32b8bafd
- (id)dictionaryRepresentation;	// 0x32b8ba11
// declared property getter: - (int)face;	// 0x32b8b985
// declared property getter: - (BOOL)hasFace;	// 0x32b8b975
- (BOOL)readFrom:(id)from;	// 0x32b8bcf5
// declared property setter: - (void)setFace:(int)face;	// 0x32b8b959
// declared property setter: - (void)setTileData:(id)data;	// 0x32b8be91
// declared property setter: - (void)setTileXIndex:(int)index;	// 0x32b8b9d5
// declared property setter: - (void)setTileYIndex:(int)index;	// 0x32b8b9a5
// declared property getter: - (id)tileData;	// 0x32b8b9b5
// declared property getter: - (int)tileXIndex;	// 0x32b8b9c5
// declared property getter: - (int)tileYIndex;	// 0x32b8b995
- (void)writeTo:(id)to;	// 0x32b8bc45
@end

