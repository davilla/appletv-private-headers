/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableArray.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray {
@private
	NSMutableArray *_mutableArray;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x30677d11
+ (id)_proxyShare;	// 0x30677d21
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30677d51
- (void)_proxyNonGCFinalize;	// 0x30677dcd
- (void)addObject:(id)object;	// 0x30677eb5
- (unsigned)count;	// 0x30677e21
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30677e41
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30677fa1
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x30678079
- (id)objectAtIndex:(unsigned)index;	// 0x30677e75
- (id)objectsAtIndexes:(id)indexes;	// 0x30677e95
- (void)removeLastObject;	// 0x3067810d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x306781f5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x306782c9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30678355
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3067842d
@end

