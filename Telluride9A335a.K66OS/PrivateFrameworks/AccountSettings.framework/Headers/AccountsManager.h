/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface AccountsManager : NSObject {
	NSMutableDictionary *_topLevelAccountsByID;	// 4 = 0x4
	NSMutableArray *_orderedTopLevelAccounts;	// 8 = 0x8
	NSMutableDictionary *_childAccountsByID;	// 12 = 0xc
	NSMutableDictionary *_childAccountIDToParentAccountID;	// 16 = 0x10
@private
	NSMutableDictionary *_originalAccountsByID;	// 20 = 0x14
	unsigned _dataVersion;	// 24 = 0x18
	NSArray *_runtimeFixers;	// 28 = 0x1c
}
@property(assign) unsigned dataVersion;	// G=0x305c9821; S=0x305c9841; converted property
+ (void)_migrateAccountsIfNeeded;	// 0x305ca5dd
+ (id)_notifierClassNamesForAccountType:(id)accountType dataclass:(id)dataclass;	// 0x305c9eb5
+ (BOOL)_oldDAAccountsInformationFound;	// 0x305cdfb9
+ (BOOL)_oldMailAccountsInformationFound;	// 0x305ce049
+ (void)_setShouldSkipNotifications:(BOOL)_set;	// 0x305c9831
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x305ca295
+ (BOOL)accountSettingsNeedsToBeMigrated;	// 0x305cdbd1
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x305ca439
+ (id)createAndLockMigrationLock;	// 0x305cd8f5
+ (unsigned)currentVersion;	// 0x305c981d
+ (id)displayNameForGroupOfAccountType:(id)accountType forBeginningOfSentence:(BOOL)sentence;	// 0x305c9de5
+ (id)fullPathToAccountSettingsPlist;	// 0x305cdd1d
+ (void)killDataAccessIfNecessary;	// 0x305cde31
+ (void)releaseMigrationLock:(id)lock;	// 0x305cd945
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;	// 0x305cdc81
+ (void)shouldMigrateOldMailAccounts:(BOOL *)accounts oldDAAccounts:(BOOL *)accounts2 newAccountSettings:(BOOL *)settings;	// 0x305cd9e9
+ (void)waitForMigrationToFinish;	// 0x305cd975
- (id)init;	// 0x305c9851
- (id)initInsideOfMigration;	// 0x305cd811
- (id)initWithAccounsInfoArray:(id)accounsInfoArray;	// 0x305cd801
- (void)_addNotificationToDictionary:(id)dictionary forChangeType:(int)changeType originalProperties:(id)properties currentProperties:(id)properties4;	// 0x305cabe9
- (id)_createRuntimeFixers;	// 0x305c9d75
- (id)_initWithAccountsInfo:(id)accountsInfo;	// 0x305cb549
- (void)_loadChildrenFromAccount:(id)account;	// 0x305cb971
- (void)_removeChildrenForAccountWithIdentifier:(id)identifier;	// 0x305cbb25
- (void)_sendNotificationsForChangedAccounts;	// 0x305ca72d
- (void)_setOriginalAccountDictionaries;	// 0x305cb2e9
- (id)accountWithIdentifier:(id)identifier;	// 0x305c988d
- (id)accountsWithTypes:(id)types;	// 0x305c9b21
- (id)accountsWithTypes:(id)types withLoader:(id)loader;	// 0x305cd029
- (void)addChild:(id)child toAccount:(id)account;	// 0x305c9c99
- (id)allBasicAccounts;	// 0x305c9961
- (id)allBasicSyncableAccounts;	// 0x305c9999
- (id)allMailAccounts;	// 0x305c9a85
- (id)basicAccountsWithTypes:(id)types;	// 0x305cd475
- (unsigned)count;	// 0x305c9b35
- (unsigned)countOfBasicAccountsWithTypes:(id)types;	// 0x305cb469
// converted property getter: - (unsigned)dataVersion;	// 0x305c9821
- (void)dealloc;	// 0x305cd751
- (void)deleteAccount:(id)account;	// 0x305cccf5
- (void)deleteAccountWithIdentifier:(id)identifier;	// 0x305c9b55
- (id)displayAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x305c9919
- (id)fullAccountWithIdentifier:(id)identifier loader:(id)loader;	// 0x305c9a09
- (id)fullDeviceLocalAccount;	// 0x305cd2b1
- (void)insertAccount:(id)account;	// 0x305cce2d
- (id)mergeInMemoryProperties:(id)memoryProperties originalProperties:(id)properties onDiskProperties:(id)properties3;	// 0x305cc3a1
- (void)removeChildWithIdentifier:(id)identifier fromAccount:(id)account;	// 0x305cc621
- (void)replaceAccount:(id)account withAccount:(id)account2;	// 0x305c9b95
- (void)replaceAccountsWithTypes:(id)types withAccounts:(id)accounts;	// 0x305cc79d
- (void)saveAllAccounts;	// 0x305cbcad
// converted property setter: - (void)setDataVersion:(unsigned)version;	// 0x305c9841
- (id)syncableAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x305cd581
- (void)updateAccount:(id)account;	// 0x305ccefd
@end

