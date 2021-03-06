/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"
#import "OfficeImport-Structs.h"

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection {
@private
	TSUPointerKeyDictionary *mMap;	// 8 = 0x8
}
- (unsigned)addObject:(id)object;	// 0x31095d7d
- (id)copyWithZone:(NSZone *)zone;	// 0x311ba11d
- (void)dealloc;	// 0x310c4bf5
- (void)insertIntoMap:(id)map;	// 0x31095e4d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x310acacd
- (bool)isObjectInMap:(id)map;	// 0x3122dde5
- (bool)isOverwritingKeyOK;	// 0x3122de55
- (id)objectWithKey:(int)key;	// 0x310c1915
- (void)removeAllObjects;	// 0x3122dd95
- (void)removeFromMap:(id)map;	// 0x3122de19
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3122dd25
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3122dcc5
@end

