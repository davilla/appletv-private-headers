/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGLocation, LBSGCellularProfile, LBSGGeocodeRequest;

@interface LBSGLocRequestElement : PBRequest {
@private
	LBSGCellularProfile *_cellularProfile;	// 4 = 0x4
	LBSGLocation *_location;	// 8 = 0x8
	LBSGGeocodeRequest *_geocode;	// 12 = 0xc
}
@property(retain, nonatomic) LBSGCellularProfile *cellularProfile;	// G=0x34459409; S=0x34459a31; @synthesize=_cellularProfile
@property(retain, nonatomic) LBSGGeocodeRequest *geocode;	// G=0x344593e9; S=0x34459a81; @synthesize=_geocode
@property(readonly, assign, nonatomic) BOOL hasCellularProfile;	// G=0x344593ad; 
@property(readonly, assign, nonatomic) BOOL hasGeocode;	// G=0x344593d5; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x344593c1; 
@property(retain, nonatomic) LBSGLocation *location;	// G=0x344593f9; S=0x34459a59; @synthesize=_location
- (id)init;	// 0x34459419
// declared property getter: - (id)cellularProfile;	// 0x34459409
- (void)dealloc;	// 0x344599c5
- (id)description;	// 0x34459511
- (id)dictionaryRepresentation;	// 0x34459445
// declared property getter: - (id)geocode;	// 0x344593e9
// declared property getter: - (BOOL)hasCellularProfile;	// 0x344593ad
// declared property getter: - (BOOL)hasGeocode;	// 0x344593d5
// declared property getter: - (BOOL)hasLocation;	// 0x344593c1
// declared property getter: - (id)location;	// 0x344593f9
- (BOOL)readFrom:(id)from;	// 0x344597e9
// declared property setter: - (void)setCellularProfile:(id)profile;	// 0x34459a31
// declared property setter: - (void)setGeocode:(id)geocode;	// 0x34459a81
// declared property setter: - (void)setLocation:(id)location;	// 0x34459a59
- (void)writeTo:(id)to;	// 0x34459629
@end

