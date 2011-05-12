/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library


@interface BasicAccount (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x30235215
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x30235329
@end

@interface BasicAccount (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x3023e9b1
- (id)subscribedCalendarRecords;	// 0x3023e991
@end

@interface BasicAccount (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x30241aed
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x30241b99
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x30241a81
- (BOOL)isValidIMAPNotesAccount;	// 0x30241a0d
@end

@interface BasicAccount (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x30242165
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x3024220d
- (BOOL)isValidCalDAVChildAccount;	// 0x302420a1
@end

@interface BasicAccount (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x30242415
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x3024248d
- (BOOL)isValidCardDAVChildAccount;	// 0x30242351
@end

@interface BasicAccount (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x30247221
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x30247299
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x3024715d
@end

