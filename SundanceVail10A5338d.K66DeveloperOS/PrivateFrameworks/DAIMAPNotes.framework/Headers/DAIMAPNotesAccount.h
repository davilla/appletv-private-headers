/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
 */

#import <DAAccount.h> // Unknown library

@class BasicAccount;

@interface DAIMAPNotesAccount : DAAccount {
	BasicAccount *_parent;	// 60 = 0x3c
	BasicAccount *_imapMailAccount;	// 64 = 0x40
}
@property(readonly, assign) BasicAccount *imapMailAccount;	// G=0x3394c6d9; @synthesize=_imapMailAccount
@property(assign, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;	// G=0x3394c62d; S=0x3394c661; 
@property(readonly, assign) BasicAccount *parent;	// G=0x3394c6c5; @synthesize=_parent
+ (Class)accountClass;	// 0x3394c319
+ (Class)clientClass;	// 0x3394c335
+ (id)defaultProperties;	// 0x3394bdf1
+ (id)supportedDataclasses;	// 0x3394c351
- (id)initWithParent:(id)parent imapMailAccount:(id)account childProperties:(id)properties;	// 0x3394c04d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3394c3a9
- (BOOL)accountNeedsUpgrade;	// 0x3394c52d
- (id)accountPropertyForKey:(id)key;	// 0x3394c229
- (void)dealloc;	// 0x3394c2b5
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3394c38d
// declared property getter: - (id)imapMailAccount;	// 0x3394c6d9
// declared property getter: - (int)imapNotesAccountVersion;	// 0x3394c62d
- (BOOL)isChildAccount;	// 0x3394c0c5
- (BOOL)isDisabled;	// 0x3394c389
// declared property getter: - (id)parent;	// 0x3394c6c5
- (id)persistentUUID;	// 0x3394c399
- (void)removeAccountPropertyForKey:(id)key;	// 0x3394c1dd
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3394c295
- (void)saveAccountProperties;	// 0x3394bfdd
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3394bee5
- (id)scheduleIdentifier;	// 0x3394c6a5
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3394c0c9
// declared property setter: - (void)setIMAPNotesAccountVersion:(int)version;	// 0x3394c661
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3394c37d
- (BOOL)upgradeAccount;	// 0x3394c4a5
@end

