/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSDictionary.h> // Unknown library
#import "UIFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSAttributeDictionary : NSDictionary {
	unsigned numElements;	// 4 = 0x4
	unsigned refCount;	// 8 = 0x8
	NSAttributeDictionaryElement elements[1];	// 12 = 0xc
}
+ (id)emptyAttributeDictionary;	// 0x36881d0d
+ (void)initialize;	// 0x36881661
+ (id)newWithDictionary:(id)dictionary;	// 0x36881d1d
- (BOOL)_isDeallocating;	// 0x36882575
- (BOOL)_tryRetain;	// 0x36882571
- (id)copyWithZone:(NSZone *)zone;	// 0x368827c9
- (unsigned)count;	// 0x3688247d
- (void)dealloc;	// 0x3688266d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x368824c1
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x368827d9
- (id)keyEnumerator;	// 0x36882525
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x368826f5
- (id)newWithKey:(id)key object:(id)object;	// 0x36882035
- (id)objectForKey:(id)key;	// 0x3688248d
- (oneway void)release;	// 0x368825b5
- (id)retain;	// 0x36882579
- (unsigned)retainCount;	// 0x36882659
@end
