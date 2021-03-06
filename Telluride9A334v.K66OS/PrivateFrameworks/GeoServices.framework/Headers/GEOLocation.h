/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable {
	GEOLatLng *_latLng;	// 4 = 0x4
	BOOL _hasType;	// 8 = 0x8
	int _type;	// 12 = 0xc
	BOOL _hasTimestamp;	// 16 = 0x10
	double _timestamp;	// 20 = 0x14
	BOOL _hasAltitude;	// 28 = 0x1c
	int _altitude;	// 32 = 0x20
	BOOL _hasHorizontalAccuracy;	// 36 = 0x24
	double _horizontalAccuracy;	// 40 = 0x28
	BOOL _hasVerticalAccuracy;	// 48 = 0x30
	double _verticalAccuracy;	// 52 = 0x34
	BOOL _hasSpeed;	// 60 = 0x3c
	double _speed;	// 64 = 0x40
	BOOL _hasHeading;	// 72 = 0x48
	double _heading;	// 76 = 0x4c
	BOOL _hasCourse;	// 84 = 0x54
	double _course;	// 88 = 0x58
}
@property(assign, nonatomic) int altitude;	// G=0x32c6d451; S=0x32c6c9e9; @synthesize=_altitude
@property(assign, nonatomic) double course;	// G=0x32c6d561; S=0x32c6cabd; @synthesize=_course
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x32c6d431; S=0x32c6d441; @synthesize=_hasAltitude
@property(assign, nonatomic) BOOL hasCourse;	// G=0x32c6d541; S=0x32c6d551; @synthesize=_hasCourse
@property(assign, nonatomic) BOOL hasHeading;	// G=0x32c6d509; S=0x32c6d519; @synthesize=_hasHeading
@property(assign, nonatomic) BOOL hasHorizontalAccuracy;	// G=0x32c6d461; S=0x32c6d471; @synthesize=_hasHorizontalAccuracy
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x32c6d4d1; S=0x32c6d4e1; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x32c6d3f9; S=0x32c6d409; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasType;	// G=0x32c6d3c9; S=0x32c6d3d9; @synthesize=_hasType
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x32c6d499; S=0x32c6d4a9; @synthesize=_hasVerticalAccuracy
@property(assign, nonatomic) double heading;	// G=0x32c6d529; S=0x32c6ca91; @synthesize=_heading
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x32c6d481; S=0x32c6ca0d; @synthesize=_horizontalAccuracy
@property(retain, nonatomic) GEOLatLng *latLng;	// G=0x32c6d395; S=0x32c6d3a5; @synthesize=_latLng
@property(assign, nonatomic) double speed;	// G=0x32c6d4f1; S=0x32c6ca65; @synthesize=_speed
@property(assign, nonatomic) double timestamp;	// G=0x32c6d419; S=0x32c6c9bd; @synthesize=_timestamp
@property(assign, nonatomic) int type;	// G=0x32c6d3e9; S=0x32c6c999; @synthesize=_type
@property(assign, nonatomic) double verticalAccuracy;	// G=0x32c6d4b9; S=0x32c6ca39; @synthesize=_verticalAccuracy
- (id)initWithGEOCoordinate:(XXStruct_zYrK5D)geocoordinate;	// 0x32c625cd
// declared property getter: - (int)altitude;	// 0x32c6d451
// declared property getter: - (double)course;	// 0x32c6d561
- (void)dealloc;	// 0x32c6c955
- (id)description;	// 0x32c6cae9
- (id)dictionaryRepresentation;	// 0x32c6cb59
// declared property getter: - (BOOL)hasAltitude;	// 0x32c6d431
// declared property getter: - (BOOL)hasCourse;	// 0x32c6d541
// declared property getter: - (BOOL)hasHeading;	// 0x32c6d509
// declared property getter: - (BOOL)hasHorizontalAccuracy;	// 0x32c6d461
// declared property getter: - (BOOL)hasSpeed;	// 0x32c6d4d1
// declared property getter: - (BOOL)hasTimestamp;	// 0x32c6d3f9
// declared property getter: - (BOOL)hasType;	// 0x32c6d3c9
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x32c6d499
// declared property getter: - (double)heading;	// 0x32c6d529
// declared property getter: - (double)horizontalAccuracy;	// 0x32c6d481
// declared property getter: - (id)latLng;	// 0x32c6d395
- (BOOL)readFrom:(id)from;	// 0x32c6ceb1
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x32c6c9e9
// declared property setter: - (void)setCourse:(double)course;	// 0x32c6cabd
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x32c6d441
// declared property setter: - (void)setHasCourse:(BOOL)course;	// 0x32c6d551
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x32c6d519
// declared property setter: - (void)setHasHorizontalAccuracy:(BOOL)accuracy;	// 0x32c6d471
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x32c6d4e1
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x32c6d409
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x32c6d3d9
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x32c6d4a9
// declared property setter: - (void)setHeading:(double)heading;	// 0x32c6ca91
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x32c6ca0d
// declared property setter: - (void)setLatLng:(id)lng;	// 0x32c6d3a5
// declared property setter: - (void)setSpeed:(double)speed;	// 0x32c6ca65
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x32c6c9bd
// declared property setter: - (void)setType:(int)type;	// 0x32c6c999
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x32c6ca39
// declared property getter: - (double)speed;	// 0x32c6d4f1
// declared property getter: - (double)timestamp;	// 0x32c6d419
// declared property getter: - (int)type;	// 0x32c6d3e9
// declared property getter: - (double)verticalAccuracy;	// 0x32c6d4b9
- (void)writeTo:(id)to;	// 0x32c6d131
@end

