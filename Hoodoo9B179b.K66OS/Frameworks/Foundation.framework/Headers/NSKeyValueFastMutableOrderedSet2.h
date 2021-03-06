/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31107751
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x3110781d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31107761
- (void)_proxyNonGCFinalize;	// 0x311077c9
- (unsigned)count;	// 0x311078b9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x311078e5
- (unsigned)indexOfObject:(id)object;	// 0x3110791d
- (id)objectAtIndex:(unsigned)index;	// 0x3110794d
- (id)objectsAtIndexes:(id)indexes;	// 0x3110797d
@end

