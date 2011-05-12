/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "AppSupport-Structs.h"

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
	CFDictionaryRef _dictionary;	// 4 = 0x4
	unsigned _maxCount;	// 8 = 0x8
	CPLRUDictionaryNode *_head;	// 12 = 0xc
	CPLRUDictionaryNode *_tail;	// 16 = 0x10
}
+ (id)dictionaryWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x31a0fff5
- (id)initWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x31a101b1
- (void)_addNodeToFront:(id)front;	// 0x31a0fd49
- (void)_moveNodeToFront:(id)front;	// 0x31a10039
- (void)_removeNode:(id)node;	// 0x31a10175
- (void)_removeNodeFromLinkedList:(id)linkedList;	// 0x31a0fd25
- (id)allKeys;	// 0x31a0fedd
- (id)allKeysInLRUOrder;	// 0x31a0fe4d
- (id)allValuesInLRUOrder;	// 0x31a0fdbd
- (unsigned)count;	// 0x31a10399
- (void)dealloc;	// 0x31a1032d
- (id)description;	// 0x31a0fefd
- (unsigned)linkedListCount;	// 0x31a0fd89
- (id)objectForKey:(id)key;	// 0x31a10409
- (id)objectForKeyWithoutAffectingLRU:(id)keyWithoutAffectingLRU;	// 0x31a103b1
- (void)removeAllObjects;	// 0x31a10561
- (void)removeObjectForKey:(id)key;	// 0x31a103d9
- (void)setObject:(id)object forKey:(id)key;	// 0x31a10449
@end

