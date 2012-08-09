/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"

@class BRStateMachine;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAuthenticator : BRUserPasswordAuthenticator {
	unsigned char _currentAttempts;	// 12 = 0xc
	unsigned char _currentUnknownCancelations;	// 13 = 0xd
	BOOL _oneClick;	// 14 = 0xe
	BRStateMachine *_stateMachine;	// 16 = 0x10
	unsigned _scope;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned scope;	// G=0x630b9; S=0x630c9; @synthesize=_scope
+ (void)initialize;	// 0x6189d
+ (void)upgradeAccount:(id)account coder:(id)coder;	// 0x619a1
- (id)initWithAccount:(id)account;	// 0x61b29
- (void).cxx_destruct;	// 0x630d9
- (void)_cancelAuthenticationWithCode:(int)code;	// 0x63931
- (BOOL)_isAuthorizing;	// 0x62591
- (void)_libraryAuthCancelled:(id)cancelled;	// 0x64179
- (void)_libraryAuthFailed:(id)failed;	// 0x63f2d
- (void)_libraryAuthSucceeded:(id)succeeded;	// 0x63b39
- (void)_loginToStoreServices;	// 0x633b5
- (long)_loginToiTunes;	// 0x631b9
- (void)_logoutOfStoreServices;	// 0x63829
- (void)_logoutOfiTunes;	// 0x633b1
- (id)_makeAuthenticationController;	// 0x62071
- (void)_registerStateMachineBlocks;	// 0x626f1
- (unsigned)_scopeToSet;	// 0x630ed
- (void)_sendAuthenticationRequest;	// 0x6311d
- (void)dealloc;	// 0x61c8d
- (BOOL)requiresAuthentication;	// 0x61ef1
- (BOOL)requiresSpeedTestDisclosureAgreement;	// 0x61dc1
// declared property getter: - (unsigned)scope;	// 0x630b9
- (void)setOneClick:(BOOL)click;	// 0x61ee1
// declared property setter: - (void)setScope:(unsigned)scope;	// 0x630c9
- (BOOL)shouldOfferOneClickAuthorization;	// 0x61e0d
@end
