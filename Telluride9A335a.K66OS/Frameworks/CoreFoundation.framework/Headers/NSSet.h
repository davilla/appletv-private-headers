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


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3345ab01
+ (id)set;	// 0x3345de21
+ (id)setWithArray:(id)array;	// 0x33488265
+ (id)setWithArray:(id)array copyItems:(BOOL)items;	// 0x3350b261
+ (id)setWithArray:(id)array range:(NSRange)range;	// 0x3350b215
+ (id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33494431
+ (id)setWithObject:(id)object;	// 0x33495471
+ (id)setWithObjects:(id)objects;	// 0x3348ab85
+ (id)setWithObjects:(const id *)objects count:(unsigned)count;	// 0x3349d339
+ (id)setWithOrderedSet:(id)orderedSet;	// 0x3350b799
+ (id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x3350b731
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3350b6e5
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x3350b699
+ (id)setWithSet:(id)set;	// 0x3349fec1
+ (id)setWithSet:(id)set copyItems:(BOOL)items;	// 0x3350b7f9
- (id)initWithArray:(id)array;	// 0x33486939
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x3350b1cd
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x3350b1a9
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33486975
- (id)initWithCoder:(id)coder;	// 0x3350b8b9
- (id)initWithObject:(id)object;	// 0x3350b189
- (id)initWithObjects:(id)objects;	// 0x334935a5
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3350b165
- (id)initWithOrderedSet:(id)orderedSet;	// 0x3350b65d
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x3350b615
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3350b5f1
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x3350b2c9
- (id)initWithSet:(id)set;	// 0x334963f1
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x33496405
- (void)__applyValues:(/*function-pointer*/ void *)values context:(void *)context;	// 0x3350ac85
- (BOOL)__getValue:(id *)value forObj:(id)obj;	// 0x3350ad81
- (unsigned long)_cfTypeID;	// 0x33509e95
- (id)allObjects;	// 0x3345f43d
- (id)anyObject;	// 0x3345e059
- (BOOL)containsObject:(id)object;	// 0x3346dc25
- (id)copyWithZone:(NSZone *)zone;	// 0x3350b839
- (unsigned)count;	// 0x33509e29
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x334b0cc9
- (unsigned)countForObject:(id)object;	// 0x33486c9d
- (id)description;	// 0x3350b151
- (id)descriptionWithLocale:(id)locale;	// 0x3350b13d
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x3350ae0d
- (void)encodeWithCoder:(id)coder;	// 0x3350b8bd
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x33497761
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x334977ed
- (void)getObjects:(id *)objects;	// 0x3350a171
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x3345b0b1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3350adad
- (unsigned)hash;	// 0x3350a281
- (BOOL)intersectsOrderedSet:(id)set;	// 0x3350a291
- (BOOL)intersectsSet:(id)set;	// 0x334a79f1
- (BOOL)isEqual:(id)equal;	// 0x33495ca9
- (BOOL)isEqualToSet:(id)set;	// 0x3348ad99
- (BOOL)isNSSet__;	// 0x3345b0a9
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x3350a405
- (BOOL)isSubsetOfSet:(id)set;	// 0x334a018d
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x334a4555
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x3349787d
- (id)member:(id)member;	// 0x33509e4d
- (id)members:(id)members notFoundMarker:(id)marker;	// 0x3350a55d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3350b87d
- (id)objectEnumerator;	// 0x33509e71
- (id)objectsPassingTest:(id)test;	// 0x334a2125
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x334a21b1
- (id)setByAddingObject:(id)object;	// 0x334ab725
- (id)setByAddingObjectsFromArray:(id)array;	// 0x3350b8c1
- (id)setByAddingObjectsFromSet:(id)set;	// 0x3349f435
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x3350abf9
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3350a879
@end

