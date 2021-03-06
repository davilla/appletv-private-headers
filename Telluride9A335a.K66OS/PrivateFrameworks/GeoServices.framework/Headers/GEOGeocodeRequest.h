/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOPlaceSearchRequest.h"
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
	unsigned short _provider;	// 140 = 0x8c
	NSString *_logRequestToFile;	// 144 = 0x90
	NSString *_logResponseToFile;	// 148 = 0x94
}
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x31d05509; S=0x31d05519; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x31d0553d; S=0x31d0554d; @synthesize=_logResponseToFile
@property(assign, nonatomic) unsigned short provider;	// G=0x31d054e9; S=0x31d054f9; @synthesize=_provider
- (id)init;	// 0x31d04c75
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x31d04dad
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x31d050e9
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x31d04cd9
- (void)dealloc;	// 0x31d051e9
- (unsigned)hash;	// 0x31d053d9
- (BOOL)isEqual:(id)equal;	// 0x31d05249
// declared property getter: - (id)logRequestToFile;	// 0x31d05509
// declared property getter: - (id)logResponseToFile;	// 0x31d0553d
// declared property getter: - (unsigned short)provider;	// 0x31d054e9
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x31d05519
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x31d0554d
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x31d054f9
@end

