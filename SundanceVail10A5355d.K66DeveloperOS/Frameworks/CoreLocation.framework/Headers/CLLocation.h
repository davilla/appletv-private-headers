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
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x328e4fdd; 
@property(readonly, assign, nonatomic) XXStruct_hPLVOD clientLocation;	// G=0x328e5095; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x328e4f7d; 
@property(readonly, assign, nonatomic) double course;	// G=0x328e50e5; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x328e5005; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x328e5435; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D rawCoordinate;	// G=0x328e4fad; 
@property(readonly, assign, nonatomic) double rawCourse;	// G=0x328e510d; 
@property(readonly, assign, nonatomic) double speed;	// G=0x328e50bd; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x328e5055; 
@property(readonly, assign, nonatomic) int type;	// G=0x328e5135; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x328e502d; 
- (id)init;	// 0x328e44d9
- (id)initWithClientLocation:(XXStruct_hPLVOD)clientLocation;	// 0x328e46e9
- (id)initWithCoder:(id)coder;	// 0x328e4815
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x328e4691
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x328e4629
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x328e4511
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x328e4579
// declared property getter: - (double)altitude;	// 0x328e4fdd
// declared property getter: - (XXStruct_hPLVOD)clientLocation;	// 0x328e5095
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x328e4f7d
- (id)copyWithZone:(NSZone *)zone;	// 0x328e4d3d
// declared property getter: - (double)course;	// 0x328e50e5
- (void)dealloc;	// 0x328e4cf1
- (id)description;	// 0x328e4d91
- (double)distanceFromLocation:(id)location;	// 0x328e5165
- (void)encodeWithCoder:(id)coder;	// 0x328e4acd
- (double)getDistanceFrom:(id)from;	// 0x328e5155
// declared property getter: - (double)horizontalAccuracy;	// 0x328e5005
// declared property getter: - (id)iso6709Notation;	// 0x328e5435
- (id)propagateLocationToTime:(double)time;	// 0x328e52e5
// declared property getter: - (XXStruct_zYrK5D)rawCoordinate;	// 0x328e4fad
// declared property getter: - (double)rawCourse;	// 0x328e510d
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x328e546d
- (id)shortDescription;	// 0x328e4e61
- (id)snapToResolution:(double)resolution;	// 0x328e5195
// declared property getter: - (double)speed;	// 0x328e50bd
// declared property getter: - (id)timestamp;	// 0x328e5055
// declared property getter: - (int)type;	// 0x328e5135
// declared property getter: - (double)verticalAccuracy;	// 0x328e502d
@end

