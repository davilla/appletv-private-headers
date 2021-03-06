/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "MSSearchDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, MSSearch, AAAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	MSSearch *_search;	// 8 = 0x8
	AAAccount *_account;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	int _attempts;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(retain, nonatomic) AAAccount *account;	// G=0x35fb6259; S=0x35fb6269; @synthesize=_account
- (id)init;	// 0x35fb5591
- (id)initWithAccount:(id)account;	// 0x35fb5625
- (void).cxx_destruct;	// 0x35fb6291
- (void)_validateToken:(id)token;	// 0x35fb5b71
- (void)_verify;	// 0x35fb585d
// declared property getter: - (id)account;	// 0x35fb6259
- (void)cancel;	// 0x35fb57d1
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x35fb5dfd
- (void)search:(id)search didFinishWithError:(id)error;	// 0x35fb611d
- (void)sendVerificationEmail;	// 0x35fb5679
// declared property setter: - (void)setAccount:(id)account;	// 0x35fb6269
- (void)verifyWithHandler:(id)handler;	// 0x35fb56f9
@end

