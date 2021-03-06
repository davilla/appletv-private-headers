/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject {
	NSMutableSet *_operations;	// 4 = 0x4
	NSMutableDictionary *_uniqueOperations;	// 8 = 0x8
}
- (id)init;	// 0x32729d09
- (void)addOperation:(id)operation;	// 0x32729e09
- (BOOL)containsOperation:(id)operation;	// 0x32729e29
- (unsigned)countOfOperations;	// 0x32729e4d
- (void)dealloc;	// 0x32729d91
- (void)removeOperation:(id)operation;	// 0x32729e6d
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x32729e8d
- (id)uniqueOperationForKey:(id)key;	// 0x32729ec9
@end

