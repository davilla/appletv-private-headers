/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "AccountNotificationProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSInvocation, NSMutableDictionary;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
@private
	unsigned _publicPort;	// 4 = 0x4
	unsigned _serverPort;	// 8 = 0x8
	CFMachPortRef _callbackPort;	// 12 = 0xc
	opaque_pthread_mutex_t _lock;	// 16 = 0x10
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 60 = 0x3c
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 64 = 0x40
	NSInvocation *_statusReportInvocation;	// 68 = 0x44
	NSMutableDictionary *_defaultContainerIDCache;	// 72 = 0x48
}
@property(readonly, assign) unsigned publicPort;	// G=0x33342b21; converted property
@property(readonly, assign) unsigned serverPort;	// G=0x333427b9; converted property
+ (void)noteAccountChanges:(id)changes;	// 0x33342601
+ (void)setShouldIgnoreAccountChanges;	// 0x3334250d
+ (id)sharedConnection;	// 0x333457e1
- (id)init;	// 0x333452dd
- (id)_getStatusReportDictsFromClient;	// 0x33342ef1
- (void)_handleFoldersUpdated:(id)updated forAccountID:(id)accountID;	// 0x33342859
- (void)_handleNewPolicyKey:(id)key forAccountID:(id)accountID;	// 0x333427d9
- (void)_handleSendFailure:(int)failure inCodeNamed:(const char *)codeNamed;	// 0x33342bdd
- (void)_reallyRegisterForInterrogation;	// 0x33345271
- (void)_registerForAppResumedNotification;	// 0x33342655
- (BOOL)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status;	// 0x33343b4d
- (BOOL)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses;	// 0x333454a1
- (BOOL)_resetThrottleTimersForAccountId:(id)accountId;	// 0x33345641
- (void)_setPublicPort:(unsigned)port;	// 0x33342d21
- (BOOL)cancelServerContactsSearch:(id)search;	// 0x33344a1d
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x33343a4d
- (void)dealloc;	// 0x333453c5
- (id)defaultContainerIdentifierForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x333442d1
- (void)handleBrokenPipe;	// 0x33342739
- (BOOL)handleURL:(id)url;	// 0x33344f99
- (void)invalidateServerPort;	// 0x33342c45
- (int)openDADConnectionOnRunLoop:(CFRunLoopRef)loop;	// 0x33343031
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId onRunloop:(id)runloop;	// 0x3334461d
- (BOOL)processMeetingRequests:(id)requests inFolderWithId:(id)anId forAccountWithId:(id)anId3;	// 0x33344b01
// converted property getter: - (unsigned)publicPort;	// 0x33342b21
- (BOOL)registerForInterrogationWithInvocation:(id)invocation;	// 0x333426a5
- (BOOL)removeStoresForAccountWithID:(id)anId;	// 0x33343be1
- (BOOL)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x33344ee9
- (void)requestDaemonShutdown;	// 0x33343c79
- (BOOL)requestDaemonStartMonitoringAgents;	// 0x33342721
- (BOOL)requestDaemonStopMonitoringAgents;	// 0x33342709
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x33343971
- (void)resetTimersAndWarnings;	// 0x33344135
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33343441
// converted property getter: - (unsigned)serverPort;	// 0x333427b9
- (unsigned)serverPortWithTimeout:(unsigned)timeout;	// 0x33342d9d
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x33344cf9
- (id)statusReports;	// 0x3334511d
- (void)stopWatching;	// 0x33342d5d
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x333437d5
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33343639
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33343fed
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33343de5
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x333426e5
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses ignoreThrottleTimer:(BOOL)timer;	// 0x33343c91
- (BOOL)upgradeAccountWithId:(id)anId withProtocolVersion:(id)protocolVersion;	// 0x33345079
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x333432a9
@end

