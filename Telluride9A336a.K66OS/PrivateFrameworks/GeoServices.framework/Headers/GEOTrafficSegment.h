/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOTrafficSegment : PBCodable {
	int _vertexOffset;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	BOOL _hasSpeed;	// 12 = 0xc
	int _speed;	// 16 = 0x10
	BOOL _hasWidth;	// 20 = 0x14
	int _width;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x3671c7a1; S=0x3671c7b1; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasWidth;	// G=0x3671c7c1; S=0x3671c7d1; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x3671c39d; S=0x3671c3c1; @synthesize=_speed
@property(assign, nonatomic) int vertexCount;	// G=0x3671c781; S=0x3671c791; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x3671c761; S=0x3671c771; @synthesize=_vertexOffset
@property(assign, nonatomic) int width;	// G=0x3671c7e1; S=0x3671c3e5; @synthesize=_width
- (void)dealloc;	// 0x3671c371
- (id)description;	// 0x3671c409
- (id)dictionaryRepresentation;	// 0x3671c479
// declared property getter: - (BOOL)hasSpeed;	// 0x3671c7a1
// declared property getter: - (BOOL)hasWidth;	// 0x3671c7c1
- (BOOL)readFrom:(id)from;	// 0x3671c5a1
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x3671c7b1
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x3671c7d1
// declared property setter: - (void)setSpeed:(int)speed;	// 0x3671c3c1
// declared property setter: - (void)setVertexCount:(int)count;	// 0x3671c791
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x3671c771
// declared property setter: - (void)setWidth:(int)width;	// 0x3671c3e5
// declared property getter: - (int)speed;	// 0x3671c39d
// declared property getter: - (int)vertexCount;	// 0x3671c781
// declared property getter: - (int)vertexOffset;	// 0x3671c761
// declared property getter: - (int)width;	// 0x3671c7e1
- (void)writeTo:(id)to;	// 0x3671c6c9
@end

