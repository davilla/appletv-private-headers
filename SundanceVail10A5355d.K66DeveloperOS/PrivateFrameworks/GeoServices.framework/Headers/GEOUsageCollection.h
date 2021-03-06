/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOUsageCollection : PBCodable {
	XXStruct_t9EeIA _probeID;	// 4 = 0x4
	XXStruct_t9EeIA _sessionID;	// 20 = 0x14
	XXStruct_2ta5gB *_tileUsages;	// 36 = 0x24
	unsigned _tileUsagesCount;	// 40 = 0x28
	unsigned _tileUsagesSpace;	// 44 = 0x2c
	double _timestamp;	// 48 = 0x30
	int _cellWifi;	// 56 = 0x38
	NSString *_countryCode;	// 60 = 0x3c
	int _geoService;	// 64 = 0x40
	int _requestDataSize;	// 68 = 0x44
	int _responseDataSize;	// 72 = 0x48
	int _responseTime;	// 76 = 0x4c
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 80 = 0x50
}
@property(assign, nonatomic) int cellWifi;	// G=0x3457ba09; S=0x34579ff1; @synthesize=_cellWifi
@property(retain, nonatomic) NSString *countryCode;	// G=0x3457ba19; S=0x3457ba29; @synthesize=_countryCode
@property(assign, nonatomic) int geoService;	// G=0x3457b9c9; S=0x34579e85; @synthesize=_geoService
@property(assign, nonatomic) BOOL hasCellWifi;	// G=0x3457a039; S=0x3457a019; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x3457a04d; 
@property(assign, nonatomic) BOOL hasGeoService;	// G=0x34579ecd; S=0x34579ead; 
@property(assign, nonatomic) BOOL hasProbeID;	// G=0x3457a135; S=0x3457a119; 
@property(assign, nonatomic) BOOL hasRequestDataSize;	// G=0x34579f29; S=0x34579f09; 
@property(assign, nonatomic) BOOL hasResponseDataSize;	// G=0x34579f85; S=0x34579f65; 
@property(assign, nonatomic) BOOL hasResponseTime;	// G=0x34579fdd; S=0x34579fc1; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x3457a0c5; S=0x3457a0a5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x3457a19d; S=0x3457a17d; 
@property(assign, nonatomic) XXStruct_t9EeIA probeID;	// G=0x3457ba5d; S=0x3457a0d9; @synthesize=_probeID
@property(assign, nonatomic) int requestDataSize;	// G=0x3457b9d9; S=0x34579ee1; @synthesize=_requestDataSize
@property(assign, nonatomic) int responseDataSize;	// G=0x3457b9e9; S=0x34579f3d; @synthesize=_responseDataSize
@property(assign, nonatomic) int responseTime;	// G=0x3457b9f9; S=0x34579f99; @synthesize=_responseTime
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x3457ba39; S=0x3457a065; @synthesize=_sessionID
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *tileUsages;	// G=0x3457a1c1; 
@property(readonly, assign, nonatomic) unsigned tileUsagesCount;	// G=0x3457a1b1; 
@property(assign, nonatomic) double timestamp;	// G=0x3457ba81; S=0x3457a149; @synthesize=_timestamp
- (void)addTileUsage:(XXStruct_2ta5gB)usage;	// 0x3457a20d
// declared property getter: - (int)cellWifi;	// 0x3457ba09
- (void)clearTileUsages;	// 0x3457a1d1
- (void)copyTo:(id)to;	// 0x3457b1a9
// declared property getter: - (id)countryCode;	// 0x3457ba19
- (void)dealloc;	// 0x34579e31
- (id)description;	// 0x3457a419
- (id)dictionaryRepresentation;	// 0x3457a489
// declared property getter: - (int)geoService;	// 0x3457b9c9
// declared property getter: - (BOOL)hasCellWifi;	// 0x3457a039
// declared property getter: - (BOOL)hasCountryCode;	// 0x3457a04d
// declared property getter: - (BOOL)hasGeoService;	// 0x34579ecd
// declared property getter: - (BOOL)hasProbeID;	// 0x3457a135
// declared property getter: - (BOOL)hasRequestDataSize;	// 0x34579f29
// declared property getter: - (BOOL)hasResponseDataSize;	// 0x34579f85
// declared property getter: - (BOOL)hasResponseTime;	// 0x34579fdd
// declared property getter: - (BOOL)hasSessionID;	// 0x3457a0c5
// declared property getter: - (BOOL)hasTimestamp;	// 0x3457a19d
- (unsigned)hash;	// 0x3457b781
- (BOOL)isEqual:(id)equal;	// 0x3457b4d1
// declared property getter: - (XXStruct_t9EeIA)probeID;	// 0x3457ba5d
- (BOOL)readFrom:(id)from;	// 0x3457ae69
// declared property getter: - (int)requestDataSize;	// 0x3457b9d9
// declared property getter: - (int)responseDataSize;	// 0x3457b9e9
// declared property getter: - (int)responseTime;	// 0x3457b9f9
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x3457ba39
// declared property setter: - (void)setCellWifi:(int)wifi;	// 0x34579ff1
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3457ba29
// declared property setter: - (void)setGeoService:(int)service;	// 0x34579e85
// declared property setter: - (void)setHasCellWifi:(BOOL)wifi;	// 0x3457a019
// declared property setter: - (void)setHasGeoService:(BOOL)service;	// 0x34579ead
// declared property setter: - (void)setHasProbeID:(BOOL)anId;	// 0x3457a119
// declared property setter: - (void)setHasRequestDataSize:(BOOL)size;	// 0x34579f09
// declared property setter: - (void)setHasResponseDataSize:(BOOL)size;	// 0x34579f65
// declared property setter: - (void)setHasResponseTime:(BOOL)time;	// 0x34579fc1
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x3457a0a5
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x3457a17d
// declared property setter: - (void)setProbeID:(XXStruct_t9EeIA)anId;	// 0x3457a0d9
// declared property setter: - (void)setRequestDataSize:(int)size;	// 0x34579ee1
// declared property setter: - (void)setResponseDataSize:(int)size;	// 0x34579f3d
// declared property setter: - (void)setResponseTime:(int)time;	// 0x34579f99
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x3457a065
- (void)setTileUsages:(XXStruct_2ta5gB *)usages count:(unsigned)count;	// 0x3457a3c9
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3457a149
- (XXStruct_2ta5gB)tileUsageAtIndex:(unsigned)index;	// 0x3457a309
// declared property getter: - (XXStruct_2ta5gB *)tileUsages;	// 0x3457a1c1
// declared property getter: - (unsigned)tileUsagesCount;	// 0x3457a1b1
// declared property getter: - (double)timestamp;	// 0x3457ba81
- (void)writeTo:(id)to;	// 0x3457ae75
@end

