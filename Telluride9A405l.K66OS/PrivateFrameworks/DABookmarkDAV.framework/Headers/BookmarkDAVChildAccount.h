/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import "BookmarkDAVAccount.h"

@class BasicAccount;

@interface BookmarkDAVChildAccount : BookmarkDAVAccount {
	BasicAccount *_parent;	// 76 = 0x4c
}
+ (Class)accountClass;	// 0x32190e81
+ (Class)clientClass;	// 0x32190e91
+ (id)supportedDataclasses;	// 0x32190ead
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3219093d
- (id)accountPropertyForKey:(id)key;	// 0x32190dc5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x32190a15
- (void)dealloc;	// 0x32190e35
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x32190ee9
- (BOOL)isChildAccount;	// 0x32190995
- (BOOL)isDisabled;	// 0x32190ee5
- (id)password;	// 0x321909d1
- (id)persistentUUID;	// 0x32190ef5
- (void)removeAccountPropertyForKey:(id)key;	// 0x32190d79
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x321909f1
- (void)saveAccountProperties;	// 0x32190bf5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x32190af5
- (id)scheduleIdentifier;	// 0x32190f05
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32190c65
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x32190a11
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32190ed9
- (id)username;	// 0x32190999
@end

