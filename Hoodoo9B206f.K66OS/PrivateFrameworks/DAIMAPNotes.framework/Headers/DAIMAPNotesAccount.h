/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
 */

#import <DAAccount.h> // Unknown library

@class BasicAccount;

@interface DAIMAPNotesAccount : DAAccount {
	BasicAccount *_parent;	// 64 = 0x40
	BasicAccount *_imapMailAccount;	// 68 = 0x44
}
@property(readonly, assign) BasicAccount *imapMailAccount;	// G=0x340886dd; @synthesize=_imapMailAccount
@property(assign, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;	// G=0x34088635; S=0x34088669; 
@property(readonly, assign) BasicAccount *parent;	// G=0x340886cd; @synthesize=_parent
+ (Class)accountClass;	// 0x3408832d
+ (Class)clientClass;	// 0x34088349
+ (id)defaultProperties;	// 0x34087dfd
+ (id)supportedDataclasses;	// 0x34088365
- (id)initWithParent:(id)parent imapMailAccount:(id)account childProperties:(id)properties;	// 0x34088061
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x340883bd
- (BOOL)accountNeedsUpgrade;	// 0x34088541
- (id)accountPropertyForKey:(id)key;	// 0x3408823d
- (void)dealloc;	// 0x340882cd
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x340883a1
// declared property getter: - (id)imapMailAccount;	// 0x340886dd
// declared property getter: - (int)imapNotesAccountVersion;	// 0x34088635
- (BOOL)isChildAccount;	// 0x340880d9
- (BOOL)isDisabled;	// 0x3408839d
// declared property getter: - (id)parent;	// 0x340886cd
- (id)persistentUUID;	// 0x340883ad
- (void)removeAccountPropertyForKey:(id)key;	// 0x340881f1
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x340882ad
- (void)saveAccountProperties;	// 0x34087ff1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x34087ef1
- (id)scheduleIdentifier;	// 0x340886ad
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x340880dd
// declared property setter: - (void)setIMAPNotesAccountVersion:(int)version;	// 0x34088669
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x34088391
- (BOOL)upgradeAccount;	// 0x340884b9
@end
