/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UINibStringIDTable : NSObject {
@private
	UIStringIDTableBucket **table;	// 4 = 0x4
	UIStringIDTableBucket *buckets;	// 8 = 0x8
	unsigned hashMask;	// 12 = 0xc
	unsigned count;	// 16 = 0x10
}
- (id)initWithKeysTransferingOwnership:(id *)keysTransferingOwnership count:(unsigned)count;	// 0x33c5fac5
- (int)count;	// 0x33c5fd6d
- (void)dealloc;	// 0x33c5fbed
- (BOOL)lookupKey:(id)key identifier:(int *)identifier;	// 0x33c5fc91
@end

