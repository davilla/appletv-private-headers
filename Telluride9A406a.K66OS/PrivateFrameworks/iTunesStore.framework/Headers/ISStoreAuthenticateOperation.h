/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSAuthenticateRequestDelegate.h"
#import "ISOperation.h"

@class SSAuthenticateRequest, NSNumber, SSAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
	NSNumber *_authenticatedDSID;	// 60 = 0x3c
	SSAuthenticateRequest *_request;	// 64 = 0x40
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x341d6ed5; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x341d6db1
- (id)_authenticatedDSID;	// 0x341d7499
- (void)_setAuthenticatedDSID:(id)dsid;	// 0x341d74f9
- (void)authenticateRequest:(id)request didReceiveResponse:(id)response;	// 0x341d71b5
- (id)authenticatedAccountDSID;	// 0x341d6f25
// declared property getter: - (id)authenticationContext;	// 0x341d6ed5
- (void)dealloc;	// 0x341d6e5d
- (void)request:(id)request didFailWithError:(id)error;	// 0x341d7431
- (void)run;	// 0x341d6f69
- (id)uniqueKey;	// 0x341d7145
@end

