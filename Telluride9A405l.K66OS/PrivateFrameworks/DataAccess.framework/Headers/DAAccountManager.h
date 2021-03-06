/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface DAAccountManager : NSObject {
	NSMutableDictionary *_accounts;	// 4 = 0x4
	NSMutableDictionary *_accountsToAdd;	// 8 = 0x8
	NSMutableDictionary *_accountsToRemove;	// 12 = 0xc
	NSMutableSet *_setAsideAccounts;	// 16 = 0x10
	NSRecursiveLock *_accountLock;	// 20 = 0x14
	BOOL _accountSaveInProgress;	// 24 = 0x18
	int _pendingAccountSetupCount;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *accounts;	// G=0x36c097d1; converted property
+ (id)oneshotListOfAccountPersistentUUIDs;	// 0x36c10975
+ (void)reacquireClientRestrictions:(id)restrictions;	// 0x36c10ae1
+ (id)sharedInstance;	// 0x36c08b25
+ (void)vendDaemonManagers:(Class)managers;	// 0x36c10bad
- (id)init;	// 0x36c08c11
- (id)_accountSettingsAccountTypes;	// 0x36c0ed81
- (BOOL)_addAccount:(id)account checkUniqueness:(BOOL)uniqueness;	// 0x36c0f979
- (void)_removeStoresForAccountWithID:(id)anId;	// 0x36c0ece5
- (void)_respondToAccountsChangedNotification;	// 0x36c10789
- (BOOL)_saveAllAccountSettings:(BOOL)settings;	// 0x36c0f219
- (void)_setAccountName:(id)name forDataTypes:(int)dataTypes;	// 0x36c0ee61
- (void)_setExternalSource:(id)source statusForDataTypes:(int)dataTypes;	// 0x36c0ee05
- (void)_startAgentMonitoring;	// 0x36c0ec51
- (void)_stopAgentMonitoring;	// 0x36c0ebbd
- (void)_updateExternalSourcesAndAccountNamesForAccounts:(id)accounts;	// 0x36c0eebd
- (id)accountWithID:(id)anId;	// 0x36c1025d
- (id)accountWithPersistentUUID:(id)persistentUUID;	// 0x36c102bd
// converted property getter: - (id)accounts;	// 0x36c097d1
- (id)accountsOfClass:(Class)aClass;	// 0x36c104f9
- (BOOL)addAccount:(id)account;	// 0x36c0feb5
- (void)addPendingAccountSetup;	// 0x36c106b9
- (void)checkValidityForAccount:(id)account consumer:(id)consumer;	// 0x36c10bbd
- (void)cleanupLaunchdSemaphore;	// 0x36c0eb31
- (void)dealloc;	// 0x36c108bd
- (void)disableDaemon;	// 0x36c0ea75
- (void)enableDaemon;	// 0x36c09a99
- (id)getStatusReports;	// 0x36c103dd
- (BOOL)hasActiveAccounts;	// 0x36c098d1
- (BOOL)hasPendingAccountSetup;	// 0x36c10771
- (id)pendingAccounts;	// 0x36c105e1
- (void)reloadAccounts;	// 0x36c08d29
- (BOOL)removeAccount:(id)account;	// 0x36c10185
- (BOOL)removeAccount:(id)account forAccountIDReset:(BOOL)accountIDReset;	// 0x36c0fecd
- (void)removePendingAccountSetup;	// 0x36c106cd
- (BOOL)saveAllAccountSettings;	// 0x36c0f819
- (void)setAsideAccountWithID:(id)anId;	// 0x36c1019d
- (void)unsetAsideAccountWithID:(id)anId;	// 0x36c101fd
@end

