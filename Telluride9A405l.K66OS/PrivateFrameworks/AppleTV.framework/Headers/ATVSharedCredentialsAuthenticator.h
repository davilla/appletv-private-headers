/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAuthenticator.h"


@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
@private
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 44 = 0x2c
	BOOL _usingSharedCredentials;	// 48 = 0x30
	BOOL _setSharedCredentialsIsEnabled;	// 49 = 0x31
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x35f27dc1; S=0x35f27dd1; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x35f27d69; S=0x35f27d7d; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x35f27da1; S=0x35f27db1; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account scope:(unsigned)scope sharedAuthenticator:(id)authenticator;	// 0x35f27949
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x35f27d21
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x35f27cd9
- (void)_handleAuthenticationSucceeded;	// 0x35f27c95
- (BOOL)canSetSharedCredentials;	// 0x35f27b09
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x35f279dd
- (void)dealloc;	// 0x35f27991
- (BOOL)requiresPassword:(id *)password;	// 0x35f27c45
- (BOOL)requiresUser:(id *)user;	// 0x35f27bf5
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x35f27dd1
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x35f27d7d
- (void)setSharedCredentials;	// 0x35f27b69
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x35f27dc1
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x35f27db1
// declared property getter: - (id)sharedAuthenticator;	// 0x35f27d69
- (void)useSharedCredentials;	// 0x35f27a71
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x35f27da1
@end
