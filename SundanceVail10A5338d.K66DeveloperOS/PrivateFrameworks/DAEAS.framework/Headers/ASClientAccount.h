/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 88 = 0x58
	NSMutableSet *_foldersToRetryForMonitoring;	// 92 = 0x5c
	NSMutableSet *_folderIDsOnRemoteHold;	// 96 = 0x60
}
- (id)initWithProperties:(id)properties;	// 0x36efefb1
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x36eff6c5
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x36f009d5
- (void)_daemonDied;	// 0x36eff575
- (void)_folderHierarchyChanged;	// 0x36eff11d
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x36eff1bd
- (void)_foldersUpdated:(id)updated;	// 0x36eff36d
- (void)_logStatus:(id)status;	// 0x36eff669
- (id)_newPolicyManager;	// 0x36efef79
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x36eff731
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x36f0111d
- (void)_retryMonitoring;	// 0x36eff7f9
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x36efff39
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x36effc15
- (void)clearFolderHierarchyCache;	// 0x36eff0f5
- (void)dealloc;	// 0x36eff031
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x36effb5d
- (id)mailboxes;	// 0x36f00ff1
- (void)monitorFoldersForUpdates:(id)updates;	// 0x36eff8d1
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x36f00371
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x36f0050d
- (void)performFolderChange:(id)change;	// 0x36f00971
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x36f00f79
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x36f00a7d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x36f0003d
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x36f008a1
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x36effaa1
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x36f00855
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x36eff25d
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x36efffd9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x36effe1d
- (void)stopMonitoringAllFolders;	// 0x36effa4d
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x36eff9e9
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x36effea5
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x36effd31
@end

