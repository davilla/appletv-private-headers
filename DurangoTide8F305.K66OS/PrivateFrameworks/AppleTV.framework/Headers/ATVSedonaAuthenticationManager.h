/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRAuthenticationManager.h> // Unknown library


@interface ATVSedonaAuthenticationManager : BRAuthenticationManager {
}
@property(retain) id preferredAccount;	// G=0x307c5ff1; S=0x307c5f31; converted property
- (id)authenticationControllerWithAuthenticator:(id)authenticator;	// 0x307c603d
- (id)basicAccount;	// 0x307c5ebd
- (void)checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x307c5e65
// converted property getter: - (id)preferredAccount;	// 0x307c5ff1
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x307c5f31
@end

