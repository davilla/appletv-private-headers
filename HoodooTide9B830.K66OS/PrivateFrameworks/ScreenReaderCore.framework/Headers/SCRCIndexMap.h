/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface SCRCIndexMap : NSObject <NSCopying> {
	CFDictionaryRef _map;	// 4 = 0x4
}
- (id)init;	// 0x332b7a89
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x332b79b9
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x332b7c79
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x332b7b61
- (id)_initWithIndexMap:(id)indexMap;	// 0x332b8005
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x332b8d6d
- (id)copyWithZone:(NSZone *)zone;	// 0x332b7fcd
- (unsigned long)count;	// 0x332ba961
- (void)dealloc;	// 0x332b7de1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x332b7b29
- (id)description;	// 0x332ba7d9
- (id)indexes;	// 0x332ba8cd
- (id)objectForIndex:(unsigned long)index;	// 0x332b7a75
- (void)removeAllObjects;	// 0x332b8085
- (void)removeObjectForIndex:(unsigned long)index;	// 0x332b9285
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x332b7b09
@end

