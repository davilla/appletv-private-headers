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


@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3349b779
+ (id)orderedSet;	// 0x334ac0c9
+ (id)orderedSetWithArray:(id)array;	// 0x3349c575
+ (id)orderedSetWithArray:(id)array copyItems:(BOOL)items;	// 0x335291a5
+ (id)orderedSetWithArray:(id)array range:(NSRange)range;	// 0x33529159
+ (id)orderedSetWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x3352910d
+ (id)orderedSetWithObject:(id)object;	// 0x33528bed
+ (id)orderedSetWithObjects:(id)objects;	// 0x33528e51
+ (id)orderedSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x33528bad
+ (id)orderedSetWithOrderedSet:(id)orderedSet;	// 0x33529369
+ (id)orderedSetWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33529301
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x335292b5
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x334ab955
+ (id)orderedSetWithSet:(id)set;	// 0x33529695
+ (id)orderedSetWithSet:(id)set copyItems:(BOOL)items;	// 0x33529655
- (id)initWithArray:(id)array;	// 0x335290d1
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x33529089
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x33529065
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x3349c5d5
- (id)initWithCoder:(id)coder;	// 0x335298e5
- (id)initWithObject:(id)object;	// 0x33528b8d
- (id)initWithObjects:(id)objects;	// 0x33528c2d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x33528b69
- (id)initWithOrderedSet:(id)orderedSet;	// 0x33529279
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33529231
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3352920d
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x334ab9a1
- (id)initWithSet:(id)set;	// 0x33529641
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x335293c9
- (id)allObjects;	// 0x33525d35
- (id)array;	// 0x3349c2ad
- (Class)classForCoder;	// 0x33529a65
- (BOOL)containsObject:(id)object;	// 0x334b0c31
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x33525ea5
- (id)copyWithZone:(NSZone *)zone;	// 0x335296d5
- (unsigned)count;	// 0x33525cc9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3349c155
- (unsigned)countForObject:(id)object;	// 0x334ac545
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x33525f91
- (id)description;	// 0x33528b55
- (id)descriptionWithLocale:(id)locale;	// 0x33528b41
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x3352880d
- (void)encodeWithCoder:(id)coder;	// 0x33529785
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x3352607d
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x3349d185
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3349d211
- (id)firstObject;	// 0x334b19a9
- (void)getObjects:(id *)objects;	// 0x334b1a29
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3352663d
- (unsigned)hash;	// 0x335267f5
- (unsigned)indexOfObject:(id)object;	// 0x33525ced
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x33526805
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x335268f9
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33526cb5
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x335271f5
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x33527141
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33527281
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x335278a9
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x335277f5
- (BOOL)intersectsOrderedSet:(id)set;	// 0x33527935
- (BOOL)intersectsSet:(id)set;	// 0x33527aa9
- (BOOL)isEqual:(id)equal;	// 0x3349d2f1
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x334ac395
- (BOOL)isNSOrderedSet__;	// 0x334ac391
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x33527c1d
- (BOOL)isSubsetOfSet:(id)set;	// 0x33527d75
- (id)lastObject;	// 0x33527ecd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3352972d
- (id)objectAtIndex:(unsigned)index;	// 0x33525d11
- (id)objectEnumerator;	// 0x334b0ea9
- (id)objectsAtIndexes:(id)indexes;	// 0x334b1595
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33527f05
- (id)objectsPassingTest:(id)test;	// 0x33528171
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x335280b1
- (id)reverseObjectEnumerator;	// 0x335281fd
- (id)reversedOrderedSet;	// 0x33528245
- (id)set;	// 0x334b0c55
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x3352828d
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x33528765
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x335286b5
@end

