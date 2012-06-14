/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x319ae7e9
+ (id)array;	// 0x319b2d65
+ (id)arrayWithArray:(id)array;	// 0x319c9d19
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x31a520a1
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x31a52055
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x31a52009
+ (id)arrayWithObject:(id)object;	// 0x319b0e4d
+ (id)arrayWithObjects:(id)objects;	// 0x319dbc9d
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x319ae7a9
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x31a525d9
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x31a52571
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x31a52525
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x31a524d9
+ (id)arrayWithSet:(id)set;	// 0x31a52905
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x31a528c5
- (id)initWithArray:(id)array;	// 0x319dc501
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x319b6059
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x31a51fe5
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x319b60a1
- (id)initWithCoder:(id)coder;	// 0x31a529b1
- (id)initWithObject:(id)object;	// 0x31a51fc5
- (id)initWithObjects:(id)objects;	// 0x319c4d05
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x31a51fa1
- (id)initWithOrderedSet:(id)orderedSet;	// 0x31a5249d
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x31a52455
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x31a52431
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x31a52109
- (id)initWithSet:(id)set;	// 0x31a528b1
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x31a52639
- (unsigned long)_cfTypeID;	// 0x319eb7f1
- (BOOL)_hasObjects;	// 0x319d844d
- (BOOL)_hasStrongReferences;	// 0x31a4fbb5
- (id)allObjects;	// 0x31a4fbb9
- (id)arrayByAddingObject:(id)object;	// 0x319edd15
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x319f6781
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x319ec9f5
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x319e54e1
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x31a529b9
- (id)componentsJoinedByString:(id)string;	// 0x319c9755
- (BOOL)containsObject:(id)object;	// 0x319bb275
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x31a4fd29
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x31a4ff51
- (BOOL)containsObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x31a4fe59
- (id)copyWithZone:(NSZone *)zone;	// 0x31a52945
- (unsigned)count;	// 0x31a4fb6d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319eeb29
- (unsigned)countForObject:(id)object;	// 0x31a50119
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x31a4ffe9
- (id)description;	// 0x31a51f8d
- (id)descriptionWithLocale:(id)locale;	// 0x319e61a5
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x319e61b9
- (void)encodeWithCoder:(id)coder;	// 0x31a529b5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x31a501e9
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x319dff25
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x319b5e95
- (id)firstObject;	// 0x31a507a9
- (id)firstObjectCommonWithArray:(id)array;	// 0x31a507e1
- (void)getObjects:(id *)objects;	// 0x319e43b9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x319eec81
- (unsigned)hash;	// 0x319ee83d
- (unsigned)indexOfObject:(id)object;	// 0x319bb371
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x31a5093d
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x31a50e99
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x31a51255
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x319dc2f9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x319f38dd
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x319edef1
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x319edf7d
- (id)indexesOfObject:(id)object;	// 0x31a50c15
- (id)indexesOfObject:(id)object inRange:(NSRange)range;	// 0x31a50a79
- (id)indexesOfObjectIdenticalTo:(id)to;	// 0x31a50e25
- (id)indexesOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x31a50ccd
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x31a516e1
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x319dca09
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x319dca95
- (BOOL)isEqual:(id)equal;	// 0x319e615d
- (BOOL)isEqualToArray:(id)array;	// 0x319dd749
- (BOOL)isNSArray__;	// 0x319d8449
- (id)lastObject;	// 0x319a6171
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x319bc3c9
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x319f7a19
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x319ca235
- (id)objectAtIndex:(unsigned)index;	// 0x31a4fb91
- (id)objectEnumerator;	// 0x319f7115
- (id)objectsAtIndexes:(id)indexes;	// 0x319dcb49
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x31a51c55
- (id)objectsPassingTest:(id)test;	// 0x31a51e79
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x31a51dd9
- (id)reverseObjectEnumerator;	// 0x319dfde1
- (id)reversedArray;	// 0x31a51f05
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x319ec5f1
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x319ed2ad
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x319ec481
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x319ed7dd
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x319ec541
- (id)subarrayWithRange:(NSRange)range;	// 0x319eaca1
@end
