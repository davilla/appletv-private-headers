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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31081d01
+ (id)_proxyShare;	// 0x31081d11
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31081d41
- (void)_proxyNonGCFinalize;	// 0x31081dbd
- (void)addObject:(id)object;	// 0x31081ea5
- (unsigned)count;	// 0x31081e11
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31081e31
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31081f91
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31082069
- (id)objectAtIndex:(unsigned)index;	// 0x31081e65
- (id)objectsAtIndexes:(id)indexes;	// 0x31081e85
- (void)removeLastObject;	// 0x310820fd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x310821e5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x310822b9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31082345
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3108241d
@end

