/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DAKeychain : NSObject {
}
+ (id)sharedKeychain;	// 0x345f0c05
- (CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)persistentUUID accessibility:(int)accessibility;	// 0x345f0d6d
- (CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)persistentUUID;	// 0x345f0ce9
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)secAccessibility;	// 0x345f0c85
- (void)_removePersistentCredentialsForAccount:(id)account;	// 0x345f1091
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)dakeychainAccessibility;	// 0x345f0c4d
- (id)guessPasswordForURL:(id)url;	// 0x345f2b59
- (id)loadKeychainInformationsForURL:(id)url;	// 0x345f2229
- (id)passwordForAccountWithPersistentUUID:(id)persistentUUID expectedAccessibility:(int)accessibility shouldSetAccessibility:(BOOL)accessibility3 passwordExpected:(BOOL)expected;	// 0x345f0dc1
- (void)removeKeychainInformationsForURL:(id)url;	// 0x345f26ed
- (BOOL)removePasswordForAccount:(id)account withPersistentUUID:(id)persistentUUID;	// 0x345f14f1
- (BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;	// 0x345f1be5
- (BOOL)setPassword:(id)password forAccount:(id)account withPersistentUUID:(id)persistentUUID withAccessibility:(int)accessibility;	// 0x345f1335
@end

