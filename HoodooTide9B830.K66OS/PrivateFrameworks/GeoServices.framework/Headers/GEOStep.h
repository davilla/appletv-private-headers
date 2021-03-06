/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOTransitStop, NSString;

@interface GEOStep : PBCodable {
	NSString *_instructions;	// 4 = 0x4
	int _pointIndex;	// 8 = 0x8
	BOOL _hasRoadClass;	// 12 = 0xc
	int _roadClass;	// 16 = 0x10
	BOOL _hasDistance;	// 20 = 0x14
	int _distance;	// 24 = 0x18
	BOOL _hasExpectedTime;	// 28 = 0x1c
	int _expectedTime;	// 32 = 0x20
	BOOL _hasType;	// 36 = 0x24
	int _type;	// 40 = 0x28
	NSString *_maneuverIconName;	// 44 = 0x2c
	NSString *_maneuverPIPIconName;	// 48 = 0x30
	GEOTransitStop *_transitStop;	// 52 = 0x34
	NSString *_notice;	// 56 = 0x38
}
@property(assign, nonatomic) int distance;	// G=0x35f2b9a5; S=0x35f2b121; @synthesize=_distance
@property(assign, nonatomic) int expectedTime;	// G=0x35f2b9d5; S=0x35f2b145; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasDistance;	// G=0x35f2b985; S=0x35f2b995; @synthesize=_hasDistance
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x35f2b9b5; S=0x35f2b9c5; @synthesize=_hasExpectedTime
@property(readonly, assign, nonatomic) BOOL hasManeuverIconName;	// G=0x35f2b18d; 
@property(readonly, assign, nonatomic) BOOL hasManeuverPIPIconName;	// G=0x35f2b1a5; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x35f2b1d5; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x35f2b955; S=0x35f2b965; @synthesize=_hasRoadClass
@property(readonly, assign, nonatomic) BOOL hasTransitStop;	// G=0x35f2b1bd; 
@property(assign, nonatomic) BOOL hasType;	// G=0x35f2b9e5; S=0x35f2b9f5; @synthesize=_hasType
@property(retain, nonatomic) NSString *instructions;	// G=0x35f2b901; S=0x35f2b911; @synthesize=_instructions
@property(retain, nonatomic) NSString *maneuverIconName;	// G=0x35f2ba15; S=0x35f2ba25; @synthesize=_maneuverIconName
@property(retain, nonatomic) NSString *maneuverPIPIconName;	// G=0x35f2ba49; S=0x35f2ba59; @synthesize=_maneuverPIPIconName
@property(retain, nonatomic) NSString *notice;	// G=0x35f2bab1; S=0x35f2bac1; @synthesize=_notice
@property(assign, nonatomic) int pointIndex;	// G=0x35f2b935; S=0x35f2b945; @synthesize=_pointIndex
@property(assign, nonatomic) int roadClass;	// G=0x35f2b975; S=0x35f2b0fd; @synthesize=_roadClass
@property(retain, nonatomic) GEOTransitStop *transitStop;	// G=0x35f2ba7d; S=0x35f2ba8d; @synthesize=_transitStop
@property(assign, nonatomic) int type;	// G=0x35f2ba05; S=0x35f2b169; @synthesize=_type
- (void)dealloc;	// 0x35f2b069
- (id)description;	// 0x35f2b1ed
- (id)dictionaryRepresentation;	// 0x35f2b25d
// declared property getter: - (int)distance;	// 0x35f2b9a5
// declared property getter: - (int)expectedTime;	// 0x35f2b9d5
// declared property getter: - (BOOL)hasDistance;	// 0x35f2b985
// declared property getter: - (BOOL)hasExpectedTime;	// 0x35f2b9b5
// declared property getter: - (BOOL)hasManeuverIconName;	// 0x35f2b18d
// declared property getter: - (BOOL)hasManeuverPIPIconName;	// 0x35f2b1a5
// declared property getter: - (BOOL)hasNotice;	// 0x35f2b1d5
// declared property getter: - (BOOL)hasRoadClass;	// 0x35f2b955
// declared property getter: - (BOOL)hasTransitStop;	// 0x35f2b1bd
// declared property getter: - (BOOL)hasType;	// 0x35f2b9e5
// declared property getter: - (id)instructions;	// 0x35f2b901
// declared property getter: - (id)maneuverIconName;	// 0x35f2ba15
// declared property getter: - (id)maneuverPIPIconName;	// 0x35f2ba49
// declared property getter: - (id)notice;	// 0x35f2bab1
// declared property getter: - (int)pointIndex;	// 0x35f2b935
- (BOOL)readFrom:(id)from;	// 0x35f2b499
// declared property getter: - (int)roadClass;	// 0x35f2b975
// declared property setter: - (void)setDistance:(int)distance;	// 0x35f2b121
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x35f2b145
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x35f2b995
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x35f2b9c5
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x35f2b965
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x35f2b9f5
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x35f2b911
// declared property setter: - (void)setManeuverIconName:(id)name;	// 0x35f2ba25
// declared property setter: - (void)setManeuverPIPIconName:(id)name;	// 0x35f2ba59
// declared property setter: - (void)setNotice:(id)notice;	// 0x35f2bac1
// declared property setter: - (void)setPointIndex:(int)index;	// 0x35f2b945
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x35f2b0fd
// declared property setter: - (void)setTransitStop:(id)stop;	// 0x35f2ba8d
// declared property setter: - (void)setType:(int)type;	// 0x35f2b169
// declared property getter: - (id)transitStop;	// 0x35f2ba7d
// declared property getter: - (int)type;	// 0x35f2ba05
- (void)writeTo:(id)to;	// 0x35f2b721
@end

