/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <NSObject.h> // Unknown library
#import "ACDAccountStoreDelegate.h"

@class NSManagedObjectContext, NSMutableSet, NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, ACDAuthenticationManager, ACDAccountAccessManager;

@interface ACDServer : NSObject <ACDAccountStoreDelegate> {
	NSMutableSet *_clientAccountStores;	// 4 = 0x4
	NSMutableSet *_daemonAccountStores;	// 8 = 0x8
	NSMutableSet *_clientOAuthSigners;	// 12 = 0xc
	NSMutableSet *_daemonOAuthSigners;	// 16 = 0x10
@private
	NSString *_accountStorePath;	// 20 = 0x14
	NSManagedObjectContext *_accountStoreManagedObjectContext;	// 24 = 0x18
	NSManagedObjectModel *_managedObjectModel;	// 28 = 0x1c
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 32 = 0x20
	ACDAuthenticationManager *_authenticationManager;	// 36 = 0x24
	ACDAccountAccessManager *_accountAccessManager;	// 40 = 0x28
	dispatch_queue_s *_queue;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) ACDAccountAccessManager *accountAccessManager;	// G=0x324a7a75; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *accountStoreManagedObjectContext;	// G=0x324a8931; 
@property(readonly, assign, nonatomic) ACDAuthenticationManager *authenticationManager;	// G=0x324a7a1d; 
@property(readonly, assign, nonatomic) NSManagedObjectModel *managedObjectModel;	// G=0x324a8965; 
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x324a8b95; 
+ (id)sharedServer;	// 0x324a74fd
- (id)init;	// 0x324a7551
- (id)initWithAccountStorePath:(id)accountStorePath;	// 0x324a75fd
- (void).cxx_destruct;	// 0x324a91f9
- (void)_addAccountStoreProxy:(id)proxy;	// 0x324a7bbd
- (void)_addAccountStoreWithConnection:(xpc_connection_s *)connection;	// 0x324a7e41
- (void)_addOAuthSignerProxy:(id)proxy;	// 0x324a7d39
- (void)_addOAuthSignerWithConnection:(xpc_connection_s *)connection;	// 0x324a8389
- (BOOL)_databaseExists;	// 0x324a87c5
- (void)_removeAccountStoreProxy:(id)proxy;	// 0x324a7c79
- (void)_removeOAuthSignerProxy:(id)proxy;	// 0x324a7dbd
- (void)_removeSqliteFiles:(id)files storeURL:(id)url;	// 0x324a8a8d
- (void)_sanityCheckAccountStore:(id)store;	// 0x324a7acd
- (void)_setupAccountStoreManagedObjectContext;	// 0x324a881d
// declared property getter: - (id)accountAccessManager;	// 0x324a7a75
// declared property getter: - (id)accountStoreManagedObjectContext;	// 0x324a8931
- (void)accountStoredDidSaveAccounts:(id)accountStored;	// 0x324a8f49
// declared property getter: - (id)authenticationManager;	// 0x324a7a1d
- (void)credentialsDidChangeForAccountWithIdentifier:(id)credentials;	// 0x324a9071
- (void)dealloc;	// 0x324a7721
// declared property getter: - (id)managedObjectModel;	// 0x324a8965
// declared property getter: - (id)persistentStoreCoordinator;	// 0x324a8b95
- (void)setUpWithAccountStoreConnection:(xpc_connection_s *)accountStoreConnection oauthSignerConnection:(xpc_connection_s *)connection onQueue:(dispatch_queue_s *)queue;	// 0x324a7761
@end

