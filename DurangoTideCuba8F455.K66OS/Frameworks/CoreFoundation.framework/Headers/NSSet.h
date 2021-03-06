/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSObject.h"


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x342284f1
+ (id)set;	// 0x34232409
+ (id)setWithArray:(id)array;	// 0x3425f111
+ (id)setWithArray:(id)array copyItems:(BOOL)items;	// 0x342c5d8d
+ (id)setWithArray:(id)array range:(NSRange)range;	// 0x342c4829
+ (id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x342c4879
+ (id)setWithObject:(id)object;	// 0x342633b9
+ (id)setWithObjects:(id)objects;	// 0x34255241
+ (id)setWithObjects:(id *)objects count:(unsigned)count;	// 0x3426e54d
+ (id)setWithOrderedSet:(id)orderedSet;	// 0x342c5ef5
+ (id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x342c5e8d
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x342c4749
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x342c4799
+ (id)setWithSet:(id)set;	// 0x34269cb9
+ (id)setWithSet:(id)set copyItems:(BOOL)items;	// 0x342c4711
- (id)initWithArray:(id)array;	// 0x34267759
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x342c5d3d
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x342c48d5
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x3425f175
- (id)initWithCoder:(id)coder;	// 0x342c4651
- (id)initWithObject:(id)object;	// 0x342c4909
- (id)initWithObjects:(id)objects;	// 0x34261a21
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x342c4d99
- (id)initWithOrderedSet:(id)orderedSet;	// 0x342c5e45
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x342c5df5
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x342c47f5
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x342c6cd5
- (id)initWithSet:(id)set;	// 0x34263cc9
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x34263ce1
- (void)_applyValues:(/*function-pointer*/ void *)values context:(void *)context;	// 0x342c5309
- (unsigned long)_cfTypeID;	// 0x342c4e19
- (BOOL)_getValue:(id *)value forObj:(id)obj;	// 0x342c49b5
- (id)allObjects;	// 0x34239c55
- (id)anyObject;	// 0x34239c19
- (BOOL)containsObject:(id)object;	// 0x34232655
- (id)copyWithZone:(NSZone *)zone;	// 0x342c5cad
- (unsigned)count;	// 0x342c4df9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3426d591
- (unsigned)countForObject:(id)object;	// 0x34262d49
- (id)description;	// 0x342c4929
- (id)descriptionWithLocale:(id)locale;	// 0x342c4941
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x342c71bd
- (void)encodeWithCoder:(id)coder;	// 0x342c4655
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x342c4989
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x342c5f59
- (void)getObjects:(id *)objects;	// 0x342c53f9
- (unsigned)hash;	// 0x342c49a1
- (BOOL)intersectsOrderedSet:(id)set;	// 0x342c50c9
- (BOOL)intersectsSet:(id)set;	// 0x3426d4c1
- (BOOL)isEqual:(id)equal;	// 0x34263449
- (BOOL)isEqualToSet:(id)set;	// 0x34255619
- (BOOL)isNSSet__;	// 0x3426e025
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x342c5251
- (BOOL)isSubsetOfSet:(id)set;	// 0x342c5199
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x3426d981
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x342661f9
- (id)member:(id)member;	// 0x342c4dd9
- (id)members:(id)members notFoundMarker:(id)marker;	// 0x342c770d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x342c46dd
- (id)objectEnumerator;	// 0x342c4db9
- (id)objectsPassingTest:(id)test;	// 0x342c4971
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x342c57c1
- (id)setByAddingObject:(id)object;	// 0x3426f6b5
- (id)setByAddingObjects:(const id *)objects count:(unsigned)count;	// 0x342c694d
- (id)setByAddingObjectsFromArray:(id)array;	// 0x342c6631
- (id)setByAddingObjectsFromOrderedSet:(id)orderedSet;	// 0x342c6315
- (id)setByAddingObjectsFromSet:(id)set;	// 0x3426e249
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x342c4959
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x342c7be9
@end

