/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;	// 0x36671899
- (void)addObject:(id)object;	// 0x36672321
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x36672439
- (void)addObjectsFromArray:(id)array;	// 0x36672605
- (id)allObjects;	// 0x366719c5
- (id)array;	// 0x36671d15
- (BOOL)containsObject:(id)object;	// 0x36671c01
- (id)copyWithZone:(NSZone *)zone;	// 0x36671935
- (unsigned)count;	// 0x36671fb9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36671fd9
- (void)dealloc;	// 0x36671809
- (id)description;	// 0x36671ef9
- (id)descriptionWithLocale:(id)locale;	// 0x36671f19
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x36671f39
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x36671d95
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x36671d55
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x36671d75
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x366726c1
- (id)firstObject;	// 0x36671b9d
- (void)getObjects:(id *)objects;	// 0x36671b39
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x36671ac5
- (unsigned)indexOfObject:(id)object;	// 0x36671b19
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x36671e75
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x36671df5
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x36671db5
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x36671dd5
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x36671e55
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x36671e15
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x36671e35
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x36671ff9
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x36672901
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x36672819
- (void)intersectOrderedSet:(id)set;	// 0x36673011
- (void)intersectSet:(id)set;	// 0x3667345d
- (BOOL)intersectsOrderedSet:(id)set;	// 0x36671c25
- (BOOL)intersectsSet:(id)set;	// 0x36671c49
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x36671bdd
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x36671c91
- (BOOL)isSubsetOfSet:(id)set;	// 0x36671c6d
- (id)lastObject;	// 0x36671bbd
- (void)minusOrderedSet:(id)set;	// 0x366731dd
- (void)minusSet:(id)set;	// 0x36673629
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x3667276d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3667197d
- (id)objectAtIndex:(unsigned)index;	// 0x36671af9
- (id)objectEnumerator;	// 0x36671cb5
- (id)objectsAtIndexes:(id)indexes;	// 0x36671b7d
- (void)removeAllObjects;	// 0x36672d31
- (void)removeObject:(id)object;	// 0x36672e21
- (void)removeObjectAtIndex:(unsigned)index;	// 0x36672149
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x36672c95
- (void)removeObjectsInArray:(id)array;	// 0x36672e4d
- (void)removeObjectsInRange:(NSRange)range;	// 0x36672bb5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x36672215
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x36672b85
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x366729cd
- (id)reverseObjectEnumerator;	// 0x36671cd5
- (id)reversedOrderedSet;	// 0x36671cf5
- (id)set;	// 0x36671d35
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x3667299d
- (void)setValue:(id)value forKey:(id)key;	// 0x36671f59
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x366738fd
- (void)sortUsingComparator:(id)comparator;	// 0x366738b1
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x366738d9
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x36671eb9
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x36671ed9
- (void)unionOrderedSet:(id)set;	// 0x366733a1
- (void)unionSet:(id)set;	// 0x366737f5
- (id)valueForKey:(id)key;	// 0x36671f79
- (id)valueForKeyPath:(id)keyPath;	// 0x36671f99
@end
