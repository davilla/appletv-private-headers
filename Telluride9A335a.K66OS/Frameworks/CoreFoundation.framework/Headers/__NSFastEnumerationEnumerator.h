/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSEnumerator.h"


@interface __NSFastEnumerationEnumerator : NSEnumerator {
@private
	id<NSFastEnumeration> _obj;	// 4 = 0x4
	id _origObj;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	unsigned _mut;	// 16 = 0x10
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x334885ed
- (id)initWithObject:(id)object;	// 0x3348860d
- (void)dealloc;	// 0x33488ad9
- (id)nextObject;	// 0x33488911
@end

