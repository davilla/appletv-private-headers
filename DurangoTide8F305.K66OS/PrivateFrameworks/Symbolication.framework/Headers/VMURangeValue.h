/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUAddressRange.h"
#import "Symbolication-Structs.h"


@interface VMURangeValue : VMUAddressRange {
	int _value;	// 20 = 0x14
}
@property(readonly, assign) int value;	// G=0x311a6c21; converted property
+ (id)rangeValueWithRange:(VMURange)range value:(int)value;	// 0x311a6d69
- (id)initWithRange:(VMURange)range value:(int)value;	// 0x311a6c81
- (VMURange)addressRange;	// 0x311a6c01
- (int)compare:(id)compare;	// 0x311a6c31
- (id)description;	// 0x311a6ce9
// converted property getter: - (int)value;	// 0x311a6c21
@end

