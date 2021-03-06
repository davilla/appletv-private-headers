/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x31940551; 
@property(readonly, assign, nonatomic) XXStruct_g7LRlB clientLocation;	// G=0x31940609; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x31940521; 
@property(readonly, assign, nonatomic) double course;	// G=0x31940659; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x31940579; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x31940935; 
@property(readonly, assign, nonatomic) double speed;	// G=0x31940631; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x319405c9; 
@property(readonly, assign, nonatomic) int type;	// G=0x31940681; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x319405a1; 
- (id)init;	// 0x3193fad5
- (id)initWithClientLocation:(XXStruct_g7LRlB)clientLocation;	// 0x3193fcd5
- (id)initWithCoder:(id)coder;	// 0x3193fdd9
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x3193fc7d
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x3193fc19
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x3193fb0d
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x3193fb75
// declared property getter: - (double)altitude;	// 0x31940551
// declared property getter: - (XXStruct_g7LRlB)clientLocation;	// 0x31940609
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x31940521
- (id)copyWithZone:(NSZone *)zone;	// 0x31940325
// declared property getter: - (double)course;	// 0x31940659
- (void)dealloc;	// 0x319402d9
- (id)description;	// 0x31940379
- (double)distanceFromLocation:(id)location;	// 0x319406b1
- (void)encodeWithCoder:(id)coder;	// 0x31940059
- (double)getDistanceFrom:(id)from;	// 0x319406a1
// declared property getter: - (double)horizontalAccuracy;	// 0x31940579
// declared property getter: - (id)iso6709Notation;	// 0x31940935
- (id)propagateLocationToTime:(double)time;	// 0x31940811
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x3194096d
- (id)shortDescription;	// 0x31940431
- (id)snapToResolution:(double)resolution;	// 0x319406ed
// declared property getter: - (double)speed;	// 0x31940631
// declared property getter: - (id)timestamp;	// 0x319405c9
// declared property getter: - (int)type;	// 0x31940681
// declared property getter: - (double)verticalAccuracy;	// 0x319405a1
@end

