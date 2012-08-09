/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying> {
	id _name;	// 4 = 0x4
	id _object;	// 8 = 0x8
	id _userInfo;	// 12 = 0xc
	BOOL _fouSemantics;	// 16 = 0x10
	BOOL _dyingObject;	// 17 = 0x11
}
@property(readonly, retain) id name;	// G=0x355b1be5; converted property
@property(readonly, retain) id object;	// G=0x355b1bf5; converted property
@property(readonly, retain) id userInfo;	// G=0x355e5939; converted property
- (id)initWithName:(CFStringRef)name object:(const void *)object userInfo:(CFDictionaryRef)info foundation:(BOOL)foundation;	// 0x355b1b0d
- (id)copyWithZone:(NSZone *)zone;	// 0x3562bcdd
- (void)dealloc;	// 0x355b1ef9
- (void)finalize;	// 0x3562bced
- (unsigned)hash;	// 0x3562bba9
- (BOOL)isEqual:(id)equal;	// 0x3562bbd1
// converted property getter: - (id)name;	// 0x355b1be5
// converted property getter: - (id)object;	// 0x355b1bf5
// converted property getter: - (id)userInfo;	// 0x355e5939
@end
