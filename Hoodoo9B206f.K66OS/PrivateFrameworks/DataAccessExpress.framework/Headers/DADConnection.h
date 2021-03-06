/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library
#import "AccountNotificationProtocol.h"

@class NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_muckingWithConn;	// 8 = 0x8
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 12 = 0xc
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 16 = 0x10
	id _statusReportBlock;	// 20 = 0x14
	NSMutableDictionary *_inFlightSearchQueries;	// 24 = 0x18
	NSMutableDictionary *_inFlightFolderChanges;	// 28 = 0x1c
	NSMutableDictionary *_inFlightAttachmentDownloads;	// 32 = 0x20
	NSMutableDictionary *_defaultContainerIDCache;	// 36 = 0x24
}
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x31f9ab55
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x31f9aad1
+ (void)noteAccountChanges:(id)changes;	// 0x31f9aa3d
+ (void)setShouldIgnoreAccountChanges;	// 0x31f969b5
+ (id)sharedConnection;	// 0x31f96925
+ (id)sharedConnectionIfServerIsRunning;	// 0x31f96989
- (id)init;	// 0x31f99f49
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x31f995c1
- (xpc_connection_s *)_connection;	// 0x31f958a1
- (void *)_createReplyToRequest:(void *)request withProperties:(id)properties;	// 0x31f95b95
- (void)_dispatchMessage:(void *)message;	// 0x31f9a829
- (void)_downloadFinished:(void *)finished;	// 0x31f967d9
- (void)_downloadProgress:(void *)progress;	// 0x31f96695
- (void)_folderChangeFinished:(void *)finished;	// 0x31f9623d
- (void)_foldersUpdated:(void *)updated;	// 0x31f95d81
- (void)_getStatusReportsFromClient:(void *)client;	// 0x31f96499
- (id)_init;	// 0x31f99fa1
- (void)_logDataAccessStatus:(void *)status;	// 0x31f95f45
- (void)_policyKeyChanged:(void *)changed;	// 0x31f95c05
- (void)_reallyRegisterForInterrogation;	// 0x31f99ea1
- (void)_registerForAppResumedNotification;	// 0x31f9a7d1
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x31f97631
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x31f978a1
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x31f9a2e1
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x31f9a4f5
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x31f99121
- (void)_serverContactsSearchQueryFinished:(void *)finished;	// 0x31f95fa5
- (void)_serverDiedWithReason:(void *)reason;	// 0x31f95799
- (void)_tearDownInFlightObjects;	// 0x31f954b5
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x31f99ae5
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(dispatch_queue_s *)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x31f99229
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x31f99699
- (void)cancelServerContactsSearch:(id)search;	// 0x31f98725
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x31f97355
- (void)dealloc;	// 0x31f9a19d
- (id)defaultContainerIdentifierForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x31f97e11
- (void)handleURL:(id)url;	// 0x31f99051
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x31f982f9
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x31f9977d
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x31f988f9
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x31f99f11
- (void)removeStoresForAccountWithID:(id)anId;	// 0x31f978b5
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x31f98f71
- (void)requestDaemonShutdown;	// 0x31f97941
- (void)requestDaemonStartMonitoringAgents;	// 0x31f97865
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x31f9788d
- (void)requestDaemonStopMonitoringAgents;	// 0x31f97879
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x31f972b9
- (void)resetTimersAndWarnings;	// 0x31f9a6c1
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x31f96a85
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x31f98c3d
- (id)statusReports;	// 0x31f99bb9
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x31f97011
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x31f96d69
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x31f97ded
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x31f97c29
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x31f97dc9
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x31f97aad
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x31f97da5
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses ignoreThrottleTimer:(BOOL)timer;	// 0x31f97d81
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x31f97955
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x31f969c5
@end

