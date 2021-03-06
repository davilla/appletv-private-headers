/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOPlaceSearchRequest, GEOSessionID, GEOMapRegion, GEOLocation, NSString;

@interface GEOMapQuery : PBCodable {
	NSString *_query;	// 4 = 0x4
	BOOL _hasRequestType;	// 8 = 0x8
	int _requestType;	// 12 = 0xc
	BOOL _hasMapCenterX;	// 16 = 0x10
	int _mapCenterX;	// 20 = 0x14
	BOOL _hasMapCenterY;	// 24 = 0x18
	int _mapCenterY;	// 28 = 0x1c
	BOOL _hasMapSpanX;	// 32 = 0x20
	int _mapSpanX;	// 36 = 0x24
	BOOL _hasMapSpanY;	// 40 = 0x28
	int _mapSpanY;	// 44 = 0x2c
	BOOL _hasZoomlevel;	// 48 = 0x30
	int _zoomlevel;	// 52 = 0x34
	BOOL _hasClientImgFmt;	// 56 = 0x38
	int _clientImgFmt;	// 60 = 0x3c
	BOOL _hasTilesizeX;	// 64 = 0x40
	int _tilesizeX;	// 68 = 0x44
	BOOL _hasTilesizeY;	// 72 = 0x48
	int _tilesizeY;	// 76 = 0x4c
	BOOL _hasClientImgMaxWidth;	// 80 = 0x50
	int _clientImgMaxWidth;	// 84 = 0x54
	BOOL _hasClientImgMaxHeight;	// 88 = 0x58
	int _clientImgMaxHeight;	// 92 = 0x5c
	GEOMapRegion *_mapRegion;	// 96 = 0x60
	GEOLocation *_userLocation;	// 100 = 0x64
	GEOSessionID *_sessionID;	// 104 = 0x68
	GEOPlaceSearchRequest *_placeSearchRequest;	// 108 = 0x6c
}
@property(assign, nonatomic) int clientImgFmt;	// G=0x34be29e1; S=0x34be185d; @synthesize=_clientImgFmt
@property(assign, nonatomic) int clientImgMaxHeight;	// G=0x34be2aa1; S=0x34be18ed; @synthesize=_clientImgMaxHeight
@property(assign, nonatomic) int clientImgMaxWidth;	// G=0x34be2a71; S=0x34be18c9; @synthesize=_clientImgMaxWidth
@property(assign, nonatomic) BOOL hasClientImgFmt;	// G=0x34be29c1; S=0x34be29d1; @synthesize=_hasClientImgFmt
@property(assign, nonatomic) BOOL hasClientImgMaxHeight;	// G=0x34be2a81; S=0x34be2a91; @synthesize=_hasClientImgMaxHeight
@property(assign, nonatomic) BOOL hasClientImgMaxWidth;	// G=0x34be2a51; S=0x34be2a61; @synthesize=_hasClientImgMaxWidth
@property(assign, nonatomic) BOOL hasMapCenterX;	// G=0x34be28d1; S=0x34be28e1; @synthesize=_hasMapCenterX
@property(assign, nonatomic) BOOL hasMapCenterY;	// G=0x34be2901; S=0x34be2911; @synthesize=_hasMapCenterY
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x34be1911; 
@property(assign, nonatomic) BOOL hasMapSpanX;	// G=0x34be2931; S=0x34be2941; @synthesize=_hasMapSpanX
@property(assign, nonatomic) BOOL hasMapSpanY;	// G=0x34be2961; S=0x34be2971; @synthesize=_hasMapSpanY
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x34be1959; 
@property(readonly, assign, nonatomic) BOOL hasQuery;	// G=0x34be176d; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x34be28a1; S=0x34be28b1; @synthesize=_hasRequestType
@property(readonly, assign, nonatomic) BOOL hasSessionID;	// G=0x34be1941; 
@property(assign, nonatomic) BOOL hasTilesizeX;	// G=0x34be29f1; S=0x34be2a01; @synthesize=_hasTilesizeX
@property(assign, nonatomic) BOOL hasTilesizeY;	// G=0x34be2a21; S=0x34be2a31; @synthesize=_hasTilesizeY
@property(readonly, assign, nonatomic) BOOL hasUserLocation;	// G=0x34be1929; 
@property(assign, nonatomic) BOOL hasZoomlevel;	// G=0x34be2991; S=0x34be29a1; @synthesize=_hasZoomlevel
@property(assign, nonatomic) int mapCenterX;	// G=0x34be28f1; S=0x34be17a9; @synthesize=_mapCenterX
@property(assign, nonatomic) int mapCenterY;	// G=0x34be2921; S=0x34be17cd; @synthesize=_mapCenterY
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x34be2ab1; S=0x34be2ac1; @synthesize=_mapRegion
@property(assign, nonatomic) int mapSpanX;	// G=0x34be2951; S=0x34be17f1; @synthesize=_mapSpanX
@property(assign, nonatomic) int mapSpanY;	// G=0x34be2981; S=0x34be1815; @synthesize=_mapSpanY
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x34be2b4d; S=0x34be2b5d; @synthesize=_placeSearchRequest
@property(retain, nonatomic) NSString *query;	// G=0x34be286d; S=0x34be287d; @synthesize=_query
@property(assign, nonatomic) int requestType;	// G=0x34be28c1; S=0x34be1785; @synthesize=_requestType
@property(retain, nonatomic) GEOSessionID *sessionID;	// G=0x34be2b19; S=0x34be2b29; @synthesize=_sessionID
@property(assign, nonatomic) int tilesizeX;	// G=0x34be2a11; S=0x34be1881; @synthesize=_tilesizeX
@property(assign, nonatomic) int tilesizeY;	// G=0x34be2a41; S=0x34be18a5; @synthesize=_tilesizeY
@property(retain, nonatomic) GEOLocation *userLocation;	// G=0x34be2ae5; S=0x34be2af5; @synthesize=_userLocation
@property(assign, nonatomic) int zoomlevel;	// G=0x34be29b1; S=0x34be1839; @synthesize=_zoomlevel
// declared property getter: - (int)clientImgFmt;	// 0x34be29e1
// declared property getter: - (int)clientImgMaxHeight;	// 0x34be2aa1
// declared property getter: - (int)clientImgMaxWidth;	// 0x34be2a71
- (void)dealloc;	// 0x34be16d9
- (id)description;	// 0x34be1971
- (id)dictionaryRepresentation;	// 0x34be19e1
// declared property getter: - (BOOL)hasClientImgFmt;	// 0x34be29c1
// declared property getter: - (BOOL)hasClientImgMaxHeight;	// 0x34be2a81
// declared property getter: - (BOOL)hasClientImgMaxWidth;	// 0x34be2a51
// declared property getter: - (BOOL)hasMapCenterX;	// 0x34be28d1
// declared property getter: - (BOOL)hasMapCenterY;	// 0x34be2901
// declared property getter: - (BOOL)hasMapRegion;	// 0x34be1911
// declared property getter: - (BOOL)hasMapSpanX;	// 0x34be2931
// declared property getter: - (BOOL)hasMapSpanY;	// 0x34be2961
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x34be1959
// declared property getter: - (BOOL)hasQuery;	// 0x34be176d
// declared property getter: - (BOOL)hasRequestType;	// 0x34be28a1
// declared property getter: - (BOOL)hasSessionID;	// 0x34be1941
// declared property getter: - (BOOL)hasTilesizeX;	// 0x34be29f1
// declared property getter: - (BOOL)hasTilesizeY;	// 0x34be2a21
// declared property getter: - (BOOL)hasUserLocation;	// 0x34be1929
// declared property getter: - (BOOL)hasZoomlevel;	// 0x34be2991
// declared property getter: - (int)mapCenterX;	// 0x34be28f1
// declared property getter: - (int)mapCenterY;	// 0x34be2921
// declared property getter: - (id)mapRegion;	// 0x34be2ab1
// declared property getter: - (int)mapSpanX;	// 0x34be2951
// declared property getter: - (int)mapSpanY;	// 0x34be2981
// declared property getter: - (id)placeSearchRequest;	// 0x34be2b4d
// declared property getter: - (id)query;	// 0x34be286d
- (BOOL)readFrom:(id)from;	// 0x34be1ef5
// declared property getter: - (int)requestType;	// 0x34be28c1
// declared property getter: - (id)sessionID;	// 0x34be2b19
// declared property setter: - (void)setClientImgFmt:(int)fmt;	// 0x34be185d
// declared property setter: - (void)setClientImgMaxHeight:(int)height;	// 0x34be18ed
// declared property setter: - (void)setClientImgMaxWidth:(int)width;	// 0x34be18c9
// declared property setter: - (void)setHasClientImgFmt:(BOOL)fmt;	// 0x34be29d1
// declared property setter: - (void)setHasClientImgMaxHeight:(BOOL)height;	// 0x34be2a91
// declared property setter: - (void)setHasClientImgMaxWidth:(BOOL)width;	// 0x34be2a61
// declared property setter: - (void)setHasMapCenterX:(BOOL)x;	// 0x34be28e1
// declared property setter: - (void)setHasMapCenterY:(BOOL)y;	// 0x34be2911
// declared property setter: - (void)setHasMapSpanX:(BOOL)x;	// 0x34be2941
// declared property setter: - (void)setHasMapSpanY:(BOOL)y;	// 0x34be2971
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x34be28b1
// declared property setter: - (void)setHasTilesizeX:(BOOL)x;	// 0x34be2a01
// declared property setter: - (void)setHasTilesizeY:(BOOL)y;	// 0x34be2a31
// declared property setter: - (void)setHasZoomlevel:(BOOL)zoomlevel;	// 0x34be29a1
// declared property setter: - (void)setMapCenterX:(int)x;	// 0x34be17a9
// declared property setter: - (void)setMapCenterY:(int)y;	// 0x34be17cd
// declared property setter: - (void)setMapRegion:(id)region;	// 0x34be2ac1
// declared property setter: - (void)setMapSpanX:(int)x;	// 0x34be17f1
// declared property setter: - (void)setMapSpanY:(int)y;	// 0x34be1815
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x34be2b5d
// declared property setter: - (void)setQuery:(id)query;	// 0x34be287d
// declared property setter: - (void)setRequestType:(int)type;	// 0x34be1785
// declared property setter: - (void)setSessionID:(id)anId;	// 0x34be2b29
// declared property setter: - (void)setTilesizeX:(int)x;	// 0x34be1881
// declared property setter: - (void)setTilesizeY:(int)y;	// 0x34be18a5
// declared property setter: - (void)setUserLocation:(id)location;	// 0x34be2af5
// declared property setter: - (void)setZoomlevel:(int)zoomlevel;	// 0x34be1839
// declared property getter: - (int)tilesizeX;	// 0x34be2a11
// declared property getter: - (int)tilesizeY;	// 0x34be2a41
// declared property getter: - (id)userLocation;	// 0x34be2ae5
- (void)writeTo:(id)to;	// 0x34be23c1
// declared property getter: - (int)zoomlevel;	// 0x34be29b1
@end

