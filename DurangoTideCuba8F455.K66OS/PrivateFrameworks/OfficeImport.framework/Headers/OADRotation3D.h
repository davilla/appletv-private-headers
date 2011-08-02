/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADRotation3D : NSObject <NSCopying> {
@private
	float mLatitude;	// 4 = 0x4
	float mLongitude;	// 8 = 0x8
	float mRevolution;	// 12 = 0xc
}
- (id)initWithLatitude:(float)latitude longitude:(float)longitude revolution:(float)revolution;	// 0x32c854d1
- (id)copyWithZone:(NSZone *)zone;	// 0x32cd0935
- (unsigned)hash;	// 0x32cd0801
- (BOOL)isEqual:(id)equal;	// 0x32cd0851
- (float)latitude;	// 0x32cd07d1
- (float)longitude;	// 0x32cd07e1
- (float)revolution;	// 0x32cd07f1
@end

