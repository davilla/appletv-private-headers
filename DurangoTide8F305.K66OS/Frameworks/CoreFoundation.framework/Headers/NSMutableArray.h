/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSArray.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableArray : NSArray {
}
+ (id)arrayWithCapacity:(unsigned)capacity;	// 0x32e27be5
- (id)initWithCapacity:(unsigned)capacity;	// 0x32ea493d
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x32ea41e5
- (void)addObject:(id)object;	// 0x32ea4f29
- (void)addObjectsFromArray:(id)array;	// 0x32e1e75d
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x32e5c189
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32ea499d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32ea6761
- (void)removeAllObjects;	// 0x32e219b9
- (void)removeLastObject;	// 0x32ea4ed9
- (void)removeObject:(id)object;	// 0x32e3ffcd
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x32ea3371
- (void)removeObject:(id)object range:(NSRange)range identical:(BOOL)identical;	// 0x32e40015
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32ea495d
- (void)removeObjectIdenticalTo:(id)to;	// 0x32e5d1a1
- (void)removeObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x32ea333d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32e57dcd
- (void)removeObjectsInArray:(id)array;	// 0x32e4d05d
- (void)removeObjectsInRange:(NSRange)range;	// 0x32e58379
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32ea497d
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x32ea6a3d
- (void)replaceObjectsInRange:(NSRange)range withObjects:(id *)objects count:(unsigned)count;	// 0x32e187d9
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x32e533f5
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x32ea754d
- (void)setArray:(id)array;	// 0x32ea6719
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x32e57159
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x32e1e8bd
- (void)sortUsingComparator:(id)comparator;	// 0x32e58a5d
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x32e46cc1
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context range:(NSRange)range;	// 0x32ea4311
- (void)sortUsingSelector:(SEL)selector;	// 0x32e1e815
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32e1e871
@end

