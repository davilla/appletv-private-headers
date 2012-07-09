/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSArray *_itemKinds;	// 12 = 0xc
	SSXPCConnection *_observerConnection;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_observerQueue;	// 20 = 0x14
	CFArrayRef _observers;	// 24 = 0x18
	NSArray *_preorders;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *itemKinds;	// G=0x3237c6a5; 
@property(readonly, assign) NSArray *preorders;	// G=0x3237c6dd; 
+ (id)bookStoreItemKinds;	// 0x3237c251
+ (id)musicStoreItemKinds;	// 0x3237c285
- (id)init;	// 0x3237c019
- (id)initWithItemKinds:(id)itemKinds;	// 0x3237c02d
- (void)_connectAsObserver;	// 0x3237cc01
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x3237cee9
- (void)_registerAsObserver;	// 0x3237cf85
- (void)_sendMessageToObservers:(SEL)observers;	// 0x3237d031
- (void)addObserver:(id)observer;	// 0x3237c395
- (void)cancelPreorders:(id)preorders withCompletionBlock:(id)completionBlock;	// 0x3237c445
- (void)dealloc;	// 0x3237c175
// declared property getter: - (id)itemKinds;	// 0x3237c6a5
// declared property getter: - (id)preorders;	// 0x3237c6dd
- (void)reloadFromServer;	// 0x3237cad9
- (void)removeObserver:(id)observer;	// 0x3237cb29
@end
