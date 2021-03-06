/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray, GEOVCharacteristics;

__attribute__((visibility("hidden")))
@interface GEOVFeature : PBCodable {
	XXStruct_WmZAAA _extrusionHeights;	// 4 = 0x4
	XXStruct_WmZAAA _labelOffsets;	// 16 = 0x10
	XXStruct_WmZAAA _shieldLabelOffsets;	// 28 = 0x1c
	XXStruct_WmZAAA _shieldLabelTypes;	// 40 = 0x28
	unsigned long long _businessID;	// 52 = 0x34
	long long _uID;	// 60 = 0x3c
	unsigned _centerlineCount;	// 68 = 0x44
	unsigned _centerlineStart;	// 72 = 0x48
	GEOVCharacteristics *_characteristics;	// 76 = 0x4c
	float _endLaneWidth;	// 80 = 0x50
	float _endOffset;	// 84 = 0x54
	float _endRoadOffset;	// 88 = 0x58
	unsigned _entryPointMask;	// 92 = 0x5c
	int _formOfWay;	// 96 = 0x60
	float _minzoomRank;	// 100 = 0x64
	NSData *_oBSOLETECenterlines;	// 104 = 0x68
	NSData *_oBSOLETEShieldLabelPositions;	// 108 = 0x6c
	NSData *_oBSOLETEVertexLabelPositions;	// 112 = 0x70
	int _placeType;	// 116 = 0x74
	NSData *_pointLabelPosition;	// 120 = 0x78
	int _roadClass;	// 124 = 0x7c
	int _sectionCount;	// 128 = 0x80
	int _sectionStart;	// 132 = 0x84
	int _speedLimit;	// 136 = 0x88
	float _startLaneWidth;	// 140 = 0x8c
	float _startOffset;	// 144 = 0x90
	float _startRoadOffset;	// 148 = 0x94
	NSMutableArray *_styleAttributes;	// 152 = 0x98
	unsigned _styleGroup;	// 156 = 0x9c
	int _travelDirection;	// 160 = 0xa0
	int _type;	// 164 = 0xa4
	BOOL _polyIsConvex;	// 168 = 0xa8
	struct {
		unsigned businessID : 1;
		unsigned uID : 1;
		unsigned centerlineCount : 1;
		unsigned centerlineStart : 1;
		unsigned endLaneWidth : 1;
		unsigned endOffset : 1;
		unsigned endRoadOffset : 1;
		unsigned entryPointMask : 1;
		unsigned formOfWay : 1;
		unsigned minzoomRank : 1;
		unsigned placeType : 1;
		unsigned roadClass : 1;
		unsigned sectionCount : 1;
		unsigned sectionStart : 1;
		unsigned speedLimit : 1;
		unsigned startLaneWidth : 1;
		unsigned startOffset : 1;
		unsigned startRoadOffset : 1;
		unsigned styleGroup : 1;
		unsigned travelDirection : 1;
		unsigned type : 1;
		unsigned polyIsConvex : 1;
	} _has;	// 169 = 0xa9
}
@property(assign, nonatomic) unsigned long long businessID;	// G=0x34594809; S=0x3458ff4d; @synthesize=_businessID
@property(assign, nonatomic) unsigned centerlineCount;	// G=0x34594981; S=0x345905bd; @synthesize=_centerlineCount
@property(assign, nonatomic) unsigned centerlineStart;	// G=0x34594991; S=0x3459061d; @synthesize=_centerlineStart
@property(retain, nonatomic) GEOVCharacteristics *characteristics;	// G=0x34594911; S=0x34594921; @synthesize=_characteristics
@property(assign, nonatomic) float endLaneWidth;	// G=0x345949e1; S=0x34590801; @synthesize=_endLaneWidth
@property(assign, nonatomic) float endOffset;	// G=0x34594941; S=0x345904e5; @synthesize=_endOffset
@property(assign, nonatomic) float endRoadOffset;	// G=0x34594a01; S=0x345908c1; @synthesize=_endRoadOffset
@property(assign, nonatomic) unsigned entryPointMask;	// G=0x34594a11; S=0x34590921; @synthesize=_entryPointMask
@property(readonly, assign, nonatomic) int *extrusionHeights;	// G=0x34590379; 
@property(readonly, assign, nonatomic) unsigned extrusionHeightsCount;	// G=0x34590365; 
@property(assign, nonatomic) int formOfWay;	// G=0x34594851; S=0x345900d9; @synthesize=_formOfWay
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x3458ffa5; S=0x3458ff81; 
@property(assign, nonatomic) BOOL hasCenterlineCount;	// G=0x34590609; S=0x345905e5; 
@property(assign, nonatomic) BOOL hasCenterlineStart;	// G=0x34590669; S=0x34590645; 
@property(readonly, assign, nonatomic) BOOL hasCharacteristics;	// G=0x3459046d; 
@property(assign, nonatomic) BOOL hasEndLaneWidth;	// G=0x3459084d; S=0x34590829; 
@property(assign, nonatomic) BOOL hasEndOffset;	// G=0x34590531; S=0x3459050d; 
@property(assign, nonatomic) BOOL hasEndRoadOffset;	// G=0x3459090d; S=0x345908e9; 
@property(assign, nonatomic) BOOL hasEntryPointMask;	// G=0x3459096d; S=0x34590949; 
@property(assign, nonatomic) BOOL hasFormOfWay;	// G=0x34590125; S=0x34590101; 
@property(assign, nonatomic) BOOL hasMinzoomRank;	// G=0x34590591; S=0x3459056d; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETECenterlines;	// G=0x345905a5; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEShieldLabelPositions;	// G=0x3459028d; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEVertexLabelPositions;	// G=0x34590275; 
@property(assign, nonatomic) BOOL hasPlaceType;	// G=0x34590005; S=0x3458ffe1; 
@property(readonly, assign, nonatomic) BOOL hasPointLabelPosition;	// G=0x3459025d; 
@property(assign, nonatomic) BOOL hasPolyIsConvex;	// G=0x34590061; S=0x34590041; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x345900c5; S=0x345900a1; 
@property(assign, nonatomic) BOOL hasSectionCount;	// G=0x34590249; S=0x34590225; 
@property(assign, nonatomic) BOOL hasSectionStart;	// G=0x345901e9; S=0x345901c5; 
@property(assign, nonatomic) BOOL hasSpeedLimit;	// G=0x34590351; S=0x3459032d; 
@property(assign, nonatomic) BOOL hasStartLaneWidth;	// G=0x345907ed; S=0x345907d1; 
@property(assign, nonatomic) BOOL hasStartOffset;	// G=0x345904cd; S=0x345904ad; 
@property(assign, nonatomic) BOOL hasStartRoadOffset;	// G=0x345908a9; S=0x34590889; 
@property(assign, nonatomic) BOOL hasStyleGroup;	// G=0x345902ed; S=0x345902cd; 
@property(assign, nonatomic) BOOL hasTravelDirection;	// G=0x34590185; S=0x34590165; 
@property(assign, nonatomic) BOOL hasType;	// G=0x34590791; S=0x34590771; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x3458ff39; S=0x3458ff15; 
@property(readonly, assign, nonatomic) int *labelOffsets;	// G=0x3458fbdd; 
@property(readonly, assign, nonatomic) unsigned labelOffsetsCount;	// G=0x3458fbc9; 
@property(assign, nonatomic) float minzoomRank;	// G=0x34594951; S=0x34590545; @synthesize=_minzoomRank
@property(retain, nonatomic) NSData *oBSOLETECenterlines;	// G=0x34594961; S=0x34594971; @synthesize=_oBSOLETECenterlines
@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions;	// G=0x345948d1; S=0x345948e1; @synthesize=_oBSOLETEShieldLabelPositions
@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions;	// G=0x345948b1; S=0x345948c1; @synthesize=_oBSOLETEVertexLabelPositions
@property(assign, nonatomic) int placeType;	// G=0x34594821; S=0x3458ffb9; @synthesize=_placeType
@property(retain, nonatomic) NSData *pointLabelPosition;	// G=0x34594891; S=0x345948a1; @synthesize=_pointLabelPosition
@property(assign, nonatomic) BOOL polyIsConvex;	// G=0x34594831; S=0x34590019; @synthesize=_polyIsConvex
@property(assign, nonatomic) int roadClass;	// G=0x34594841; S=0x34590079; @synthesize=_roadClass
@property(assign, nonatomic) int sectionCount;	// G=0x34594881; S=0x345901fd; @synthesize=_sectionCount
@property(assign, nonatomic) int sectionStart;	// G=0x34594871; S=0x3459019d; @synthesize=_sectionStart
@property(readonly, assign, nonatomic) int *shieldLabelOffsets;	// G=0x3458fce5; 
@property(readonly, assign, nonatomic) unsigned shieldLabelOffsetsCount;	// G=0x3458fcd1; 
@property(readonly, assign, nonatomic) int *shieldLabelTypes;	// G=0x3458fded; 
@property(readonly, assign, nonatomic) unsigned shieldLabelTypesCount;	// G=0x3458fdd9; 
@property(assign, nonatomic) int speedLimit;	// G=0x34594901; S=0x34590305; @synthesize=_speedLimit
@property(assign, nonatomic) float startLaneWidth;	// G=0x345949d1; S=0x345907a9; @synthesize=_startLaneWidth
@property(assign, nonatomic) float startOffset;	// G=0x34594931; S=0x34590485; @synthesize=_startOffset
@property(assign, nonatomic) float startRoadOffset;	// G=0x345949f1; S=0x34590861; @synthesize=_startRoadOffset
@property(retain, nonatomic) NSMutableArray *styleAttributes;	// G=0x345949a1; S=0x345949b1; @synthesize=_styleAttributes
@property(assign, nonatomic) unsigned styleGroup;	// G=0x345948f1; S=0x345902a5; @synthesize=_styleGroup
@property(assign, nonatomic) int travelDirection;	// G=0x34594861; S=0x3459013d; @synthesize=_travelDirection
@property(assign, nonatomic) int type;	// G=0x345949c1; S=0x34590749; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x345947f1; S=0x3458fee1; @synthesize=_uID
- (void)addExtrusionHeight:(int)height;	// 0x3459039d
- (void)addLabelOffset:(int)offset;	// 0x3458fc01
- (void)addShieldLabelOffset:(int)offset;	// 0x3458fd09
- (void)addShieldLabelType:(int)type;	// 0x3458fe11
- (void)addStyleAttributes:(id)attributes;	// 0x3459069d
// declared property getter: - (unsigned long long)businessID;	// 0x34594809
// declared property getter: - (unsigned)centerlineCount;	// 0x34594981
// declared property getter: - (unsigned)centerlineStart;	// 0x34594991
// declared property getter: - (id)characteristics;	// 0x34594911
- (void)clearExtrusionHeights;	// 0x34590389
- (void)clearLabelOffsets;	// 0x3458fbed
- (void)clearShieldLabelOffsets;	// 0x3458fcf5
- (void)clearShieldLabelTypes;	// 0x3458fdfd
- (void)clearStyleAttributes;	// 0x3459067d
- (void)copyTo:(id)to;	// 0x3459300d
- (void)dealloc;	// 0x3458fad9
- (id)description;	// 0x34590981
- (id)dictionaryRepresentation;	// 0x345909f1
// declared property getter: - (float)endLaneWidth;	// 0x345949e1
// declared property getter: - (float)endOffset;	// 0x34594941
// declared property getter: - (float)endRoadOffset;	// 0x34594a01
// declared property getter: - (unsigned)entryPointMask;	// 0x34594a11
- (int)extrusionHeightAtIndex:(unsigned)index;	// 0x345903b1
// declared property getter: - (int *)extrusionHeights;	// 0x34590379
// declared property getter: - (unsigned)extrusionHeightsCount;	// 0x34590365
// declared property getter: - (int)formOfWay;	// 0x34594851
// declared property getter: - (BOOL)hasBusinessID;	// 0x3458ffa5
// declared property getter: - (BOOL)hasCenterlineCount;	// 0x34590609
// declared property getter: - (BOOL)hasCenterlineStart;	// 0x34590669
// declared property getter: - (BOOL)hasCharacteristics;	// 0x3459046d
// declared property getter: - (BOOL)hasEndLaneWidth;	// 0x3459084d
// declared property getter: - (BOOL)hasEndOffset;	// 0x34590531
// declared property getter: - (BOOL)hasEndRoadOffset;	// 0x3459090d
// declared property getter: - (BOOL)hasEntryPointMask;	// 0x3459096d
// declared property getter: - (BOOL)hasFormOfWay;	// 0x34590125
// declared property getter: - (BOOL)hasMinzoomRank;	// 0x34590591
// declared property getter: - (BOOL)hasOBSOLETECenterlines;	// 0x345905a5
// declared property getter: - (BOOL)hasOBSOLETEShieldLabelPositions;	// 0x3459028d
// declared property getter: - (BOOL)hasOBSOLETEVertexLabelPositions;	// 0x34590275
// declared property getter: - (BOOL)hasPlaceType;	// 0x34590005
// declared property getter: - (BOOL)hasPointLabelPosition;	// 0x3459025d
// declared property getter: - (BOOL)hasPolyIsConvex;	// 0x34590061
// declared property getter: - (BOOL)hasRoadClass;	// 0x345900c5
// declared property getter: - (BOOL)hasSectionCount;	// 0x34590249
// declared property getter: - (BOOL)hasSectionStart;	// 0x345901e9
// declared property getter: - (BOOL)hasSpeedLimit;	// 0x34590351
// declared property getter: - (BOOL)hasStartLaneWidth;	// 0x345907ed
// declared property getter: - (BOOL)hasStartOffset;	// 0x345904cd
// declared property getter: - (BOOL)hasStartRoadOffset;	// 0x345908a9
// declared property getter: - (BOOL)hasStyleGroup;	// 0x345902ed
// declared property getter: - (BOOL)hasTravelDirection;	// 0x34590185
// declared property getter: - (BOOL)hasType;	// 0x34590791
// declared property getter: - (BOOL)hasUID;	// 0x3458ff39
- (unsigned)hash;	// 0x34594019
- (BOOL)isEqual:(id)equal;	// 0x345938d1
- (int)labelOffsetAtIndex:(unsigned)index;	// 0x3458fc15
// declared property getter: - (int *)labelOffsets;	// 0x3458fbdd
// declared property getter: - (unsigned)labelOffsetsCount;	// 0x3458fbc9
// declared property getter: - (float)minzoomRank;	// 0x34594951
// declared property getter: - (id)oBSOLETECenterlines;	// 0x34594961
// declared property getter: - (id)oBSOLETEShieldLabelPositions;	// 0x345948d1
// declared property getter: - (id)oBSOLETEVertexLabelPositions;	// 0x345948b1
// declared property getter: - (int)placeType;	// 0x34594821
// declared property getter: - (id)pointLabelPosition;	// 0x34594891
// declared property getter: - (BOOL)polyIsConvex;	// 0x34594831
- (BOOL)readFrom:(id)from;	// 0x34592845
// declared property getter: - (int)roadClass;	// 0x34594841
// declared property getter: - (int)sectionCount;	// 0x34594881
// declared property getter: - (int)sectionStart;	// 0x34594871
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x3458ff4d
// declared property setter: - (void)setCenterlineCount:(unsigned)count;	// 0x345905bd
// declared property setter: - (void)setCenterlineStart:(unsigned)start;	// 0x3459061d
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x34594921
// declared property setter: - (void)setEndLaneWidth:(float)width;	// 0x34590801
// declared property setter: - (void)setEndOffset:(float)offset;	// 0x345904e5
// declared property setter: - (void)setEndRoadOffset:(float)offset;	// 0x345908c1
// declared property setter: - (void)setEntryPointMask:(unsigned)mask;	// 0x34590921
- (void)setExtrusionHeights:(int *)heights count:(unsigned)count;	// 0x34590455
// declared property setter: - (void)setFormOfWay:(int)way;	// 0x345900d9
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x3458ff81
// declared property setter: - (void)setHasCenterlineCount:(BOOL)count;	// 0x345905e5
// declared property setter: - (void)setHasCenterlineStart:(BOOL)start;	// 0x34590645
// declared property setter: - (void)setHasEndLaneWidth:(BOOL)width;	// 0x34590829
// declared property setter: - (void)setHasEndOffset:(BOOL)offset;	// 0x3459050d
// declared property setter: - (void)setHasEndRoadOffset:(BOOL)offset;	// 0x345908e9
// declared property setter: - (void)setHasEntryPointMask:(BOOL)mask;	// 0x34590949
// declared property setter: - (void)setHasFormOfWay:(BOOL)way;	// 0x34590101
// declared property setter: - (void)setHasMinzoomRank:(BOOL)rank;	// 0x3459056d
// declared property setter: - (void)setHasPlaceType:(BOOL)type;	// 0x3458ffe1
// declared property setter: - (void)setHasPolyIsConvex:(BOOL)convex;	// 0x34590041
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x345900a1
// declared property setter: - (void)setHasSectionCount:(BOOL)count;	// 0x34590225
// declared property setter: - (void)setHasSectionStart:(BOOL)start;	// 0x345901c5
// declared property setter: - (void)setHasSpeedLimit:(BOOL)limit;	// 0x3459032d
// declared property setter: - (void)setHasStartLaneWidth:(BOOL)width;	// 0x345907d1
// declared property setter: - (void)setHasStartOffset:(BOOL)offset;	// 0x345904ad
// declared property setter: - (void)setHasStartRoadOffset:(BOOL)offset;	// 0x34590889
// declared property setter: - (void)setHasStyleGroup:(BOOL)group;	// 0x345902cd
// declared property setter: - (void)setHasTravelDirection:(BOOL)direction;	// 0x34590165
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x34590771
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x3458ff15
- (void)setLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x3458fcb9
// declared property setter: - (void)setMinzoomRank:(float)rank;	// 0x34590545
// declared property setter: - (void)setOBSOLETECenterlines:(id)centerlines;	// 0x34594971
// declared property setter: - (void)setOBSOLETEShieldLabelPositions:(id)positions;	// 0x345948e1
// declared property setter: - (void)setOBSOLETEVertexLabelPositions:(id)positions;	// 0x345948c1
// declared property setter: - (void)setPlaceType:(int)type;	// 0x3458ffb9
// declared property setter: - (void)setPointLabelPosition:(id)position;	// 0x345948a1
// declared property setter: - (void)setPolyIsConvex:(BOOL)convex;	// 0x34590019
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x34590079
// declared property setter: - (void)setSectionCount:(int)count;	// 0x345901fd
// declared property setter: - (void)setSectionStart:(int)start;	// 0x3459019d
- (void)setShieldLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x3458fdc1
- (void)setShieldLabelTypes:(int *)types count:(unsigned)count;	// 0x3458fec9
// declared property setter: - (void)setSpeedLimit:(int)limit;	// 0x34590305
// declared property setter: - (void)setStartLaneWidth:(float)width;	// 0x345907a9
// declared property setter: - (void)setStartOffset:(float)offset;	// 0x34590485
// declared property setter: - (void)setStartRoadOffset:(float)offset;	// 0x34590861
// declared property setter: - (void)setStyleAttributes:(id)attributes;	// 0x345949b1
// declared property setter: - (void)setStyleGroup:(unsigned)group;	// 0x345902a5
// declared property setter: - (void)setTravelDirection:(int)direction;	// 0x3459013d
// declared property setter: - (void)setType:(int)type;	// 0x34590749
// declared property setter: - (void)setUID:(long long)uid;	// 0x3458fee1
- (int)shieldLabelOffsetAtIndex:(unsigned)index;	// 0x3458fd1d
// declared property getter: - (int *)shieldLabelOffsets;	// 0x3458fce5
// declared property getter: - (unsigned)shieldLabelOffsetsCount;	// 0x3458fcd1
- (int)shieldLabelTypeAtIndex:(unsigned)index;	// 0x3458fe25
// declared property getter: - (int *)shieldLabelTypes;	// 0x3458fded
// declared property getter: - (unsigned)shieldLabelTypesCount;	// 0x3458fdd9
// declared property getter: - (int)speedLimit;	// 0x34594901
// declared property getter: - (float)startLaneWidth;	// 0x345949d1
// declared property getter: - (float)startOffset;	// 0x34594931
// declared property getter: - (float)startRoadOffset;	// 0x345949f1
// declared property getter: - (id)styleAttributes;	// 0x345949a1
- (id)styleAttributesAtIndex:(unsigned)index;	// 0x34590729
- (unsigned)styleAttributesCount;	// 0x34590709
// declared property getter: - (unsigned)styleGroup;	// 0x345948f1
// declared property getter: - (int)travelDirection;	// 0x34594861
// declared property getter: - (int)type;	// 0x345949c1
// declared property getter: - (long long)uID;	// 0x345947f1
- (void)writeTo:(id)to;	// 0x34592851
@end

