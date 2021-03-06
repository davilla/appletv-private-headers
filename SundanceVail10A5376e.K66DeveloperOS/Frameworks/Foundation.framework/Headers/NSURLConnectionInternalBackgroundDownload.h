/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLConnectionRequired.h"
#import "Foundation-Structs.h"
#import "SSDownloadManagerObserver.h"
#import "SSDownloadHandlerDelegate.h"
#import "NSURLConnectionInternal.h"

@class NSMutableArray, SSDownloadHandler, NSCountedSet, NSTimer, AsyncSSDownloadManager;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
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
+ (void)_enableLogging;	// 0x34e6c761
+ (id)sharedDownloadManagerForMediaKind:(id)mediaKind persistenceIdentifier:(id)identifier;	// 0x34e6a1d1
- (id)initWithInfo:(const InternalInit *)info;	// 0x34e6a50d
- (void)_createNewDownload;	// 0x34e6b14d
- (long long)_getDownloadIdent;	// 0x34e6c79d
- (void)_invalidate;	// 0x34e6ad09
- (void)_invokeInvocation:(id)invocation withConnection:(id)connection;	// 0x34e6a985
- (void)_managerFailedToStartInTime;	// 0x34e6af05
- (void)_postTerminalInvocation:(id)invocation;	// 0x34e6aa21
- (void)_preTerminalInvocation:(id)invocation;	// 0x34e6aa01
- (void)_sendTerminalDidFinishToDelegate:(id)_sendTerminal;	// 0x34e6aba5
- (void)_sendTerminalErrorToDelegate:(id)delegate;	// 0x34e6aa41
- (void)_sourcePerform;	// 0x34e6be91
- (void)_updateClientWithCurrentWrites:(id)currentWrites;	// 0x34e6c5b5
- (void)_updateDownloadState:(id)state;	// 0x34e6c7b5
- (void)cancel;	// 0x34e6bd75
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x34e6cb79
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x34e6cb2d
- (void)dealloc;	// 0x34e6aea1
- (id)description;	// 0x34e6a64d
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x34e6c3c5
- (void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;	// 0x34e6c435
- (BOOL)downloadHandler:(id)handler pauseSession:(id)session;	// 0x34e6c431
- (void)downloadHandlerDidDisconnect:(id)downloadHandler;	// 0x34e6c371
- (void)invokeForDelegate:(id)delegate;	// 0x34e6a6d5
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x34e6cbc5
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x34e6cc11
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x34e6bf79
- (void)setDelegateQueue:(id)queue;	// 0x34e6c2a5
- (void)setHandlerForDownload:(id)download completionBlock:(id)block;	// 0x34e6af75
- (void)start;	// 0x34e6b621
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x34e6c1a1
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x34e6cae1
@end

