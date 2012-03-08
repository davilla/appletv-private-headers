/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMAccelerometerData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB acceleration;	// G=0x34c38da5; 
- (id)initWithAcceleration:(XXStruct_ZUkpeA)acceleration andTimestamp:(double)timestamp;	// 0x34c38a11
- (id)initWithCoder:(id)coder;	// 0x34c38a99
// declared property getter: - (XXStruct_taVrlB)acceleration;	// 0x34c38da5
- (id)copyWithZone:(NSZone *)zone;	// 0x34c38c95
- (void)dealloc;	// 0x34c38c49
- (id)description;	// 0x34c38cf9
- (void)encodeWithCoder:(id)coder;	// 0x34c38b89
@end
