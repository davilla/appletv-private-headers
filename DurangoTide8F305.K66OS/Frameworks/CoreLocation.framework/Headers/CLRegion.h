/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D center;	// G=0x31a58215; 
@property(readonly, assign, nonatomic) XXStruct_PcbLhD clientRegion;	// G=0x31a5825d; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x31a591cd; 
@property(readonly, assign, nonatomic) double radius;	// G=0x31a58239; 
- (id)initCircularRegionWithCenter:(XXStruct_zYrK5D)center radius:(double)radius identifier:(id)identifier;	// 0x31a59a91
- (id)initWithClientRegion:(XXStruct_PcbLhD)clientRegion;	// 0x31a5864d
- (id)initWithCoder:(id)coder;	// 0x31a593c9
// declared property getter: - (XXStruct_zYrK5D)center;	// 0x31a58215
// declared property getter: - (XXStruct_PcbLhD)clientRegion;	// 0x31a5825d
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x31a59111
- (id)copyWithZone:(NSZone *)zone;	// 0x31a5920d
- (void)dealloc;	// 0x31a59a45
- (id)description;	// 0x31a59169
- (void)encodeWithCoder:(id)coder;	// 0x31a59255
// declared property getter: - (id)identifier;	// 0x31a591cd
// declared property getter: - (double)radius;	// 0x31a58239
@end

