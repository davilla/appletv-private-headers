/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library
#import "CertUI-Structs.h"


@interface CertUITrustManager : NSObject {
}
+ (id)defaultServiceForProtocol:(id)protocol;	// 0x32499505
+ (id)defaultTrustManager;	// 0x32499631
- (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x32499b25
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x32499859
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x3249996d
- (void)clearAllTrustSettings;	// 0x324994e5
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x32499aa5
- (void)migrateFromVersionOne;	// 0x32499d71
- (void)migrateFromVersionZero;	// 0x324994ad
@end

