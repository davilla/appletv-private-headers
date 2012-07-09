/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
	int _cd_rc;	// 4 = 0x4
	NSArray *_underlyingArray;	// 8 = 0x8
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x365b1c85
+ (id)alloc;	// 0x365b1ef5
+ (id)allocWithZone:(NSZone *)zone;	// 0x365b1efd
- (id)initWithArray:(id)array;	// 0x365b1c89
- (BOOL)_isDeallocating;	// 0x365b1ec9
- (BOOL)_tryRetain;	// 0x365b1e79
- (id)allObjects;	// 0x365b2689
- (id)array;	// 0x365b236d
- (id)arrayFromObjectIDs;	// 0x365b2755
- (Class)classForArchiver;	// 0x365b24b1
- (Class)classForCoder;	// 0x365b2495
- (BOOL)containsObject:(id)object;	// 0x365b263d
- (id)copyWithZone:(NSZone *)zone;	// 0x365b1fc9
- (unsigned)count;	// 0x365b2051
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x365b210d
- (void)dealloc;	// 0x365b1f05
- (id)description;	// 0x365b1f35
- (id)descriptionWithLocale:(id)locale;	// 0x365b1f7d
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x365b2195
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x365b2151
- (void)getObjects:(id *)objects;	// 0x365b243d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x365b23f5
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x365b2715
- (unsigned)indexOfObject:(id)object;	// 0x365b20cd
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x365b221d
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x365b21d9
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x365b22a5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x365b2261
- (BOOL)isEqual:(id)equal;	// 0x365b25f9
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x365b24cd
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x365b26d5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x365b1ff9
- (id)newArrayFromObjectIDs;	// 0x365b2791
- (id)objectAtIndex:(unsigned)index;	// 0x365b208d
- (id)objectEnumerator;	// 0x365b23b9
- (oneway void)release;	// 0x365b1ded
- (id)retain;	// 0x365b1db5
- (unsigned)retainCount;	// 0x365b1e65
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x365b22e9
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x365b2329
- (void)willRead;	// 0x365b1fc5
@end
