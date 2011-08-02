/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library


@interface MCCrypto : NSObject {
}
+ (id)_decryptionFailedError;	// 0x340fba6d
+ (SecCertificate *)copyCertificateRefFromPEMData:(id)pemdata;	// 0x340fbc1d
+ (SecCertificate *)copyCertificateRefFromPKCS1Data:(id)pkcs1Data;	// 0x340fba39
+ (BOOL)isValidPKCS12Data:(id)data;	// 0x340fba51
+ (id)objectFromEncryptedData:(id)encryptedData outCertificate:(SecCertificate **)certificate outError:(id *)error;	// 0x340fbaf5
@end

