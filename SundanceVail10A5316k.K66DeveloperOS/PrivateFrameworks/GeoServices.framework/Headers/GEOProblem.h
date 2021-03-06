/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, GEOPlace, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSMutableArray, NSData, GEOMapRegion, GEOLatLng;

@interface GEOProblem : PBCodable {
@private
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
	GEOPlaceSearchRequest *_placeSearchRequest;	// 92 = 0x5c
	GEOPlaceSearchResponse *_placeSearchResponse;	// 96 = 0x60
	GEOMapRegion *_region;	// 100 = 0x64
	NSData *_viewportImage;	// 104 = 0x68
	NSData *_viewportInfo;	// 108 = 0x6c
	NSMutableArray *_visibleTileSets;	// 112 = 0x70
	XXStruct_UvnNeB _has;	// 116 = 0x74
}
@property(retain, nonatomic) NSString *comments;	// G=0x34b7be65; S=0x34b7be75; @synthesize=_comments
@property(retain, nonatomic) NSMutableArray *correctedFields;	// G=0x34b7bf55; S=0x34b7bf65; @synthesize=_correctedFields
@property(retain, nonatomic) GEOPlace *correctedPlace;	// G=0x34b7be45; S=0x34b7be55; @synthesize=_correctedPlace
@property(retain, nonatomic) GEOLatLng *correctedPosition;	// G=0x34b7bf75; S=0x34b7bf85; @synthesize=_correctedPosition
@property(readonly, assign, nonatomic) int *curlProblemTypes;	// G=0x34b795a9; 
@property(readonly, assign, nonatomic) unsigned curlProblemTypesCount;	// G=0x34b79595; 
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x34b7bfd5; S=0x34b7bfe5; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasComments;	// G=0x34b792d5; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPlace;	// G=0x34b792bd; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPosition;	// G=0x34b79769; 
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x34b797b1; 
@property(readonly, assign, nonatomic) BOOL hasHttpInfo;	// G=0x34b792ed; 
@property(assign, nonatomic) BOOL hasMapZoomLevel;	// G=0x34b79365; S=0x34b79345; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x34b7912d; 
@property(readonly, assign, nonatomic) BOOL hasPinDrop;	// G=0x34b79475; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x34b79781; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchResponse;	// G=0x34b79799; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x34b79305; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x34b791a1; S=0x34b79185; 
@property(readonly, assign, nonatomic) BOOL hasViewportImage;	// G=0x34b79445; 
@property(readonly, assign, nonatomic) BOOL hasViewportInfo;	// G=0x34b7945d; 
@property(retain, nonatomic) NSString *httpInfo;	// G=0x34b7be85; S=0x34b7be95; @synthesize=_httpInfo
@property(assign, nonatomic) float mapZoomLevel;	// G=0x34b7bec5; S=0x34b7931d; @synthesize=_mapZoomLevel
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x34b7be01; S=0x34b7be11; @synthesize=_originalPlace
@property(retain, nonatomic) GEOLatLng *pinDrop;	// G=0x34b7bf35; S=0x34b7bf45; @synthesize=_pinDrop
@property(readonly, assign, nonatomic) int *pinProblemTypes;	// G=0x34b794a1; 
@property(readonly, assign, nonatomic) unsigned pinProblemTypesCount;	// G=0x34b7948d; 
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x34b7bf95; S=0x34b7bfa5; @synthesize=_placeSearchRequest
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;	// G=0x34b7bfb5; S=0x34b7bfc5; @synthesize=_placeSearchResponse
@property(readonly, assign, nonatomic) int *problemTypes;	// G=0x34b791c9; 
@property(readonly, assign, nonatomic) unsigned problemTypesCount;	// G=0x34b791b5; 
@property(retain, nonatomic) GEOMapRegion *region;	// G=0x34b7bea5; S=0x34b7beb5; @synthesize=_region
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x34b7be21; S=0x34b79145; @synthesize=_sessionID
@property(retain, nonatomic) NSData *viewportImage;	// G=0x34b7bef5; S=0x34b7bf05; @synthesize=_viewportImage
@property(retain, nonatomic) NSData *viewportInfo;	// G=0x34b7bf15; S=0x34b7bf25; @synthesize=_viewportInfo
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x34b7bed5; S=0x34b7bee5; @synthesize=_visibleTileSets
- (void)addCorrectedField:(id)field;	// 0x34b796bd
- (void)addCurlProblemType:(int)type;	// 0x34b795cd
- (void)addPinProblemType:(int)type;	// 0x34b794c5
- (void)addProblemType:(int)type;	// 0x34b791ed
- (void)addVisibleTileSet:(id)set;	// 0x34b79399
- (void)clearCorrectedFields;	// 0x34b7969d
- (void)clearCurlProblemTypes;	// 0x34b795b9
- (void)clearPinProblemTypes;	// 0x34b794b1
- (void)clearProblemTypes;	// 0x34b791d9
- (void)clearVisibleTileSets;	// 0x34b79379
// declared property getter: - (id)comments;	// 0x34b7be65
- (void)copyTo:(id)to;	// 0x34b7b1b9
- (id)correctedFieldAtIndex:(unsigned)index;	// 0x34b79749
// declared property getter: - (id)correctedFields;	// 0x34b7bf55
- (unsigned)correctedFieldsCount;	// 0x34b79729
// declared property getter: - (id)correctedPlace;	// 0x34b7be45
// declared property getter: - (id)correctedPosition;	// 0x34b7bf75
- (int)curlProblemTypeAtIndex:(unsigned)index;	// 0x34b795e1
// declared property getter: - (int *)curlProblemTypes;	// 0x34b795a9
// declared property getter: - (unsigned)curlProblemTypesCount;	// 0x34b79595
- (void)dealloc;	// 0x34b78fb1
- (id)description;	// 0x34b797c9
- (id)dictionaryRepresentation;	// 0x34b79839
// declared property getter: - (id)directionsResponseID;	// 0x34b7bfd5
// declared property getter: - (BOOL)hasComments;	// 0x34b792d5
// declared property getter: - (BOOL)hasCorrectedPlace;	// 0x34b792bd
// declared property getter: - (BOOL)hasCorrectedPosition;	// 0x34b79769
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x34b797b1
// declared property getter: - (BOOL)hasHttpInfo;	// 0x34b792ed
// declared property getter: - (BOOL)hasMapZoomLevel;	// 0x34b79365
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x34b7912d
// declared property getter: - (BOOL)hasPinDrop;	// 0x34b79475
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x34b79781
// declared property getter: - (BOOL)hasPlaceSearchResponse;	// 0x34b79799
// declared property getter: - (BOOL)hasRegion;	// 0x34b79305
// declared property getter: - (BOOL)hasSessionID;	// 0x34b791a1
// declared property getter: - (BOOL)hasViewportImage;	// 0x34b79445
// declared property getter: - (BOOL)hasViewportInfo;	// 0x34b7945d
- (unsigned)hash;	// 0x34b7bb69
// declared property getter: - (id)httpInfo;	// 0x34b7be85
- (BOOL)isEqual:(id)equal;	// 0x34b7b775
// declared property getter: - (float)mapZoomLevel;	// 0x34b7bec5
// declared property getter: - (id)originalPlace;	// 0x34b7be01
// declared property getter: - (id)pinDrop;	// 0x34b7bf35
- (int)pinProblemTypeAtIndex:(unsigned)index;	// 0x34b794d9
// declared property getter: - (int *)pinProblemTypes;	// 0x34b794a1
// declared property getter: - (unsigned)pinProblemTypesCount;	// 0x34b7948d
// declared property getter: - (id)placeSearchRequest;	// 0x34b7bf95
// declared property getter: - (id)placeSearchResponse;	// 0x34b7bfb5
- (int)problemTypeAtIndex:(unsigned)index;	// 0x34b79201
// declared property getter: - (int *)problemTypes;	// 0x34b791c9
// declared property getter: - (unsigned)problemTypesCount;	// 0x34b791b5
- (BOOL)readFrom:(id)from;	// 0x34b7a921
// declared property getter: - (id)region;	// 0x34b7bea5
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x34b7be21
// declared property setter: - (void)setComments:(id)comments;	// 0x34b7be75
// declared property setter: - (void)setCorrectedFields:(id)fields;	// 0x34b7bf65
// declared property setter: - (void)setCorrectedPlace:(id)place;	// 0x34b7be55
// declared property setter: - (void)setCorrectedPosition:(id)position;	// 0x34b7bf85
- (void)setCurlProblemTypes:(int *)types count:(unsigned)count;	// 0x34b79685
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x34b7bfe5
// declared property setter: - (void)setHasMapZoomLevel:(BOOL)level;	// 0x34b79345
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x34b79185
// declared property setter: - (void)setHttpInfo:(id)info;	// 0x34b7be95
// declared property setter: - (void)setMapZoomLevel:(float)level;	// 0x34b7931d
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x34b7be11
// declared property setter: - (void)setPinDrop:(id)drop;	// 0x34b7bf45
- (void)setPinProblemTypes:(int *)types count:(unsigned)count;	// 0x34b7957d
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x34b7bfa5
// declared property setter: - (void)setPlaceSearchResponse:(id)response;	// 0x34b7bfc5
- (void)setProblemTypes:(int *)types count:(unsigned)count;	// 0x34b792a5
// declared property setter: - (void)setRegion:(id)region;	// 0x34b7beb5
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x34b79145
// declared property setter: - (void)setViewportImage:(id)image;	// 0x34b7bf05
// declared property setter: - (void)setViewportInfo:(id)info;	// 0x34b7bf25
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x34b7bee5
// declared property getter: - (id)viewportImage;	// 0x34b7bef5
// declared property getter: - (id)viewportInfo;	// 0x34b7bf15
- (id)visibleTileSetAtIndex:(unsigned)index;	// 0x34b79425
// declared property getter: - (id)visibleTileSets;	// 0x34b7bed5
- (unsigned)visibleTileSetsCount;	// 0x34b79405
- (void)writeTo:(id)to;	// 0x34b7a92d
@end

