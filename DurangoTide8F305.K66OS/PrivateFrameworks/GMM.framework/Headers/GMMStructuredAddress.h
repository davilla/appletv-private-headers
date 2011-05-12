/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMStructuredAddress : PBCodable {
@private
	NSString *_thoroughfare;	// 4 = 0x4
	NSString *_dependentLocality;	// 8 = 0x8
	NSString *_locality;	// 12 = 0xc
	NSString *_region;	// 16 = 0x10
	NSString *_postalCode;	// 20 = 0x14
	NSString *_countryCode;	// 24 = 0x18
	NSString *_countryName;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *countryCode;	// G=0x32b97bf1; S=0x32b98409; @synthesize=_countryCode
@property(retain, nonatomic) NSString *countryName;	// G=0x32b97be1; S=0x32b98431; @synthesize=_countryName
@property(retain, nonatomic) NSString *dependentLocality;	// G=0x32b97c31; S=0x32b98369; @synthesize=_dependentLocality
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x32b97bb9; 
@property(readonly, assign, nonatomic) BOOL hasCountryName;	// G=0x32b97bcd; 
@property(readonly, assign, nonatomic) BOOL hasDependentLocality;	// G=0x32b97b69; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x32b97b7d; 
@property(readonly, assign, nonatomic) BOOL hasPostalCode;	// G=0x32b97ba5; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x32b97b91; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x32b97b55; 
@property(retain, nonatomic) NSString *locality;	// G=0x32b97c21; S=0x32b98391; @synthesize=_locality
@property(retain, nonatomic) NSString *postalCode;	// G=0x32b97c01; S=0x32b983e1; @synthesize=_postalCode
@property(retain, nonatomic) NSString *region;	// G=0x32b97c11; S=0x32b983b9; @synthesize=_region
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x32b97c41; S=0x32b98341; @synthesize=_thoroughfare
- (id)init;	// 0x32b97c51
// declared property getter: - (id)countryCode;	// 0x32b97bf1
// declared property getter: - (id)countryName;	// 0x32b97be1
- (void)dealloc;	// 0x32b9828d
// declared property getter: - (id)dependentLocality;	// 0x32b97c31
- (id)description;	// 0x32b97da9
- (id)description;	// 0x32b84af1
- (id)dictionaryRepresentation;	// 0x32b97c7d
// declared property getter: - (BOOL)hasCountryCode;	// 0x32b97bb9
// declared property getter: - (BOOL)hasCountryName;	// 0x32b97bcd
// declared property getter: - (BOOL)hasDependentLocality;	// 0x32b97b69
// declared property getter: - (BOOL)hasLocality;	// 0x32b97b7d
// declared property getter: - (BOOL)hasPostalCode;	// 0x32b97ba5
// declared property getter: - (BOOL)hasRegion;	// 0x32b97b91
// declared property getter: - (BOOL)hasThoroughfare;	// 0x32b97b55
// declared property getter: - (id)locality;	// 0x32b97c21
// declared property getter: - (id)postalCode;	// 0x32b97c01
- (BOOL)readFrom:(id)from;	// 0x32b980fd
// declared property getter: - (id)region;	// 0x32b97c11
// declared property setter: - (void)setCountryCode:(id)code;	// 0x32b98409
// declared property setter: - (void)setCountryName:(id)name;	// 0x32b98431
// declared property setter: - (void)setDependentLocality:(id)locality;	// 0x32b98369
// declared property setter: - (void)setLocality:(id)locality;	// 0x32b98391
// declared property setter: - (void)setPostalCode:(id)code;	// 0x32b983e1
// declared property setter: - (void)setRegion:(id)region;	// 0x32b983b9
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x32b98341
// declared property getter: - (id)thoroughfare;	// 0x32b97c41
- (void)writeTo:(id)to;	// 0x32b97f89
@end

