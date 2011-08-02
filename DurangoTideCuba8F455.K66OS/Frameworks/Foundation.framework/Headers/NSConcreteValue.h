/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSValue.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x310144b9
- (const void *)_value;	// 0x3101b0b1
- (id)copyWithZone:(NSZone *)zone;	// 0x3101aec1
- (id)description;	// 0x310888e9
- (void)encodeWithCoder:(id)coder;	// 0x310885a9
- (void)getValue:(void *)value;	// 0x310049b9
- (unsigned)hash;	// 0x31014a89
- (BOOL)isEqualToValue:(id)value;	// 0x3101af91
- (const char *)objCType;	// 0x3100497d
@end

