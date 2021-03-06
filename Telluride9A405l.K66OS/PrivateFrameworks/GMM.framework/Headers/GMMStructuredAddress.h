/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMStructuredAddress : PBCodable {
	NSString *_thoroughfare;	// 4 = 0x4
	NSString *_dependentLocality;	// 8 = 0x8
	NSString *_locality;	// 12 = 0xc
	NSString *_region;	// 16 = 0x10
	NSString *_postalCode;	// 20 = 0x14
	NSString *_countryCode;	// 24 = 0x18
	NSString *_countryName;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *countryCode;	// G=0x3158a39d; S=0x3158a3ad; @synthesize=_countryCode
@property(retain, nonatomic) NSString *countryName;	// G=0x3158a3d1; S=0x3158a3e1; @synthesize=_countryName
@property(retain, nonatomic) NSString *dependentLocality;	// G=0x3158a2cd; S=0x3158a2dd; @synthesize=_dependentLocality
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x31589e15; 
@property(readonly, assign, nonatomic) BOOL hasCountryName;	// G=0x31589e2d; 
@property(readonly, assign, nonatomic) BOOL hasDependentLocality;	// G=0x31589db5; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x31589dcd; 
@property(readonly, assign, nonatomic) BOOL hasPostalCode;	// G=0x31589dfd; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x31589de5; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x31589d9d; 
@property(retain, nonatomic) NSString *locality;	// G=0x3158a301; S=0x3158a311; @synthesize=_locality
@property(retain, nonatomic) NSString *postalCode;	// G=0x3158a369; S=0x3158a379; @synthesize=_postalCode
@property(retain, nonatomic) NSString *region;	// G=0x3158a335; S=0x3158a345; @synthesize=_region
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x3158a299; S=0x3158a2a9; @synthesize=_thoroughfare
// declared property getter: - (id)countryCode;	// 0x3158a39d
// declared property getter: - (id)countryName;	// 0x3158a3d1
- (void)dealloc;	// 0x31589ce1
// declared property getter: - (id)dependentLocality;	// 0x3158a2cd
- (id)description;	// 0x31589e45
- (id)description;	// 0x31578ba1
- (id)dictionaryRepresentation;	// 0x31589eb5
// declared property getter: - (BOOL)hasCountryCode;	// 0x31589e15
// declared property getter: - (BOOL)hasCountryName;	// 0x31589e2d
// declared property getter: - (BOOL)hasDependentLocality;	// 0x31589db5
// declared property getter: - (BOOL)hasLocality;	// 0x31589dcd
// declared property getter: - (BOOL)hasPostalCode;	// 0x31589dfd
// declared property getter: - (BOOL)hasRegion;	// 0x31589de5
// declared property getter: - (BOOL)hasThoroughfare;	// 0x31589d9d
// declared property getter: - (id)locality;	// 0x3158a301
// declared property getter: - (id)postalCode;	// 0x3158a369
- (BOOL)readFrom:(id)from;	// 0x3158a011
// declared property getter: - (id)region;	// 0x3158a335
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3158a3ad
// declared property setter: - (void)setCountryName:(id)name;	// 0x3158a3e1
// declared property setter: - (void)setDependentLocality:(id)locality;	// 0x3158a2dd
// declared property setter: - (void)setLocality:(id)locality;	// 0x3158a311
// declared property setter: - (void)setPostalCode:(id)code;	// 0x3158a379
// declared property setter: - (void)setRegion:(id)region;	// 0x3158a345
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x3158a2a9
// declared property getter: - (id)thoroughfare;	// 0x3158a299
- (void)writeTo:(id)to;	// 0x3158a18d
@end

