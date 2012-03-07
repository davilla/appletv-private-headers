/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapInfo, NSMutableArray, GMMDateTime, GMMDirectionsIconRequest;

__attribute__((visibility("hidden")))
@interface GMMDirectionsRequest : PBRequest {
	XXStruct_WmZAAA _modes;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 16 = 0x10
	GMMDateTime *_requestedDateTime;	// 20 = 0x14
	BOOL _hasRequestedTimeType;	// 24 = 0x18
	int _requestedTimeType;	// 28 = 0x1c
	BOOL _hasTripMaxCount;	// 32 = 0x20
	int _tripMaxCount;	// 36 = 0x24
	GMMDirectionsIconRequest *_iconRequest;	// 40 = 0x28
	BOOL _hasRequestedResultType;	// 44 = 0x2c
	int _requestedResultType;	// 48 = 0x30
	BOOL _hasResultPageOffset;	// 52 = 0x34
	int _resultPageOffset;	// 56 = 0x38
	GMMMapInfo *_mapViewport;	// 60 = 0x3c
	NSMutableArray *_options;	// 64 = 0x40
	BOOL _hasIncludeStreetViewPanoId;	// 68 = 0x44
	BOOL _includeStreetViewPanoId;	// 69 = 0x45
	BOOL _hasAddStepNoticesToInstructionText;	// 70 = 0x46
	BOOL _addStepNoticesToInstructionText;	// 71 = 0x47
	BOOL _hasIncludeStructuredInstructions;	// 72 = 0x48
	BOOL _includeStructuredInstructions;	// 73 = 0x49
	BOOL _hasReturnMultipleRoutes;	// 74 = 0x4a
	BOOL _returnMultipleRoutes;	// 75 = 0x4b
	BOOL _hasIncludeNonTransitAlternates;	// 76 = 0x4c
	BOOL _includeNonTransitAlternates;	// 77 = 0x4d
	BOOL _hasAltTripsMaxPoints;	// 78 = 0x4e
	int _altTripsMaxPoints;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL addStepNoticesToInstructionText;	// G=0x30b699f1; S=0x30b69a15; @synthesize=_addStepNoticesToInstructionText
@property(assign, nonatomic) int altTripsMaxPoints;	// G=0x30b6adc5; S=0x30b69b11; @synthesize=_altTripsMaxPoints
@property(assign, nonatomic) BOOL hasAddStepNoticesToInstructionText;	// G=0x30b6ad25; S=0x30b6ad35; @synthesize=_hasAddStepNoticesToInstructionText
@property(assign, nonatomic) BOOL hasAltTripsMaxPoints;	// G=0x30b6ada5; S=0x30b6adb5; @synthesize=_hasAltTripsMaxPoints
@property(readonly, assign, nonatomic) BOOL hasIconRequest;	// G=0x30b69845; 
@property(assign, nonatomic) BOOL hasIncludeNonTransitAlternates;	// G=0x30b6ad85; S=0x30b6ad95; @synthesize=_hasIncludeNonTransitAlternates
@property(assign, nonatomic) BOOL hasIncludeStreetViewPanoId;	// G=0x30b6ad05; S=0x30b6ad15; @synthesize=_hasIncludeStreetViewPanoId
@property(assign, nonatomic) BOOL hasIncludeStructuredInstructions;	// G=0x30b6ad45; S=0x30b6ad55; @synthesize=_hasIncludeStructuredInstructions
@property(readonly, assign, nonatomic) BOOL hasMapViewport;	// G=0x30b698ed; 
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x30b6979d; 
@property(assign, nonatomic) BOOL hasRequestedResultType;	// G=0x30b6ac5d; S=0x30b6ac6d; @synthesize=_hasRequestedResultType
@property(assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x30b6abe9; S=0x30b6abf9; @synthesize=_hasRequestedTimeType
@property(assign, nonatomic) BOOL hasResultPageOffset;	// G=0x30b6ac7d; S=0x30b6ac8d; @synthesize=_hasResultPageOffset
@property(assign, nonatomic) BOOL hasReturnMultipleRoutes;	// G=0x30b6ad65; S=0x30b6ad75; @synthesize=_hasReturnMultipleRoutes
@property(assign, nonatomic) BOOL hasTripMaxCount;	// G=0x30b6ac09; S=0x30b6ac19; @synthesize=_hasTripMaxCount
@property(retain, nonatomic) GMMDirectionsIconRequest *iconRequest;	// G=0x30b6ac29; S=0x30b6ac39; @synthesize=_iconRequest
@property(assign, nonatomic) BOOL includeNonTransitAlternates;	// G=0x30b69ac9; S=0x30b69aed; @synthesize=_includeNonTransitAlternates
@property(assign, nonatomic) BOOL includeStreetViewPanoId;	// G=0x30b699a9; S=0x30b699cd; @synthesize=_includeStreetViewPanoId
@property(assign, nonatomic) BOOL includeStructuredInstructions;	// G=0x30b69a39; S=0x30b69a5d; @synthesize=_includeStructuredInstructions
@property(retain, nonatomic) GMMMapInfo *mapViewport;	// G=0x30b6ac9d; S=0x30b6acad; @synthesize=_mapViewport
@property(readonly, assign, nonatomic) int *modes;	// G=0x30b69605; 
@property(readonly, assign, nonatomic) unsigned modesCount;	// G=0x30b695f1; 
@property(retain, nonatomic) NSMutableArray *options;	// G=0x30b6acd1; S=0x30b6ace1; @synthesize=_options
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x30b6abb5; S=0x30b6abc5; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedResultType;	// G=0x30b6985d; S=0x30b69881; @synthesize=_requestedResultType
@property(assign, nonatomic) int requestedTimeType;	// G=0x30b697b5; S=0x30b697d9; @synthesize=_requestedTimeType
@property(assign, nonatomic) int resultPageOffset;	// G=0x30b698a5; S=0x30b698c9; @synthesize=_resultPageOffset
@property(assign, nonatomic) BOOL returnMultipleRoutes;	// G=0x30b69a81; S=0x30b69aa5; @synthesize=_returnMultipleRoutes
@property(assign, nonatomic) int tripMaxCount;	// G=0x30b697fd; S=0x30b69821; @synthesize=_tripMaxCount
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x30b6ab81; S=0x30b6ab91; @synthesize=_waypoints
- (void)addMode:(int)mode;	// 0x30b69629
- (void)addOptions:(id)options;	// 0x30b69905
// declared property getter: - (BOOL)addStepNoticesToInstructionText;	// 0x30b699f1
- (void)addWaypoint:(id)waypoint;	// 0x30b696f9
// declared property getter: - (int)altTripsMaxPoints;	// 0x30b6adc5
- (void)clearModes;	// 0x30b69615
- (void)dealloc;	// 0x30b6954d
- (id)description;	// 0x30b69b35
- (id)dictionaryRepresentation;	// 0x30b69ba5
// declared property getter: - (BOOL)hasAddStepNoticesToInstructionText;	// 0x30b6ad25
// declared property getter: - (BOOL)hasAltTripsMaxPoints;	// 0x30b6ada5
// declared property getter: - (BOOL)hasIconRequest;	// 0x30b69845
// declared property getter: - (BOOL)hasIncludeNonTransitAlternates;	// 0x30b6ad85
// declared property getter: - (BOOL)hasIncludeStreetViewPanoId;	// 0x30b6ad05
// declared property getter: - (BOOL)hasIncludeStructuredInstructions;	// 0x30b6ad45
// declared property getter: - (BOOL)hasMapViewport;	// 0x30b698ed
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x30b6979d
// declared property getter: - (BOOL)hasRequestedResultType;	// 0x30b6ac5d
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x30b6abe9
// declared property getter: - (BOOL)hasResultPageOffset;	// 0x30b6ac7d
// declared property getter: - (BOOL)hasReturnMultipleRoutes;	// 0x30b6ad65
// declared property getter: - (BOOL)hasTripMaxCount;	// 0x30b6ac09
// declared property getter: - (id)iconRequest;	// 0x30b6ac29
// declared property getter: - (BOOL)includeNonTransitAlternates;	// 0x30b69ac9
// declared property getter: - (BOOL)includeStreetViewPanoId;	// 0x30b699a9
// declared property getter: - (BOOL)includeStructuredInstructions;	// 0x30b69a39
// declared property getter: - (id)mapViewport;	// 0x30b6ac9d
- (int)modeAtIndex:(unsigned)index;	// 0x30b6963d
// declared property getter: - (int *)modes;	// 0x30b69605
// declared property getter: - (unsigned)modesCount;	// 0x30b695f1
// declared property getter: - (id)options;	// 0x30b6acd1
- (id)optionsAtIndex:(unsigned)index;	// 0x30b69989
- (unsigned)optionsCount;	// 0x30b69969
- (BOOL)readFrom:(id)from;	// 0x30b69fb5
- (unsigned)requestTypeCode;	// 0x30b6ab61
// declared property getter: - (id)requestedDateTime;	// 0x30b6abb5
// declared property getter: - (int)requestedResultType;	// 0x30b6985d
// declared property getter: - (int)requestedTimeType;	// 0x30b697b5
- (Class)responseClass;	// 0x30b6ab65
// declared property getter: - (int)resultPageOffset;	// 0x30b698a5
// declared property getter: - (BOOL)returnMultipleRoutes;	// 0x30b69a81
// declared property setter: - (void)setAddStepNoticesToInstructionText:(BOOL)instructionText;	// 0x30b69a15
// declared property setter: - (void)setAltTripsMaxPoints:(int)points;	// 0x30b69b11
// declared property setter: - (void)setHasAddStepNoticesToInstructionText:(BOOL)instructionText;	// 0x30b6ad35
// declared property setter: - (void)setHasAltTripsMaxPoints:(BOOL)points;	// 0x30b6adb5
// declared property setter: - (void)setHasIncludeNonTransitAlternates:(BOOL)alternates;	// 0x30b6ad95
// declared property setter: - (void)setHasIncludeStreetViewPanoId:(BOOL)anId;	// 0x30b6ad15
// declared property setter: - (void)setHasIncludeStructuredInstructions:(BOOL)instructions;	// 0x30b6ad55
// declared property setter: - (void)setHasRequestedResultType:(BOOL)type;	// 0x30b6ac6d
// declared property setter: - (void)setHasRequestedTimeType:(BOOL)type;	// 0x30b6abf9
// declared property setter: - (void)setHasResultPageOffset:(BOOL)offset;	// 0x30b6ac8d
// declared property setter: - (void)setHasReturnMultipleRoutes:(BOOL)routes;	// 0x30b6ad75
// declared property setter: - (void)setHasTripMaxCount:(BOOL)count;	// 0x30b6ac19
// declared property setter: - (void)setIconRequest:(id)request;	// 0x30b6ac39
// declared property setter: - (void)setIncludeNonTransitAlternates:(BOOL)alternates;	// 0x30b69aed
// declared property setter: - (void)setIncludeStreetViewPanoId:(BOOL)anId;	// 0x30b699cd
// declared property setter: - (void)setIncludeStructuredInstructions:(BOOL)instructions;	// 0x30b69a5d
// declared property setter: - (void)setMapViewport:(id)viewport;	// 0x30b6acad
- (void)setModes:(int *)modes count:(unsigned)count;	// 0x30b696e1
// declared property setter: - (void)setOptions:(id)options;	// 0x30b6ace1
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x30b6abc5
// declared property setter: - (void)setRequestedResultType:(int)type;	// 0x30b69881
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x30b697d9
// declared property setter: - (void)setResultPageOffset:(int)offset;	// 0x30b698c9
// declared property setter: - (void)setReturnMultipleRoutes:(BOOL)routes;	// 0x30b69aa5
// declared property setter: - (void)setTripMaxCount:(int)count;	// 0x30b69821
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x30b6ab91
// declared property getter: - (int)tripMaxCount;	// 0x30b697fd
- (id)waypointAtIndex:(unsigned)index;	// 0x30b6977d
// declared property getter: - (id)waypoints;	// 0x30b6ab81
- (unsigned)waypointsCount;	// 0x30b6975d
- (void)writeTo:(id)to;	// 0x30b6a575
@end
