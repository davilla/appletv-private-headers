/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <ACAccount.h> // Unknown library


@interface ACAccount (AppleID)
- (id)initWithAppleID:(id)appleID password:(id)password;	// 0x34cee8d9
- (id)_registeredBundles;	// 0x34ceeb19
- (id)appleID;	// 0x34cee9d5
- (BOOL)canRemoveAccount;	// 0x34ceeb35
- (id)dsid;	// 0x34ceea01
- (void)registerBundle:(id)bundle;	// 0x34ceea1d
- (void)setDSID:(id)dsid;	// 0x34cee9e5
- (void)unregisterBundle:(id)bundle;	// 0x34ceeac9
@end
