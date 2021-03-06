/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSFileAccessArbiter.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
@private
	xpc_connection_s *_server;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x337549c5
- (id)initWithServer:(xpc_connection_s *)server;	// 0x3375309d
- (id)_idForReactor:(id)reactor;	// 0x337531dd
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x33754c9d
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x3375513d
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x337552e9
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x33755595
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x33756291
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x3375696d
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x33755d3d
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x33756149
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x337562bd
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x33754a55
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x33756d31
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x33756999
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x3375328d
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x33753325
- (void)addFilePresenter:(id)presenter;	// 0x33753e3d
- (void)addFileProvider:(id)provider;	// 0x3375433d
- (void)cancelAccessClaimForID:(id)anId;	// 0x337538dd
- (void)dealloc;	// 0x33753105
- (id)filePresenters;	// 0x33754169
- (id)fileProviders;	// 0x33754635
- (void)finalize;	// 0x33753189
- (dispatch_semaphore_s *)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x337533bd
- (void)grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;	// 0x3375365d
- (void)handleCanceledServer;	// 0x33757719
- (void)handleMessage:(void *)message;	// 0x33756e35
- (id)idForFileReactor:(id)fileReactor;	// 0x33754809
- (void)removeFilePresenter:(id)presenter;	// 0x33753fe9
- (void)removeFileProvider:(id)provider;	// 0x337544e9
- (void)revokeAccessClaimForID:(id)anId;	// 0x33753559
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x337537d9
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x33753d09
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x337539e1
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x33753b49
@end

