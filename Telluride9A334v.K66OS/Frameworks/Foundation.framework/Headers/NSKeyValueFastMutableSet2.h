/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueFastMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x30678cc1
- (id)_nonNilSetValueWithSelector:(SEL)selector;	// 0x30678d8d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30678cd1
- (void)_proxyNonGCFinalize;	// 0x30678d39
- (unsigned)count;	// 0x30678e29
- (id)member:(id)member;	// 0x30678e55
- (id)objectEnumerator;	// 0x30678e85
@end

