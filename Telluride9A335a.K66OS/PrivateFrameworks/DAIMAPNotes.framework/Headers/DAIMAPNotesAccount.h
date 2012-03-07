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
@property(readonly, assign) BasicAccount *imapMailAccount;	// G=0x30fa76dd; @synthesize=_imapMailAccount
@property(assign, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;	// G=0x30fa7635; S=0x30fa7669; 
@property(readonly, assign) BasicAccount *parent;	// G=0x30fa76cd; @synthesize=_parent
+ (Class)accountClass;	// 0x30fa732d
+ (Class)clientClass;	// 0x30fa7349
+ (id)defaultProperties;	// 0x30fa6dfd
+ (id)supportedDataclasses;	// 0x30fa7365
- (id)initWithParent:(id)parent imapMailAccount:(id)account childProperties:(id)properties;	// 0x30fa7061
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x30fa73bd
- (BOOL)accountNeedsUpgrade;	// 0x30fa7541
- (id)accountPropertyForKey:(id)key;	// 0x30fa723d
- (void)dealloc;	// 0x30fa72cd
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x30fa73a1
// declared property getter: - (id)imapMailAccount;	// 0x30fa76dd
// declared property getter: - (int)imapNotesAccountVersion;	// 0x30fa7635
- (BOOL)isChildAccount;	// 0x30fa70d9
- (BOOL)isDisabled;	// 0x30fa739d
// declared property getter: - (id)parent;	// 0x30fa76cd
- (id)persistentUUID;	// 0x30fa73ad
- (void)removeAccountPropertyForKey:(id)key;	// 0x30fa71f1
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x30fa72ad
- (void)saveAccountProperties;	// 0x30fa6ff1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x30fa6ef1
- (id)scheduleIdentifier;	// 0x30fa76ad
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x30fa70dd
// declared property setter: - (void)setIMAPNotesAccountVersion:(int)version;	// 0x30fa7669
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x30fa7391
- (BOOL)upgradeAccount;	// 0x30fa74b9
@end
