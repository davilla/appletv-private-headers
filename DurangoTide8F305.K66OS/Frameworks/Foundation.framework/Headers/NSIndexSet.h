/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;	// 4 = 0x4
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void *_data;
			void *_reserved;
		} _multipleRanges;
	} _internal;	// 8 = 0x8
}
+ (id)indexSet;	// 0x32757539
+ (id)indexSetWithIndex:(unsigned)index;	// 0x32758551
+ (id)indexSetWithIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x327984e1
+ (id)indexSetWithIndexesInRange:(NSRange)range;	// 0x32767721
- (id)init;	// 0x327575b9
- (id)initWithCoder:(id)coder;	// 0x327991c5
- (id)initWithIndex:(unsigned)index;	// 0x32758585
- (id)initWithIndexSet:(id)indexSet;	// 0x32758bd9
- (id)initWithIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x32798c25
- (id)initWithIndexesInRange:(NSRange)range;	// 0x327575d1
- (unsigned)__getContainmentVector:(out BOOL *)vector inRange:(NSRange)range;	// 0x32798d2d
- (unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;	// 0x32768309
- (unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;	// 0x3276861d
- (unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;	// 0x327578ad
- (unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;	// 0x32797959
- (id)_init;	// 0x32757685
- (id)_numberEnumerator;	// 0x32797ec5
- (void)_setContentToContentFromIndexSet:(id)indexSet;	// 0x32758c05
- (Class)classForCoder;	// 0x32797949
- (BOOL)containsIndex:(unsigned)index;	// 0x32758485
- (BOOL)containsIndexes:(id)indexes;	// 0x32798b29
- (BOOL)containsIndexesInRange:(NSRange)range;	// 0x32797fd1
- (id)copyWithZone:(NSZone *)zone;	// 0x32758b7d
- (unsigned)count;	// 0x327583fd
- (unsigned)countOfIndexesInRange:(NSRange)range;	// 0x32798049
- (void)dealloc;	// 0x32758819
- (id)description;	// 0x32797d5d
- (void)encodeWithCoder:(id)coder;	// 0x3279823d
- (void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x32799fe5
- (void)enumerateIndexesUsingBlock:(id)block;	// 0x32797d45
- (void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3279a069
- (unsigned)firstIndex;	// 0x3275843d
- (unsigned)getIndexes:(unsigned *)indexes maxCount:(unsigned)count inIndexRange:(NSRange *)indexRange;	// 0x3279a0d1
- (unsigned)hash;	// 0x327981d1
- (unsigned)indexGreaterThanIndex:(unsigned)index;	// 0x327682e9
- (unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;	// 0x32798161
- (unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x32799ed5
- (unsigned)indexLessThanIndex:(unsigned)index;	// 0x32777545
- (unsigned)indexLessThanOrEqualToIndex:(unsigned)index;	// 0x32798141
- (unsigned)indexPassingTest:(id)test;	// 0x32797d2d
- (unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;	// 0x32799f59
- (id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x32799cb1
- (id)indexesPassingTest:(id)test;	// 0x32797d15
- (id)indexesWithOptions:(unsigned)options passingTest:(id)test;	// 0x32799dcd
- (BOOL)intersectsIndexesInRange:(NSRange)range;	// 0x32797f05
- (BOOL)isEqual:(id)equal;	// 0x32798181
- (BOOL)isEqualToIndexSet:(id)indexSet;	// 0x32798739
- (unsigned)lastIndex;	// 0x32758e05
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32775709
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x32775739
- (unsigned)rangeCount;	// 0x32758e5d
@end

