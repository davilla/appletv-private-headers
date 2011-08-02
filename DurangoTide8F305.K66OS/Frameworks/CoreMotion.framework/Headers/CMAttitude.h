/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreMotion-Structs.h"


@interface CMAttitude : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double pitch;	// G=0x339c9109; 
@property(readonly, assign, nonatomic) XXStruct_mouQIC quaternion;	// G=0x339c8e85; 
@property(readonly, assign, nonatomic) double roll;	// G=0x339c912d; 
@property(readonly, assign, nonatomic) XXStruct_Wz$NiD rotationMatrix;	// G=0x339c904d; 
@property(readonly, assign, nonatomic) double yaw;	// G=0x339c90e5; 
- (id)initWithCoder:(id)coder;	// 0x339c93a1
- (id)initWithQuaternion:(XXStruct_mouQIC)quaternion;	// 0x339c8f45
- (id)copyWithZone:(NSZone *)zone;	// 0x339c91e9
- (void)dealloc;	// 0x339c9261
- (id)description;	// 0x339c9151
- (void)encodeWithCoder:(id)coder;	// 0x339c9301
- (void)multiplyByInverseOfAttitude:(id)attitude;	// 0x339c8fe5
// declared property getter: - (double)pitch;	// 0x339c9109
// declared property getter: - (XXStruct_mouQIC)quaternion;	// 0x339c8e85
// declared property getter: - (double)roll;	// 0x339c912d
// declared property getter: - (XXStruct_Wz$NiD)rotationMatrix;	// 0x339c904d
- (void)setQuaternion:(XXStruct_mouQIC)quaternion;	// 0x339c92ad
// declared property getter: - (double)yaw;	// 0x339c90e5
@end
