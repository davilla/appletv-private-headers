/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class BRAuthenticationController, BRAccount;

@interface BRAuthenticator : NSObject {
@private
	BOOL _isAuthenticating;	// 4 = 0x4
	BOOL _failedOnce;	// 5 = 0x5
	unsigned _scope;	// 8 = 0x8
	BRAccount *_account;	// 12 = 0xc
	BRAuthenticationController *_authenticationController;	// 16 = 0x10
	id _resources;	// 20 = 0x14
}
@property(readonly, assign) BRAccount *account;	// G=0x3302f125; @synthesize=_account
@property(assign) BRAuthenticationController *authenticationController;	// G=0x3302f115; S=0x3302f615; @synthesize=_authenticationController
@property(readonly, assign) BOOL failedOnce;	// G=0x3302f145; @synthesize=_failedOnce
@property(retain) id resources;	// G=0x3302f9e1; S=0x3302f9f9; @synthesize=_resources
@property(readonly, assign) unsigned scope;	// G=0x3302f135; @synthesize=_scope
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x3302f569
- (void)_cleanupAuthentication;	// 0x3302f155
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x3302f629
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x3302f675
- (void)_handleAuthenticationSucceeded;	// 0x3302f795
- (BOOL)_isAuthorizing;	// 0x3302f159
- (unsigned)_scopeToSet;	// 0x3302f1d1
// declared property getter: - (id)account;	// 0x3302f125
- (void)authenticate;	// 0x3302f8dd
// declared property getter: - (id)authenticationController;	// 0x3302f115
- (void)dealloc;	// 0x3302f50d
// declared property getter: - (BOOL)failedOnce;	// 0x3302f145
- (void)logout;	// 0x3302f409
- (id)makeAuthenticationController;	// 0x3302f111
- (BOOL)requiresAuthentication;	// 0x3302f4c5
// declared property getter: - (id)resources;	// 0x3302f9e1
// declared property getter: - (unsigned)scope;	// 0x3302f135
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x3302f615
// declared property setter: - (void)setResources:(id)resources;	// 0x3302f9f9
@end

