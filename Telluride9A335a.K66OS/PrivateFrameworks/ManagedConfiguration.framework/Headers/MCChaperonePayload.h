/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData;

@interface MCChaperonePayload : MCPayload {
@private
	NSData *_pairingCertificateData;	// 40 = 0x28
	BOOL _nonChaperonePairingAllowed;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL nonChaperonePairingAllowed;	// G=0x304452c1; @synthesize=_nonChaperonePairingAllowed
@property(readonly, assign, nonatomic) NSData *pairingCertificateData;	// G=0x304452d1; @synthesize=_pairingCertificateData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3044532d
+ (id)typeStrings;	// 0x3044538d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30445589
- (void)dealloc;	// 0x304452e1
- (id)description;	// 0x304453bd
// declared property getter: - (BOOL)nonChaperonePairingAllowed;	// 0x304452c1
// declared property getter: - (id)pairingCertificateData;	// 0x304452d1
- (id)stubDictionary;	// 0x304454dd
- (id)subtitle1Description;	// 0x304454bd
- (id)subtitle1Label;	// 0x304454cd
- (id)subtitle2Description;	// 0x3044547d
- (id)subtitle2Label;	// 0x304454ad
@end
