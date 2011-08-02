/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOMapRegion : PBCodable {
@private
	double _centerLng;	// 4 = 0x4
	BOOL _hasCenterLng;	// 12 = 0xc
	double _centerLat;	// 16 = 0x10
	BOOL _hasCenterLat;	// 24 = 0x18
	double _spanLng;	// 28 = 0x1c
	BOOL _hasSpanLng;	// 36 = 0x24
	double _spanLat;	// 40 = 0x28
	BOOL _hasSpanLat;	// 48 = 0x30
}
@property(assign, nonatomic) double centerLat;	// G=0x30d6903d; S=0x30d68f81; @synthesize=_centerLat
@property(assign, nonatomic) double centerLng;	// G=0x30d6905d; S=0x30d68f5d; @synthesize=_centerLng
@property(readonly, assign, nonatomic) BOOL hasCenterLat;	// G=0x30d6902d; @synthesize=_hasCenterLat
@property(readonly, assign, nonatomic) BOOL hasCenterLng;	// G=0x30d6904d; @synthesize=_hasCenterLng
@property(readonly, assign, nonatomic) BOOL hasSpanLat;	// G=0x30d68fed; @synthesize=_hasSpanLat
@property(readonly, assign, nonatomic) BOOL hasSpanLng;	// G=0x30d6900d; @synthesize=_hasSpanLng
@property(assign, nonatomic) double spanLat;	// G=0x30d68ffd; S=0x30d68fc9; @synthesize=_spanLat
@property(assign, nonatomic) double spanLng;	// G=0x30d6901d; S=0x30d68fa5; @synthesize=_spanLng
- (id)init;	// 0x30d69099
// declared property getter: - (double)centerLat;	// 0x30d6903d
// declared property getter: - (double)centerLng;	// 0x30d6905d
- (void)dealloc;	// 0x30d6906d
- (id)description;	// 0x30d69229
- (id)dictionaryRepresentation;	// 0x30d690c5
// declared property getter: - (BOOL)hasCenterLat;	// 0x30d6902d
// declared property getter: - (BOOL)hasCenterLng;	// 0x30d6904d
// declared property getter: - (BOOL)hasSpanLat;	// 0x30d68fed
// declared property getter: - (BOOL)hasSpanLng;	// 0x30d6900d
- (BOOL)readFrom:(id)from;	// 0x30d69479
// declared property setter: - (void)setCenterLat:(double)lat;	// 0x30d68f81
// declared property setter: - (void)setCenterLng:(double)lng;	// 0x30d68f5d
// declared property setter: - (void)setSpanLat:(double)lat;	// 0x30d68fc9
// declared property setter: - (void)setSpanLng:(double)lng;	// 0x30d68fa5
// declared property getter: - (double)spanLat;	// 0x30d68ffd
// declared property getter: - (double)spanLng;	// 0x30d6901d
- (void)writeTo:(id)to;	// 0x30d69389
@end
