/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSRecursiveLock, NSMutableDictionary;

@interface DAAccountManager : NSObject {
	NSMutableDictionary *_accounts;	// 4 = 0x4
	NSMutableDictionary *_accountsToAdd;	// 8 = 0x8
	NSMutableDictionary *_accountsToRemove;	// 12 = 0xc
	NSMutableSet *_setAsideAccounts;	// 16 = 0x10
	NSRecursiveLock *_accountLock;	// 20 = 0x14
	BOOL _accountSaveInProgress;	// 24 = 0x18
	int _pendingAccountSetupCount;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *accounts;	// G=0x340ab935; converted property
+ (id)oneshotListOfAccountPersistentUUIDs;	// 0x340b0331
+ (void)reacquireClientRestrictions:(id)restrictions;	// 0x340b0261
+ (id)sharedInstance;	// 0x340aa9f1
+ (void)vendDaemonManagers:(Class)managers;	// 0x340afee9
- (id)init;	// 0x340aab01
- (id)_accountSettingsAccountTypes;	// 0x340b01d9
- (BOOL)_addAccount:(id)account checkUniqueness:(BOOL)uniqueness;	// 0x340b0ccd
- (void)_removeStoresForAccountWithID:(id)anId;	// 0x340b1799
- (void)_respondToAccountsChangedNotification;	// 0x340b0c15
- (BOOL)_saveAllAccountSettings:(BOOL)settings;	// 0x340b1139
- (void)_setAccountName:(id)name forDataTypes:(int)dataTypes;	// 0x340b1a7d
- (void)_setExternalSource:(id)source statusForDataTypes:(int)dataTypes;	// 0x340b1a25
- (void)_startAgentMonitoring;	// 0x340b1825
- (void)_stopAgentMonitoring;	// 0x340b1899
- (void)_updateExternalSourcesAndAccountNamesForAccounts:(id)accounts;	// 0x340b08ed
- (id)accountWithID:(id)anId;	// 0x340b00c1
- (id)accountWithPersistentUUID:(id)persistentUUID;	// 0x340b0675
// converted property getter: - (id)accounts;	// 0x340ab935
- (id)accountsOfClass:(Class)aClass;	// 0x340b0489
- (BOOL)addAccount:(id)account;	// 0x340b01c1
- (void)addPendingAccountSetup;	// 0x340afebd
- (void)checkValidityForAccount:(id)account consumer:(id)consumer;	// 0x340afef5
- (void)cleanupLaunchdSemaphore;	// 0x340b190d
- (void)dealloc;	// 0x340b1c85
- (void)disableDaemon;	// 0x340b1985
- (void)enableDaemon;	// 0x340abc1d
- (id)getStatusReports;	// 0x340b0579
- (BOOL)hasActiveAccounts;	// 0x340aba61
- (BOOL)hasPendingAccountSetup;	// 0x340afed1
- (id)pendingAccounts;	// 0x340afff9
- (void)reloadAccounts;	// 0x340aac09
- (BOOL)removeAccount:(id)account;	// 0x340b1ad5
- (void)removePendingAccountSetup;	// 0x340aff5d
- (BOOL)saveAllAccountSettings;	// 0x340b0791
- (void)setAsideAccountWithID:(id)anId;	// 0x340b016d
- (void)unsetAsideAccountWithID:(id)anId;	// 0x340b0119
@end

