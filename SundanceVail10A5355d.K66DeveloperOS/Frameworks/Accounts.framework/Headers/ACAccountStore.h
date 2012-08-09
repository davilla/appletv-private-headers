/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "Accounts-Structs.h"
#import "XPCProxyTarget.h"
#import <NSObject.h> // Unknown library

@class XPCProxy, NSString, NSArray;
@protocol ACDAccountStoreProtocol;

@interface ACAccountStore : NSObject <XPCProxyTarget> {
	XPCProxy<ACDAccountStoreProtocol> *_accountStoreProxy;	// 4 = 0x4
	dispatch_queue_s *_connectionQueue;	// 8 = 0x8
	dispatch_queue_s *_replyQueue;	// 12 = 0xc
	xpc_connection_s *_connection;	// 16 = 0x10
	NSString *_clientBundleID;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) XPCProxy<ACDAccountStoreProtocol> *accountStoreProxy;	// G=0x357295bd; 
@property(readonly, assign, nonatomic) NSArray *accounts;	// G=0x35729b0d; 
+ (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x3572ecb5
+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x3572ed6d
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x3572ed11
- (id)init;	// 0x35728e21
- (id)initWithConnection:(xpc_connection_s *)connection;	// 0x35728f1d
- (id)initWithEffectiveBundleID:(id)effectiveBundleID;	// 0x35728f71
- (void).cxx_destruct;	// 0x3572eaed
- (void)_configureWithConnection:(xpc_connection_s *)connection;	// 0x3572920d
- (xpc_connection_s *)_newConnectionWithName:(const char *)name;	// 0x35729201
- (id)accessKeysForAccountType:(id)accountType;	// 0x3572db21
- (id)accessOptionsForBundleID:(id)bundleID accountType:(id)type;	// 0x3572e4d9
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)accountCredentials handler:(id)handler;	// 0x3572e96d
// declared property getter: - (id)accountStoreProxy;	// 0x357295bd
- (id)accountTypeWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x357298a9
- (id)accountWithIdentifier:(id)identifier;	// 0x35729631
// declared property getter: - (id)accounts;	// 0x35729b0d
- (id)accountsWithAccountType:(id)accountType;	// 0x35729e09
- (id)allAccountTypes;	// 0x3572c0cd
- (id)allDataclasses;	// 0x3572c3cd
- (id)appPermissionsForAccountType:(id)accountType;	// 0x3572dd95
- (id)childAccountsForAccount:(id)account;	// 0x3572cf61
- (void)clearAllPermissionsGrantedForAccountType:(id)accountType;	// 0x3572e1fd
- (void)clearPermissionGrantedForBundleID:(id)bundleID onAccountType:(id)type;	// 0x3572e0e5
- (id)credentialForAccount:(id)account;	// 0x3572c855
- (id)credentialForAccount:(id)account bundleID:(id)anId;	// 0x3572ca8d
- (void)dealloc;	// 0x357291a9
- (id)enabledDataclassesForAccount:(id)account;	// 0x3572d299
- (void)insertAccountDataclass:(id)dataclass withCompletionHandler:(id)completionHandler;	// 0x3572a8b1
- (void)insertAccountType:(id)type withCompletionHandler:(id)completionHandler;	// 0x3572a115
- (id)parentAccountForAccount:(id)account;	// 0x3572ccd5
- (BOOL)permissionForAccountType:(id)accountType;	// 0x3572e301
- (void)promptUserForCredentialsWithAccount:(id)account withHandler:(id)handler;	// 0x3572be7d
- (id)provisionedDataclassesForAccount:(id)account;	// 0x3572d4d1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3572ea85
- (void)removeAccount:(id)account withCompletionHandler:(id)completionHandler;	// 0x3572a629
- (void)removeAccountType:(id)type withCompletionHandler:(id)completionHandler;	// 0x3572a421
- (void)renewCredentialsForAccount:(id)account completion:(id)completion;	// 0x3572bc2d
- (void)requestAccessToAccountsWithType:(id)type options:(id)options completion:(id)completion;	// 0x3572b4dd
- (void)requestAccessToAccountsWithType:(id)type withCompletionHandler:(id)completionHandler;	// 0x3572b4bd
- (void)saveAccount:(id)account forPID:(id)pid withCompletionHandler:(id)completionHandler;	// 0x3572b1e9
- (void)saveAccount:(id)account withCompletionHandler:(id)completionHandler;	// 0x3572aaf5
- (void)saveVerifiedAccount:(id)account withCompletionHandler:(id)completionHandler;	// 0x3572af05
- (void)setNotificationsEnabled:(BOOL)enabled;	// 0x3572dd2d
- (void)setPermissionGranted:(BOOL)granted forBundleID:(id)bundleID onAccountType:(id)type;	// 0x3572dfa1
- (id)supportedDataclassesForAccountType:(id)accountType;	// 0x3572d709
- (id)syncableDataclassesForAccountType:(id)accountType;	// 0x3572d915
- (void)tearDownConnection;	// 0x35729531
- (id)typeForAccount:(id)account;	// 0x3572c5c9
- (id)typeIdentifierForDomain:(id)domain;	// 0x3572e6f9
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier;	// 0x3572eb21
- (void)verifyCredentialsForAccount:(id)account saveWhenAuthorized:(BOOL)authorized withHandler:(id)handler;	// 0x3572b9f9
- (void)verifyCredentialsForAccount:(id)account withHandler:(id)handler;	// 0x3572b7c9
@end
