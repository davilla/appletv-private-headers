/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCConfigurationProfile.h"
#import "ManagedConfiguration-Structs.h"


@interface MCCertificateWrapperProfile : MCConfigurationProfile {
}
+ (id)_basicWrapperProfileForCertificateName:(id)certificateName fileName:(id)name identifier:(id)identifier;	// 0x3308951d
+ (id)_identifierHashFromData:(id)data;	// 0x33089a05
+ (id)_wrapperPayloadDictWithCertData:(id)certData fileName:(id)name name:(id)name3 identifier:(id)identifier type:(id)type;	// 0x33089329
+ (id)_wrapperProfileForCertificate:(SecCertificate *)certificate fileName:(id)name certData:(id)data type:(id)type;	// 0x33089941
+ (id)_wrapperProfileForWAPICertificate:(SecCertificate *)wapicertificate fileName:(id)name PEMData:(id)data;	// 0x33089881
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)pemdata fileName:(id)name name:(id)name3 identifier:(id)identifier;	// 0x33089435
+ (id)wrapperProfileDictionaryWithCertificateData:(id)certificateData fileName:(id)name;	// 0x33089681
- (id)initWithDictionary:(id)dictionary originalData:(id)data allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x33089b7d
- (id)_certificatePayload;	// 0x330892ad
- (id)earliestCertificateExpiryDate;	// 0x33089301
- (BOOL)isSigned;	// 0x330892d9
- (id)stubDictionary;	// 0x3308961d
- (int)trustLevel;	// 0x33089ab1
@end
