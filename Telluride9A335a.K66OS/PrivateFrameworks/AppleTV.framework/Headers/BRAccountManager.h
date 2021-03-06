/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary, NSMutableArray;

@interface BRAccountManager : BRSingleton {
@private
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	NSMutableDictionary *_preferredAccounts;	// 20 = 0x14
	NSMutableArray *_pendingAccounts;	// 24 = 0x18
}
+ (void)initialize;	// 0x3426f325
+ (void)setSingleton:(id)singleton;	// 0x3426f315
+ (id)singleton;	// 0x3426f305
- (id)init;	// 0x3426f3d1
- (void)_accountDirty:(id)dirty;	// 0x34271061
- (void)_deleteAccount:(id)account;	// 0x34270f45
- (void)_load;	// 0x34270521
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x34270e0d
- (void)_save;	// 0x34270a5d
- (void)_saveAccount:(id)account;	// 0x34270bad
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x34270bc1
- (void)_savePrefs;	// 0x34270d51
- (id)accountWithName:(id)name ofType:(id)type;	// 0x3426fd55
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x3426fd79
- (id)accountsOfType:(id)type;	// 0x3426ff25
- (id)allAccounts;	// 0x3426fef9
- (void)clearPreferredAccountForType:(id)type;	// 0x3426f9c1
- (void)dealloc;	// 0x3426f571
- (void)evaluatePendingAccounts;	// 0x3426f651
- (BOOL)isAccountManaged:(id)managed;	// 0x3426ff79
- (void)manageAccount:(id)account;	// 0x3427003d
- (void)markAsPreferredAccount:(id)account;	// 0x3426fb25
- (id)preferredAccountForType:(id)type;	// 0x3426f851
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x342703c1
- (void)removeAccount:(id)account;	// 0x3427018d
@end

