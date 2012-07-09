/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSDictionary *_originalProperties;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	id<AccountFullAccountProtocol> _fullAccount;	// 12 = 0xc
	id<AccountRefreshProtocol> _syncAccount;	// 16 = 0x10
	BasicAccount *_parentAccount;	// 20 = 0x14
}
@property(retain) id accountClass;	// G=0x32e1d161; S=0x32e1d181; converted property
@property(retain) id displayName;	// G=0x32e1d1dd; S=0x32e1e2a9; converted property
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0x32e1da29; S=0x32e1d9e1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0x32e1d0f5; S=0x32e1d105; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x32e1d06d; converted property
+ (id)_accountCreationMap;	// 0x32e1e825
+ (id)_creatorsInfo;	// 0x32e1dca9
+ (id)_dataclassesProperties;	// 0x32e1dd41
+ (BOOL)_isValidAccountType:(id)type;	// 0x32e1da39
+ (id)accountWithProperties:(id)properties;	// 0x32e1c725
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x32e1c6e5
+ (id)allSupportedDataclasses;	// 0x32e1c771
+ (id)createNewAccountUID;	// 0x32e1e7f1
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x32e1ca6d
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x32e1cb95
+ (void)initialize;	// 0x32e1bf45
+ (BOOL)isMultitaskingEnabled;	// 0x32e1bef9
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x32e1caf1
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x32e1c8e1
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x32e1caa9
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x32e1c8a5
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x32e1c9f9
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x32e1c985
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x32e1cbf9
- (id)init;	// 0x32e1ce41
- (id)initWithProperties:(id)properties;	// 0x32e1cc5d
- (id)_cachedSyncAccount;	// 0x32e1ddd9
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x32e1e36d
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x32e1e1cd
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x32e1e1ed
- (id)_initWithType:(id)type class:(id)aClass;	// 0x32e1da81
- (id)_orderedDataclasses:(id)dataclasses;	// 0x32e1de95
- (id)_profileRestrictedDataclasses;	// 0x32e1e039
// converted property getter: - (id)accountClass;	// 0x32e1d161
- (id)accountPropertyForKey:(id)key;	// 0x32e1d005
- (void)dealloc;	// 0x32e1cec1
// converted property getter: - (id)displayName;	// 0x32e1d1dd
- (id)enabledDataclasses;	// 0x32e1d399
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x32e1e79d
- (id)fullAccountUsingLoader:(id)loader;	// 0x32e1d691
- (id)identifier;	// 0x32e1d0ad
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x32e1d491
// declared property getter: - (id)originalProperties;	// 0x32e1da29
// converted property getter: - (id)parentAccount;	// 0x32e1d0f5
- (id)parentAccountIdentifier;	// 0x32e1d0cd
// converted property getter: - (id)properties;	// 0x32e1d06d
- (id)propertiesToSave;	// 0x32e1d07d
- (id)provisionedDataclasses;	// 0x32e1d2a5
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x32e1d9a9
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x32e1d925
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x32e1d985
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x32e1d8ed
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x32e1d9c1
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x32e1d955
- (void)removeAccountPropertyForKey:(id)key;	// 0x32e1cfe5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x32e1d9d9
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x32e1d181
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32e1cf61
// converted property setter: - (void)setDisplayName:(id)name;	// 0x32e1e2a9
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x32e1d4bd
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x32e1d5a9
- (void)setFullAccount:(id)account;	// 0x32e1e329
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x32e1d9e1
// converted property setter: - (void)setParentAccount:(id)account;	// 0x32e1d105
- (id)shortTypeString;	// 0x32e1d21d
- (id)supportedDataclasses;	// 0x32e1d23d
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x32e1e7c5
- (id)syncStoreIdentifier;	// 0x32e1d141
- (id)type;	// 0x32e1d08d
- (id)typeString;	// 0x32e1d1fd
@end
