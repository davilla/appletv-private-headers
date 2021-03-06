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
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x32721ed5; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x32721db1
- (id)_authenticatedDSID;	// 0x32722499
- (void)_setAuthenticatedDSID:(id)dsid;	// 0x327224f9
- (void)authenticateRequest:(id)request didReceiveResponse:(id)response;	// 0x327221b5
- (id)authenticatedAccountDSID;	// 0x32721f25
// declared property getter: - (id)authenticationContext;	// 0x32721ed5
- (void)dealloc;	// 0x32721e5d
- (void)request:(id)request didFailWithError:(id)error;	// 0x32722431
- (void)run;	// 0x32721f69
- (id)uniqueKey;	// 0x32722145
@end

