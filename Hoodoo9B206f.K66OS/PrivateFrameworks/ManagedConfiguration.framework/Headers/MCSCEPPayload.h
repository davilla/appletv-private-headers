/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSString, NSData, NSArray, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload {
@private
	NSString *_URLString;	// 48 = 0x30
	NSString *_CAInstanceName;	// 52 = 0x34
	NSString *_challenge;	// 56 = 0x38
	NSArray *_subject;	// 60 = 0x3c
	unsigned _keySize;	// 64 = 0x40
	int _usageFlags;	// 68 = 0x44
	NSData *_CAFingerprint;	// 72 = 0x48
	NSArray *_CACaps;	// 76 = 0x4c
	NSDictionary *_subjectAltName;	// 80 = 0x50
	unsigned _retries;	// 84 = 0x54
	unsigned _retryDelay;	// 88 = 0x58
}
@property(readonly, assign) NSArray *CACaps;	// G=0x319074e9; @synthesize=_CACaps
@property(readonly, assign) NSData *CAFingerprint;	// G=0x319074f9; @synthesize=_CAFingerprint
@property(readonly, assign) NSString *CAInstanceName;	// G=0x31907549; @synthesize=_CAInstanceName
@property(readonly, assign) NSString *URLString;	// G=0x31907559; @synthesize=_URLString
@property(readonly, assign) NSString *challenge;	// G=0x31907539; @synthesize=_challenge
@property(readonly, assign) unsigned keySize;	// G=0x31907519; @synthesize=_keySize
@property(readonly, assign) unsigned retries;	// G=0x319074c9; @synthesize=_retries
@property(readonly, assign) unsigned retryDelay;	// G=0x319074b9; @synthesize=_retryDelay
@property(readonly, assign) NSArray *subject;	// G=0x31907529; @synthesize=_subject
@property(readonly, assign) NSDictionary *subjectAltName;	// G=0x319074d9; @synthesize=_subjectAltName
@property(readonly, assign) int usageFlags;	// G=0x31907509; @synthesize=_usageFlags
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3190762d
+ (id)typeStrings;	// 0x3190768d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x319079e9
// declared property getter: - (id)CACaps;	// 0x319074e9
// declared property getter: - (id)CAFingerprint;	// 0x319074f9
// declared property getter: - (id)CAInstanceName;	// 0x31907549
// declared property getter: - (id)URLString;	// 0x31907559
// declared property getter: - (id)challenge;	// 0x31907539
- (SecCertificate *)copyCertificate;	// 0x3190799d
- (SecIdentity *)copyIdentityFromKeychain;	// 0x31907951
- (void)dealloc;	// 0x31907569
- (id)description;	// 0x319076b5
- (BOOL)isIdentity;	// 0x319074b5
- (BOOL)isRoot;	// 0x319074b1
// declared property getter: - (unsigned)keySize;	// 0x31907519
// declared property getter: - (unsigned)retries;	// 0x319074c9
// declared property getter: - (unsigned)retryDelay;	// 0x319074b9
- (id)stubDictionary;	// 0x319078d1
// declared property getter: - (id)subject;	// 0x31907529
// declared property getter: - (id)subjectAltName;	// 0x319074d9
// declared property getter: - (int)usageFlags;	// 0x31907509
@end
