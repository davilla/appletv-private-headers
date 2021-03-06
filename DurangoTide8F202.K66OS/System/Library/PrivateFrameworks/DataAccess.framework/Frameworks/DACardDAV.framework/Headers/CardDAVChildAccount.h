/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CardDAVAccount.h"

@class BasicAccount;

@interface CardDAVChildAccount : CardDAVAccount {
	BasicAccount *_parent;	// 80 = 0x50
}
@property(retain) id password;	// G=0x34728b4d; S=0x347287a5; converted property
+ (Class)accountClass;	// 0x34728891
+ (Class)clientClass;	// 0x34728871
+ (id)supportedDataclasses;	// 0x34728845
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x34728b9d
- (BOOL)_keyIsShared:(id)shared;	// 0x34728aad
- (id)accountPropertyForKey:(id)key;	// 0x347288ed
- (void)dealloc;	// 0x347288a5
- (BOOL)enabledForDataclass:(int)dataclass;	// 0x347287c5
- (BOOL)isChildAccount;	// 0x347287a1
- (BOOL)isDisabled;	// 0x347287c1
// converted property getter: - (id)password;	// 0x34728b4d
- (id)persistentUUID;	// 0x34728831
- (void)removeAccountPropertyForKey:(id)key;	// 0x34728951
- (void)removePasswordFromKeychain;	// 0x347287a9
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x34728b2d
- (void)saveAccountProperties;	// 0x34728a49
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x34728bed
- (id)scheduleIdentifier;	// 0x34728811
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x34728995
// converted property setter: - (void)setPassword:(id)password;	// 0x347287a5
- (BOOL)supportsDataclass:(int)dataclass;	// 0x347287ad
- (id)username;	// 0x34728b6d
@end

