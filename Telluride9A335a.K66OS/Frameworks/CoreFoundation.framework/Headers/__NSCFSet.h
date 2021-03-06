/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3350dc7d
- (BOOL)_isDeallocating;	// 0x3350dc29
- (unsigned)_trueCount;	// 0x3350dc81
- (BOOL)_tryRetain;	// 0x3350dc15
- (void)addObject:(id)object;	// 0x3345dd6d
- (Class)classForCoder;	// 0x33497989
- (id)copyWithZone:(NSZone *)zone;	// 0x3348b061
- (unsigned)count;	// 0x3345b0ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3345b229
- (void)finalize;	// 0x3350dc39
- (void)getObjects:(id *)objects;	// 0x334979c9
- (unsigned)hash;	// 0x334ab6ad
- (BOOL)isEqual:(id)equal;	// 0x33495c5d
- (id)member:(id)member;	// 0x334730f1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3345e0ad
- (id)objectEnumerator;	// 0x334a23f5
- (oneway void)release;	// 0x3345b295
- (void)removeAllObjects;	// 0x3345da4d
- (void)removeObject:(id)object;	// 0x3345e25d
- (id)retain;	// 0x33472775
- (unsigned)retainCount;	// 0x3350dc35
@end

