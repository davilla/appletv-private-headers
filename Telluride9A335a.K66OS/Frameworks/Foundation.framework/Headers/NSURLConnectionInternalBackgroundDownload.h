/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "SSDownloadManagerObserver.h"
#import "NSURLConnectionInternal.h"
#import "SSDownloadHandlerDelegate.h"
#import "Foundation-Structs.h"
#import "NSURLConnectionRequired.h"

@class NSMutableArray, SSDownloadHandler, NSCountedSet, NSTimer, AsyncSSDownloadManager;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
@private
	CFRunLoopSourceRef _source;	// 36 = 0x24
	NSMutableArray *_pendingOps;	// 40 = 0x28
	NSCountedSet *_runloops;	// 44 = 0x2c
	SSDownloadHandler *_handler;	// 48 = 0x30
	AsyncSSDownloadManager *_manager;	// 52 = 0x34
	long long _downloadIdent;	// 56 = 0x38
	long long _ctLast;	// 64 = 0x40
	BOOL _terminated;	// 72 = 0x48
	NSTimer *_deferredStartTimer;	// 76 = 0x4c
}
+ (void)_enableLogging;	// 0x32136595
+ (id)sharedDownloadManagerForMediaKind:(id)mediaKind persistenceIdentifier:(id)identifier;	// 0x321340a9
- (id)initWithInfo:(const InternalInit *)info;	// 0x321343b5
- (void)_createNewDownload;	// 0x32134fcd
- (long long)_getDownloadIdent;	// 0x321365d1
- (void)_invalidate;	// 0x32134b71
- (void)_invokeInvocation:(id)invocation withConnection:(id)connection;	// 0x321347ed
- (void)_managerFailedToStartInTime;	// 0x32134d7d
- (void)_postTerminalInvocation:(id)invocation;	// 0x32134889
- (void)_preTerminalInvocation:(id)invocation;	// 0x32134869
- (void)_sendTerminalDidFinishToDelegate:(id)_sendTerminal;	// 0x32134a0d
- (void)_sendTerminalErrorToDelegate:(id)delegate;	// 0x321348a9
- (void)_sourcePerform;	// 0x32135d09
- (void)_updateClientWithCurrentWrites:(id)currentWrites;	// 0x321363e9
- (void)_updateDownloadState:(id)state;	// 0x321365e9
- (void)cancel;	// 0x32135be9
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x321369ad
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x32136961
- (void)dealloc;	// 0x32134d19
- (id)description;	// 0x321344f5
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x321361f1
- (void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;	// 0x32136261
- (BOOL)downloadHandler:(id)handler pauseSession:(id)session;	// 0x3213625d
- (void)downloadHandlerDidDisconnect:(id)downloadHandler;	// 0x3213619d
- (void)invokeForDelegate:(id)delegate;	// 0x32134575
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x321369f9
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x32136a45
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32135dc9
- (void)setDelegateQueue:(id)queue;	// 0x321360e5
- (void)setHandlerForDownload:(id)download completionBlock:(id)block;	// 0x32134ded
- (void)start;	// 0x321354a9
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x32135fe5
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x32136915
@end

