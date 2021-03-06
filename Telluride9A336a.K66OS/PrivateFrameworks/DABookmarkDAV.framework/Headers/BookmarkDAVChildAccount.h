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
+ (Class)accountClass;	// 0x30012e81
+ (Class)clientClass;	// 0x30012e91
+ (id)supportedDataclasses;	// 0x30012ead
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3001293d
- (id)accountPropertyForKey:(id)key;	// 0x30012dc5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x30012a15
- (void)dealloc;	// 0x30012e35
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x30012ee9
- (BOOL)isChildAccount;	// 0x30012995
- (BOOL)isDisabled;	// 0x30012ee5
- (id)password;	// 0x300129d1
- (id)persistentUUID;	// 0x30012ef5
- (void)removeAccountPropertyForKey:(id)key;	// 0x30012d79
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x300129f1
- (void)saveAccountProperties;	// 0x30012bf5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x30012af5
- (id)scheduleIdentifier;	// 0x30012f05
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x30012c65
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x30012a11
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x30012ed9
- (id)username;	// 0x30012999
@end

