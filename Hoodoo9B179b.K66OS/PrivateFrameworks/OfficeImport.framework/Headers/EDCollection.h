/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject <NSCopying> {
@private
	NSMutableArray *mObjects;	// 4 = 0x4
}
+ (id)collection;	// 0x32818ca1
+ (id)collectionWithObject:(id)object;	// 0x3298100d
- (id)init;	// 0x3280bff9
- (id)initWithObject:(id)object;	// 0x32920d2d
- (unsigned)addObject:(id)object;	// 0x3280c865
- (unsigned)addOrEquivalentObject:(id)object;	// 0x328113dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3292d035
- (unsigned)count;	// 0x3280cc7d
- (void)dealloc;	// 0x328156d5
- (unsigned)hash;	// 0x329810cd
- (unsigned)indexOfObject:(id)object;	// 0x32811415
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32818f51
- (BOOL)isEqual:(id)equal;	// 0x3291f1ad
- (BOOL)isEqualToCollection:(id)collection;	// 0x3291f209
- (id)objectAtIndex:(unsigned)index;	// 0x32818fa5
- (void)removeAllObjects;	// 0x329810ad
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32908d49
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32981059
@end

