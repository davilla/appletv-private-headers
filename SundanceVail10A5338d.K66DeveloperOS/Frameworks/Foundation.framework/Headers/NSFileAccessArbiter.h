/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessArbiter.h"
#import <NSObject.h> // Unknown library
#import "NSObject.h"

@class NSMutableDictionary, NSFileAccessNode;
@protocol OS_dispatch_queue, OS_xpc_object;

@protocol NSFileAccessArbiter <NSObject>
- (void)cancelAccessClaimForID:(id)anId;
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;
- (void)revokeAccessClaimForID:(id)anId;
- (void)revokeSubarbitrationClaimForID:(id)anId;
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	BOOL _isSubarbiter;	// 8 = 0x8
	NSMutableDictionary *_accessClaimsByID;	// 12 = 0xc
	NSMutableDictionary *_subarbitrationClaimsByID;	// 16 = 0x10
	NSMutableDictionary *_reactorsByID;	// 20 = 0x14
	NSMutableDictionary *_watchersByPresenterID;	// 24 = 0x18
	NSFileAccessNode *_rootNode;	// 28 = 0x1c
	NSObject<OS_xpc_object> *_superarbitrationServer;	// 32 = 0x20
}
@property(readonly, retain) NSFileAccessNode *rootNode;	// G=0x374166cd; converted property
- (id)initWithQueue:(id)queue isSubarbiter:(BOOL)subarbiter listener:(id)listener;	// 0x37413ca5
- (void)_addPresenter:(id)presenter ofItemAtURL:(id)url withLastEventID:(id)lastEventID;	// 0x37416349
- (void)_addProvider:(id)provider ofItemsAtURL:(id)url;	// 0x37416405
- (void)_cancelAccessClaimForID:(id)anId;	// 0x37414a95
- (void)_grantAccessClaim:(id)claim;	// 0x374142e1
- (void)_grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x37414771
- (void)_handleCanceledClient:(id)client;	// 0x374179d5
- (void)_handleMessage:(id)message forSubarbitrationClaim:(id)subarbitrationClaim server:(id)server;	// 0x374175b1
- (void)_handleMessage:(id)message fromClient:(id)client;	// 0x37416ff1
- (BOOL)_handleMessage:(id)message ofKind:(id)kind withParameters:(id)parameters embeddedServer:(id)server fromClient:(id)client;	// 0x374167ed
- (void)_removeReactorForID:(id)anId;	// 0x3741648d
- (void)_revokeAccessClaim:(id)claim;	// 0x37414589
- (void)_revokeAccessClaimForID:(id)anId fromLocal:(BOOL)local;	// 0x37414651
- (void)_sendSubarbitersMessageWithKind:(id)kind parameters:(id)parameters;	// 0x37416705
- (void)_startArbitratingItemsAtURLs:(id)urls withSuperarbitrationServer:(id)superarbitrationServer;	// 0x3741650d
- (void)_startWatchingItemAtURL:(id)url forPresenter:(id)presenter withLastEventID:(id)lastEventID;	// 0x37415b4d
- (void)_stopWatchingItemForPresenterForID:(id)anId;	// 0x374162f5
- (void)_tiePresenter:(id)presenter toItemAtURL:(id)url;	// 0x37414255
- (void)_tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x37415b05
- (void)_writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x37415751
- (void)_writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x37414b61
- (void)_writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x37415881
- (void)_writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x374159d9
- (void)cancelAccessClaimForID:(id)anId;	// 0x37418145
- (void)dealloc;	// 0x3741414d
- (void)finalize;	// 0x37414215
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x37417e8d
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x37418105
- (void)revokeAccessClaimForID:(id)anId;	// 0x37418051
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x37418141
// converted property getter: - (id)rootNode;	// 0x374166cd
- (void)stopArbitrating;	// 0x3741663d
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x374185c5
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x374183e1
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x3741825d
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x374183e5
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x374183e9
@end
