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
@property(readonly, assign) int value;	// G=0x3013ce85; converted property
+ (id)rangeValueWithRange:(VMURange)range value:(int)value;	// 0x3013cf61
- (id)initWithRange:(VMURange)range value:(int)value;	// 0x3013cef5
- (VMURange)addressRange;	// 0x3013ce5d
- (int)compare:(id)compare;	// 0x3013ce95
- (id)description;	// 0x3013cfb5
// converted property getter: - (int)value;	// 0x3013ce85
@end
