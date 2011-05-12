/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {
@private
	NSString *_certificateFileName;	// 48 = 0x30
	NSData *_certificateData;	// 52 = 0x34
	NSString *_password;	// 56 = 0x38
	int _dataEncoding;	// 60 = 0x3c
}
@property(readonly, assign) NSData *certificateData;	// G=0x32b1f601; @synthesize=_certificateData
@property(readonly, assign) NSString *certificateFileName;	// G=0x32b1f621; @synthesize=_certificateFileName
@property(readonly, assign) int dataEncoding;	// G=0x32b1f611; @synthesize=_dataEncoding
@property(readonly, assign) NSString *password;	// G=0x32b1f5f1; @synthesize=_password
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b1fdc5
+ (id)typeStrings;	// 0x32b1f76d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b1f7c5
// declared property getter: - (id)certificateData;	// 0x32b1f601
// declared property getter: - (id)certificateFileName;	// 0x32b1f621
- (SecCertificate *)copyCertificate;	// 0x32b1fba9
// declared property getter: - (int)dataEncoding;	// 0x32b1f611
- (void)dealloc;	// 0x32b1f701
- (id)description;	// 0x32b1fced
- (id)installationWarnings;	// 0x32b1faad
- (BOOL)isIdentity;	// 0x32b1f631
- (BOOL)isSigned;	// 0x32b1f6bd
// declared property getter: - (id)password;	// 0x32b1f5f1
- (id)persistentResourceID;	// 0x32b1f699
@end

