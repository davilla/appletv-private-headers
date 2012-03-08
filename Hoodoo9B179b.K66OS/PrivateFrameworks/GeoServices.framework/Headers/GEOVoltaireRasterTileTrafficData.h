/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	double _expirationTime;	// 12 = 0xc
}
@property(assign, nonatomic) double expirationTime;	// G=0x32d00439; S=0x32d00451; @synthesize=_expirationTime
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x32d00405; S=0x32d00415; @synthesize=_trafficSegments
@property(assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x32d003e5; S=0x32d003f5; @synthesize=_vertices
+ (id)createWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x32d00039
+ (double)expirationTimeInterval;	// 0x32d00085
- (id)initWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x32d00099
- (void)dealloc;	// 0x32d0038d
// declared property getter: - (double)expirationTime;	// 0x32d00439
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x32d00451
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x32d00415
// declared property setter: - (void)setVertices:(XXStruct_K5nmsA *)vertices;	// 0x32d003f5
// declared property getter: - (id)trafficSegments;	// 0x32d00405
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x32d003e5
@end
