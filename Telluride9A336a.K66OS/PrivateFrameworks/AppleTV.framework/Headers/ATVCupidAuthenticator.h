/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class NSString, AAAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticator : ATVSharedCredentialsAuthenticator {
@private
	AAAccount *_authenticatingAppleAccount;	// 52 = 0x34
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0x33a1979d; 
@property(readonly, assign) NSString *basePath;	// G=0x33a19741; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0x33a1987d
- (void)_sendAuthenticationRequest;	// 0x33a194c9
// declared property getter: - (id)appleAccount;	// 0x33a1979d
// declared property getter: - (id)basePath;	// 0x33a19741
- (void)dealloc;	// 0x33a19405
- (id)makeAuthenticationController;	// 0x33a19451
- (BOOL)requiresPassword:(id *)password;	// 0x33a197c5
@end

