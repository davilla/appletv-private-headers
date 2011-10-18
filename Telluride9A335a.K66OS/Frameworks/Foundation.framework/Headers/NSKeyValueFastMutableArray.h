/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray {
@private
	NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32080441
- (void)_proxyNonGCFinalize;	// 0x320804a9
- (void)addObject:(id)object;	// 0x320804fd
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32080531
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32080625
- (void)removeLastObject;	// 0x3208068d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x320806bd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32080769
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x320807c9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x320808f1
@end

