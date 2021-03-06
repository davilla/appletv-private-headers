/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticating.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MEITunesHomeShareAuthenticator.h"

@class MEITunesStoreAuthenticator, NSString, MEITunesHomeShareAccount, BRUserPasswordAuthenticationController;

@interface MEITunesHomeShareAuthenticator : XXUnknownSuperclass <BRUserPasswordAuthenticating> {
	NSString *_userName;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	BOOL _failedOnce;	// 12 = 0xc
	BRUserPasswordAuthenticationController *_authenticationController;	// 16 = 0x10
	MEITunesHomeShareAccount *_account;	// 20 = 0x14
	MEITunesStoreAuthenticator *_itunesStoreAuthenticator;	// 24 = 0x18
}
@property(readonly, assign) MEITunesHomeShareAccount *account;	// G=0x4067d; @synthesize=_account
@property(assign) BRUserPasswordAuthenticationController *authenticationController;	// G=0x4068d; S=0x4069d; @synthesize=_authenticationController
@property(readonly, assign) MEITunesStoreAuthenticator *itunesStoreAuthenticator;	// G=0x4066d; @synthesize=_itunesStoreAuthenticator
- (id)initForAccount:(id)account itunesStoreAuthenticator:(id)authenticator;	// 0x40ce5
// declared property getter: - (id)account;	// 0x4067d
- (void)authenticate;	// 0x4092d
// declared property getter: - (id)authenticationController;	// 0x4068d
- (void)dealloc;	// 0x40c3d
// declared property getter: - (id)itunesStoreAuthenticator;	// 0x4066d
- (BOOL)requiresAuthentication;	// 0x40941
- (BOOL)requiresCoupleITunesAccount;	// 0x408f1
- (BOOL)requiresPassword:(id *)password;	// 0x409a5
- (BOOL)requiresUseITunesAccount:(id *)account;	// 0x40b95
- (BOOL)requiresUser:(id *)user;	// 0x40a4d
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x4069d
- (void)setCoupleITunesAccount:(BOOL)account;	// 0x40879
- (void)setPassword:(id)password;	// 0x4096d
- (void)setUseITunesAccount:(BOOL)account;	// 0x40af5
- (void)setUser:(id)user;	// 0x40a15
@end

@interface MEITunesHomeShareAuthenticator (Notifications)
- (void)_homeShareAuthenticationFinished:(id)finished;	// 0x406ad
@end

@interface MEITunesHomeShareAuthenticator (Private)
- (void)_sendAuthenticateRequest;	// 0x40da5
@end

