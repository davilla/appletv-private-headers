/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFileAccessArbiter.h"

@class NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
	NSObject<OS_xpc_object> *_server;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x3741a419
- (id)initWithServer:(id)server;	// 0x37418711
- (id)_idForReactor:(id)reactor;	// 0x37418855
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x3741a6f5
- (void)_makePresenter:(id)presenter accommodateDisconnectionWithCompletionHandler:(id)completionHandler;	// 0x3741ab8d
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x3741add5
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x3741af85
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x3741b3b9
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x3741c185
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x3741c905
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x3741bc3d
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x3741c045
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x3741c1b1
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x3741a4ad
- (void)_makePresenter:(id)presenter setLastPresentedItemEventIdentifier:(unsigned long long)identifier;	// 0x3741bb55
- (void)_makePresenterObserveDisconnection:(id)disconnection;	// 0x3741b231
- (void)_makePresenterObserveReconnection:(id)reconnection;	// 0x3741b2f5
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x3741ccc5
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x3741c931
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x3741890d
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x374189a5
- (void)addFilePresenter:(id)presenter;	// 0x37419769
- (void)addFileProvider:(id)provider completionHandler:(id)handler;	// 0x37419d01
- (void)cancelAccessClaimForID:(id)anId;	// 0x37418f95
- (void)dealloc;	// 0x37418779
- (id)filePresenters;	// 0x37419b1d
- (id)fileProviders;	// 0x3741a069
- (void)finalize;	// 0x37418801
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x37418a3d
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x37418cdd
- (void)handleCanceledServer;	// 0x3741d93d
- (void)handleMessage:(id)message;	// 0x3741cdcd
- (id)idForFileReactor:(id)fileReactor;	// 0x3741a24d
- (void)removeFilePresenter:(id)presenter;	// 0x3741999d
- (void)removeFileProvider:(id)provider;	// 0x37419f19
- (void)revokeAccessClaimForID:(id)anId;	// 0x37418bd9
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x37418e91
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x37419631
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x37419201
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x37419099
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x37419339
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x37419471
@end
