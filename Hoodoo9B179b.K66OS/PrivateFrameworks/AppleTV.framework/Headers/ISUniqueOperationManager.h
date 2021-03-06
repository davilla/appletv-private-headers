/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class ISUniqueOperationContext, NSMutableDictionary, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISUniqueOperationManager : NSObject <ISSingleton> {
@private
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x3042775d
+ (id)sharedInstance;	// 0x304277b1
- (id)init;	// 0x3042764d
- (id)_activeContext;	// 0x30427c45
- (id)_contextForOperation:(id)operation;	// 0x30427cb9
- (void)checkInOperation:(id)operation;	// 0x30427825
- (void)checkOutOperation:(id)operation;	// 0x30427889
- (void)dealloc;	// 0x304276d5
- (id)lockWithIdentifier:(id)identifier;	// 0x3042795d
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x30427a91
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x30427b25
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x30427bb5
@end

