/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31df0655
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31d26fcd
- (void)_proxyNonGCFinalize;	// 0x31df0665
- (unsigned)count;	// 0x31d27169
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31d28e75
- (unsigned)indexOfObject:(id)object;	// 0x31df06b9
- (id)objectAtIndex:(unsigned)index;	// 0x31d29549
- (id)objectsAtIndexes:(id)indexes;	// 0x31df06f1
@end

