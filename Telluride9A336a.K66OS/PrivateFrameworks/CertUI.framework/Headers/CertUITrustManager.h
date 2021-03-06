/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library
#import "CertUI-Structs.h"

@class NSString;

@interface CertUITrustManager : NSObject {
	NSString *_access;	// 4 = 0x4
}
+ (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x338f1349
+ (id)defaultTrustManager;	// 0x338f07c9
+ (void)migrateFromVersionOne;	// 0x338f1699
+ (void)migrateFromVersionZero;	// 0x338f1659
- (id)init;	// 0x338f0889
- (id)initWithAccessGroup:(id)accessGroup;	// 0x338f0835
- (int)_actionForTrust:(SecTrust *)trust exceptions:(id)exceptions;	// 0x338f08e9
- (BOOL)_hasExceptionsForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x338f1211
- (int)actionForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x338f0c39
- (int)actionForSSLTrust:(SecTrust *)ssltrust hostname:(id)hostname service:(id)service;	// 0x338f0939
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x338f11e1
- (void)addSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x338f0f01
- (void)addSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x338f0d39
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x338f11f1
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x338f1201
- (void)dealloc;	// 0x338f089d
- (void)removeAllTrusts;	// 0x338f1109
- (void)removeSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x338f108d
- (void)removeSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x338f0f91
@end

