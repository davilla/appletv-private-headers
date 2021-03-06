/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CardDAVAccount.h"

@class BasicAccount;

@interface CardDAVChildAccount : CardDAVAccount {
	BasicAccount *_parent;	// 76 = 0x4c
}
+ (Class)accountClass;	// 0x31ba724d
+ (Class)clientClass;	// 0x31ba725d
+ (id)supportedDataclasses;	// 0x31ba7279
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x31ba6cb9
- (id)accountPropertyForKey:(id)key;	// 0x31ba7191
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x31ba6de1
- (void)dealloc;	// 0x31ba7201
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x31ba72b9
- (BOOL)handlePasswordPromptDirectly;	// 0x31ba6d6d
- (BOOL)isChildAccount;	// 0x31ba6d11
- (BOOL)isDisabled;	// 0x31ba72b5
- (id)password;	// 0x31ba6d4d
- (id)persistentUUID;	// 0x31ba72c9
- (void)removeAccountPropertyForKey:(id)key;	// 0x31ba7145
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x31ba6d71
- (void)saveAccountProperties;	// 0x31ba6fc1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x31ba6ec1
- (id)scheduleIdentifier;	// 0x31ba72d9
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x31ba7031
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x31ba6ddd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x31ba72a5
- (id)username;	// 0x31ba6d15
@end

