/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, AASetupAssistantService, NSMutableDictionary, NSTimer;

@interface AADelegateAccountSetupHelper : NSObject {
	AASetupAssistantService *_aaService;	// 4 = 0x4
	NSArray *_delegatesToSetup;	// 8 = 0x8
	NSMutableArray *_pendingCompletionBundles;	// 12 = 0xc
	NSMutableDictionary *_assistantDelegates;	// 16 = 0x10
	NSTimer *_delegatesTimeout;	// 20 = 0x14
	id _handler;	// 24 = 0x18
}
- (id)init;	// 0x35fb77e5
- (void).cxx_destruct;	// 0x35fb8d61
- (id)_adjustResponseDictionary:(id)dictionary forAssistantDelegate:(id)assistantDelegate withIdentifier:(id)identifier;	// 0x35fb7eed
- (void)_completeDelegateSetupWithResponse:(id)response;	// 0x35fb8635
- (void)_delegateBundlesDidTimeout;	// 0x35fb7dd1
- (void)_delegateBundlesFinished;	// 0x35fb7db9
- (id)_loadAssistantDelegateBundles;	// 0x35fb7a39
- (void)_setupDelegateAccountsWithEmailChoice:(id)emailChoice;	// 0x35fb8c11
- (void)_storeDelegateTokensWithResponse:(id)response;	// 0x35fb8031
- (void)setupAppleIDDelegatesWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x35fb7885
- (void)setupiCloudDelegateWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x35fb7939
@end

