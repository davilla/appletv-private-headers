/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOTileAvailabilityRequest : NSObject {
	GEOTileKey _tileKey;	// 4 = 0x4
	GEOLatLng *_gmmLatLng;	// 20 = 0x14
}
@property(retain, nonatomic) GEOLatLng *gmmLatLng;	// G=0x3145ee09; S=0x3145ee19; @synthesize=_gmmLatLng
@property(readonly, assign) unsigned short providerID;	// G=0x3145edb9; 
@property(assign, nonatomic) GEOTileKey tileKey;	// G=0x3145edcd; S=0x3145ede9; @synthesize=_tileKey
- (void)dealloc;	// 0x3145ed6d
// declared property getter: - (id)gmmLatLng;	// 0x3145ee09
// declared property getter: - (unsigned short)providerID;	// 0x3145edb9
// declared property setter: - (void)setGmmLatLng:(id)lng;	// 0x3145ee19
// declared property setter: - (void)setTileKey:(GEOTileKey)key;	// 0x3145ede9
// declared property getter: - (GEOTileKey)tileKey;	// 0x3145edcd
@end

