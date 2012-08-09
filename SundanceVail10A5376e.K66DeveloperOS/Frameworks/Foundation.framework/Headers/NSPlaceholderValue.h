/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber {
	NSZone *zoneForInstance;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x34ddd451
- (id)init;	// 0x34ddd449
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x34d61405
- (id)initWithCoder:(id)coder;	// 0x34d5f15d
- (BOOL)_isDeallocating;	// 0x34ddd439
- (BOOL)_tryRetain;	// 0x34ddd43d
- (id)autorelease;	// 0x34ddd425
- (void)dealloc;	// 0x34ddd441
- (void)finalize;	// 0x34ddd445
- (void)getValue:(void *)value;	// 0x34ddd4c1
- (const char *)objCType;	// 0x34ddd459
- (oneway void)release;	// 0x34ddd435
- (id)retain;	// 0x34ddd429
- (unsigned)retainCount;	// 0x34ddd42d
@end
