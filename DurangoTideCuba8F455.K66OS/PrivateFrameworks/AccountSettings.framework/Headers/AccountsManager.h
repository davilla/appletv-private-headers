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
@property(assign) unsigned dataVersion;	// G=0x31eb4a05; S=0x31eb4a21; converted property
+ (void)_migrateAccountsIfNeeded;	// 0x31eb8059
+ (BOOL)_oldDAAccountsInformationFound;	// 0x31eb83f1
+ (BOOL)_oldMailAccountsInformationFound;	// 0x31eb8471
+ (void)_setShouldSkipNotifications:(BOOL)_set;	// 0x31eb4a15
+ (BOOL)accountSettingsNeedsToBeMigrated;	// 0x31eb4a51
+ (id)createAndLockMigrationLock;	// 0x31eb4d21
+ (unsigned)currentVersion;	// 0x31eb4a01
+ (id)displayNameForGroupOfAccountType:(id)accountType forBeginningOfSentence:(BOOL)sentence;	// 0x31eb4eb1
+ (id)fullPathToAccountSettingsPlist;	// 0x31eb8189
+ (void)killDataAccessIfNecessary;	// 0x31eb8265
+ (void)releaseMigrationLock:(id)lock;	// 0x31eb4cf9
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;	// 0x31eb63e9
+ (void)shouldMigrateOldMailAccounts:(BOOL *)accounts oldDAAccounts:(BOOL *)accounts2 newAccountSettings:(BOOL *)settings;	// 0x31eb4ad1
+ (void)waitForMigrationToFinish;	// 0x31eb4c95
- (id)init;	// 0x31eb5401
- (id)initInsideOfMigration;	// 0x31eb4d69
- (id)initWithAccounsInfoArray:(id)accounsInfoArray;	// 0x31eb4e35
- (void)_addNotificationToDictionary:(id)dictionary forChangeType:(int)changeType originalProperties:(id)properties currentProperties:(id)properties4;	// 0x31eb54d9
- (id)_createRuntimeFixers;	// 0x31eb4e49
- (id)_initWithAccountsInfo:(id)accountsInfo;	// 0x31eb6479
- (void)_loadChildrenFromAccount:(id)account;	// 0x31eb6819
- (id)_notifierClassNamesForAccountType:(id)accountType dataclass:(id)dataclass;	// 0x31eb78c5
- (void)_removeChildrenForAccountWithIdentifier:(id)identifier;	// 0x31eb5c21
- (void)_sendNotificationsForChangedAccounts;	// 0x31eb7c11
- (void)_setOriginalAccountDictionaries;	// 0x31eb7755
- (id)accountWithIdentifier:(id)identifier;	// 0x31eb537d
- (id)accountsWithTypes:(id)types;	// 0x31eb51a1
- (id)accountsWithTypes:(id)types withLoader:(id)loader;	// 0x31eb5f11
- (void)addChild:(id)child toAccount:(id)account;	// 0x31eb4fa1
- (id)allBasicAccounts;	// 0x31eb5311
- (id)allBasicSyncableAccounts;	// 0x31eb52ad
- (id)allMailAccounts;	// 0x31eb51b9
- (id)basicAccountsWithTypes:(id)types;	// 0x31eb6155
- (unsigned)count;	// 0x31eb5181
- (unsigned)countOfBasicAccountsWithTypes:(id)types;	// 0x31eb5b45
// converted property getter: - (unsigned)dataVersion;	// 0x31eb4a05
- (void)dealloc;	// 0x31eb5435
- (void)deleteAccount:(id)account;	// 0x31eb7465
- (void)deleteAccountWithIdentifier:(id)identifier;	// 0x31eb5149
- (id)displayAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x31eb5341
- (id)fullAccountWithIdentifier:(id)identifier loader:(id)loader;	// 0x31eb5241
- (id)fullDeviceLocalAccount;	// 0x31eb69b1
- (void)insertAccount:(id)account;	// 0x31eb757d
- (void)removeChildWithIdentifier:(id)identifier fromAccount:(id)account;	// 0x31eb5d91
- (void)replaceAccount:(id)account withAccount:(id)account2;	// 0x31eb5069
- (void)replaceAccountsWithTypes:(id)types withAccounts:(id)accounts;	// 0x31eb6fc1
- (void)saveAllAccounts;	// 0x31eb6b59
// converted property setter: - (void)setDataVersion:(unsigned)version;	// 0x31eb4a21
- (id)syncableAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x31eb6259
- (void)updateAccount:(id)account;	// 0x31eb763d
@end
