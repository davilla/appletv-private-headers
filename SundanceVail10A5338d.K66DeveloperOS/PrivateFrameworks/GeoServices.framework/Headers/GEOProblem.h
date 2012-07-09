/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOPlace, NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse, GEOMapRegion, NSMutableArray, GEOLatLng, NSData;

@interface GEOProblem : PBCodable {
	XXStruct_t9EeIA _sessionID;	// 4 = 0x4
	XXStruct_WmZAAA _curlProblemTypes;	// 20 = 0x14
	XXStruct_WmZAAA _pinProblemTypes;	// 32 = 0x20
	XXStruct_WmZAAA _problemTypes;	// 44 = 0x2c
	NSString *_comments;	// 56 = 0x38
	NSMutableArray *_correctedFields;	// 60 = 0x3c
	GEOPlace *_correctedPlace;	// 64 = 0x40
	GEOLatLng *_correctedPosition;	// 68 = 0x44
	NSData *_directionsResponseID;	// 72 = 0x48
	NSString *_httpInfo;	// 76 = 0x4c
	float _mapZoomLevel;	// 80 = 0x50
	GEOPlace *_originalPlace;	// 84 = 0x54
	GEOLatLng *_pinDrop;	// 88 = 0x58
	int _pinType;	// 92 = 0x5c
	GEOPlaceSearchRequest *_placeSearchRequest;	// 96 = 0x60
	GEOPlaceSearchResponse *_placeSearchResponse;	// 100 = 0x64
	GEOMapRegion *_region;	// 104 = 0x68
	NSString *_syslog;	// 108 = 0x6c
@private
	NSString *_tileStateLog;	// 112 = 0x70
@protected
	NSData *_viewportImage;	// 116 = 0x74
	NSData *_viewportInfo;	// 120 = 0x78
	NSMutableArray *_visibleTileSets;	// 124 = 0x7c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 128 = 0x80
}
@property(retain, nonatomic) NSString *comments;	// G=0x324df225; S=0x324df235; @synthesize=_comments
@property(retain, nonatomic) NSMutableArray *correctedFields;	// G=0x324df315; S=0x324df325; @synthesize=_correctedFields
@property(retain, nonatomic) GEOPlace *correctedPlace;	// G=0x324df205; S=0x324df215; @synthesize=_correctedPlace
@property(retain, nonatomic) GEOLatLng *correctedPosition;	// G=0x324df335; S=0x324df345; @synthesize=_correctedPosition
@property(readonly, assign, nonatomic) int *curlProblemTypes;	// G=0x324dc4f1; 
@property(readonly, assign, nonatomic) unsigned curlProblemTypesCount;	// G=0x324dc4dd; 
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x324df395; S=0x324df3a5; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasComments;	// G=0x324dc21d; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPlace;	// G=0x324dc205; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPosition;	// G=0x324dc6b1; 
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x324dc6f9; 
@property(readonly, assign, nonatomic) BOOL hasHttpInfo;	// G=0x324dc235; 
@property(assign, nonatomic) BOOL hasMapZoomLevel;	// G=0x324dc2ad; S=0x324dc28d; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x324dc075; 
@property(readonly, assign, nonatomic) BOOL hasPinDrop;	// G=0x324dc3bd; 
@property(assign, nonatomic) BOOL hasPinType;	// G=0x324dc759; S=0x324dc739; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x324dc6c9; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchResponse;	// G=0x324dc6e1; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x324dc24d; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x324dc0e9; S=0x324dc0cd; 
@property(readonly, assign, nonatomic) BOOL hasSyslog;	// G=0x324dc76d; 
@property(readonly, assign, nonatomic) BOOL hasTileStateLog;	// G=0x324dc785; 
@property(readonly, assign, nonatomic) BOOL hasViewportImage;	// G=0x324dc38d; 
@property(readonly, assign, nonatomic) BOOL hasViewportInfo;	// G=0x324dc3a5; 
@property(retain, nonatomic) NSString *httpInfo;	// G=0x324df245; S=0x324df255; @synthesize=_httpInfo
@property(assign, nonatomic) float mapZoomLevel;	// G=0x324df285; S=0x324dc265; @synthesize=_mapZoomLevel
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x324df1c1; S=0x324df1d1; @synthesize=_originalPlace
@property(retain, nonatomic) GEOLatLng *pinDrop;	// G=0x324df2f5; S=0x324df305; @synthesize=_pinDrop
@property(readonly, assign, nonatomic) int *pinProblemTypes;	// G=0x324dc3e9; 
@property(readonly, assign, nonatomic) unsigned pinProblemTypesCount;	// G=0x324dc3d5; 
@property(assign, nonatomic) int pinType;	// G=0x324df3b5; S=0x324dc711; @synthesize=_pinType
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x324df355; S=0x324df365; @synthesize=_placeSearchRequest
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;	// G=0x324df375; S=0x324df385; @synthesize=_placeSearchResponse
@property(readonly, assign, nonatomic) int *problemTypes;	// G=0x324dc111; 
@property(readonly, assign, nonatomic) unsigned problemTypesCount;	// G=0x324dc0fd; 
@property(retain, nonatomic) GEOMapRegion *region;	// G=0x324df265; S=0x324df275; @synthesize=_region
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x324df1e1; S=0x324dc08d; @synthesize=_sessionID
@property(retain, nonatomic) NSString *syslog;	// G=0x324df3c5; S=0x324df3d5; @synthesize=_syslog
@property(retain, nonatomic) NSString *tileStateLog;	// G=0x324df3e5; S=0x324df3f5; @synthesize=_tileStateLog
@property(retain, nonatomic) NSData *viewportImage;	// G=0x324df2b5; S=0x324df2c5; @synthesize=_viewportImage
@property(retain, nonatomic) NSData *viewportInfo;	// G=0x324df2d5; S=0x324df2e5; @synthesize=_viewportInfo
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x324df295; S=0x324df2a5; @synthesize=_visibleTileSets
- (void)addCorrectedField:(id)field;	// 0x324dc605
- (void)addCurlProblemType:(int)type;	// 0x324dc515
- (void)addPinProblemType:(int)type;	// 0x324dc40d
- (void)addProblemType:(int)type;	// 0x324dc135
- (void)addVisibleTileSet:(id)set;	// 0x324dc2e1
- (void)clearCorrectedFields;	// 0x324dc5e5
- (void)clearCurlProblemTypes;	// 0x324dc501
- (void)clearPinProblemTypes;	// 0x324dc3f9
- (void)clearProblemTypes;	// 0x324dc121
- (void)clearVisibleTileSets;	// 0x324dc2c1
// declared property getter: - (id)comments;	// 0x324df225
- (void)copyTo:(id)to;	// 0x324de3b1
- (id)correctedFieldAtIndex:(unsigned)index;	// 0x324dc691
// declared property getter: - (id)correctedFields;	// 0x324df315
- (unsigned)correctedFieldsCount;	// 0x324dc671
// declared property getter: - (id)correctedPlace;	// 0x324df205
// declared property getter: - (id)correctedPosition;	// 0x324df335
- (int)curlProblemTypeAtIndex:(unsigned)index;	// 0x324dc529
// declared property getter: - (int *)curlProblemTypes;	// 0x324dc4f1
// declared property getter: - (unsigned)curlProblemTypesCount;	// 0x324dc4dd
- (void)dealloc;	// 0x324dbed1
- (id)description;	// 0x324dc79d
- (id)dictionaryRepresentation;	// 0x324dc80d
// declared property getter: - (id)directionsResponseID;	// 0x324df395
// declared property getter: - (BOOL)hasComments;	// 0x324dc21d
// declared property getter: - (BOOL)hasCorrectedPlace;	// 0x324dc205
// declared property getter: - (BOOL)hasCorrectedPosition;	// 0x324dc6b1
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x324dc6f9
// declared property getter: - (BOOL)hasHttpInfo;	// 0x324dc235
// declared property getter: - (BOOL)hasMapZoomLevel;	// 0x324dc2ad
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x324dc075
// declared property getter: - (BOOL)hasPinDrop;	// 0x324dc3bd
// declared property getter: - (BOOL)hasPinType;	// 0x324dc759
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x324dc6c9
// declared property getter: - (BOOL)hasPlaceSearchResponse;	// 0x324dc6e1
// declared property getter: - (BOOL)hasRegion;	// 0x324dc24d
// declared property getter: - (BOOL)hasSessionID;	// 0x324dc0e9
// declared property getter: - (BOOL)hasSyslog;	// 0x324dc76d
// declared property getter: - (BOOL)hasTileStateLog;	// 0x324dc785
// declared property getter: - (BOOL)hasViewportImage;	// 0x324dc38d
// declared property getter: - (BOOL)hasViewportInfo;	// 0x324dc3a5
- (unsigned)hash;	// 0x324deeb9
// declared property getter: - (id)httpInfo;	// 0x324df245
- (BOOL)isEqual:(id)equal;	// 0x324dea29
// declared property getter: - (float)mapZoomLevel;	// 0x324df285
// declared property getter: - (id)originalPlace;	// 0x324df1c1
// declared property getter: - (id)pinDrop;	// 0x324df2f5
- (int)pinProblemTypeAtIndex:(unsigned)index;	// 0x324dc421
// declared property getter: - (int *)pinProblemTypes;	// 0x324dc3e9
// declared property getter: - (unsigned)pinProblemTypesCount;	// 0x324dc3d5
// declared property getter: - (int)pinType;	// 0x324df3b5
// declared property getter: - (id)placeSearchRequest;	// 0x324df355
// declared property getter: - (id)placeSearchResponse;	// 0x324df375
- (int)problemTypeAtIndex:(unsigned)index;	// 0x324dc149
// declared property getter: - (int *)problemTypes;	// 0x324dc111
// declared property getter: - (unsigned)problemTypesCount;	// 0x324dc0fd
- (BOOL)readFrom:(id)from;	// 0x324dda79
// declared property getter: - (id)region;	// 0x324df265
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x324df1e1
// declared property setter: - (void)setComments:(id)comments;	// 0x324df235
// declared property setter: - (void)setCorrectedFields:(id)fields;	// 0x324df325
// declared property setter: - (void)setCorrectedPlace:(id)place;	// 0x324df215
// declared property setter: - (void)setCorrectedPosition:(id)position;	// 0x324df345
- (void)setCurlProblemTypes:(int *)types count:(unsigned)count;	// 0x324dc5cd
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x324df3a5
// declared property setter: - (void)setHasMapZoomLevel:(BOOL)level;	// 0x324dc28d
// declared property setter: - (void)setHasPinType:(BOOL)type;	// 0x324dc739
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x324dc0cd
// declared property setter: - (void)setHttpInfo:(id)info;	// 0x324df255
// declared property setter: - (void)setMapZoomLevel:(float)level;	// 0x324dc265
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x324df1d1
// declared property setter: - (void)setPinDrop:(id)drop;	// 0x324df305
- (void)setPinProblemTypes:(int *)types count:(unsigned)count;	// 0x324dc4c5
// declared property setter: - (void)setPinType:(int)type;	// 0x324dc711
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x324df365
// declared property setter: - (void)setPlaceSearchResponse:(id)response;	// 0x324df385
- (void)setProblemTypes:(int *)types count:(unsigned)count;	// 0x324dc1ed
// declared property setter: - (void)setRegion:(id)region;	// 0x324df275
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x324dc08d
// declared property setter: - (void)setSyslog:(id)syslog;	// 0x324df3d5
// declared property setter: - (void)setTileStateLog:(id)log;	// 0x324df3f5
// declared property setter: - (void)setViewportImage:(id)image;	// 0x324df2c5
// declared property setter: - (void)setViewportInfo:(id)info;	// 0x324df2e5
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x324df2a5
// declared property getter: - (id)syslog;	// 0x324df3c5
// declared property getter: - (id)tileStateLog;	// 0x324df3e5
// declared property getter: - (id)viewportImage;	// 0x324df2b5
// declared property getter: - (id)viewportInfo;	// 0x324df2d5
- (id)visibleTileSetAtIndex:(unsigned)index;	// 0x324dc36d
// declared property getter: - (id)visibleTileSets;	// 0x324df295
- (unsigned)visibleTileSetsCount;	// 0x324dc34d
- (void)writeTo:(id)to;	// 0x324dda85
@end
