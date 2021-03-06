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
@property(readonly, assign, nonatomic) BOOL nonChaperonePairingAllowed;	// G=0x330952c1; @synthesize=_nonChaperonePairingAllowed
@property(readonly, assign, nonatomic) NSData *pairingCertificateData;	// G=0x330952d1; @synthesize=_pairingCertificateData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3309532d
+ (id)typeStrings;	// 0x3309538d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33095589
- (void)dealloc;	// 0x330952e1
- (id)description;	// 0x330953bd
// declared property getter: - (BOOL)nonChaperonePairingAllowed;	// 0x330952c1
// declared property getter: - (id)pairingCertificateData;	// 0x330952d1
- (id)stubDictionary;	// 0x330954dd
- (id)subtitle1Description;	// 0x330954bd
- (id)subtitle1Label;	// 0x330954cd
- (id)subtitle2Description;	// 0x3309547d
- (id)subtitle2Label;	// 0x330954ad
@end

