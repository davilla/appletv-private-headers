/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDefaultAuthenticationManager.h"
#import "YTAuthenticatorDelegate.h"


__attribute__((visibility("hidden")))
@interface RUIYTAuthenticationManager : BRDefaultAuthenticationManager <YTAuthenticatorDelegate> {
}
- (id)init;	// 0x23aea1
- (void)_accountRemoved:(id)removed;	// 0x23b275
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x23b3bd
- (id)_currentAccount;	// 0x23b151
- (void)_removeDuplicatesOfAccount:(id)account;	// 0x23b4ed
- (void)authenticatorNeedsAccountAndPassword:(id)password;	// 0x23b445
@end

