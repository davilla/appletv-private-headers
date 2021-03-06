/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMWaypointFeedback : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	NSString *_streetViewPanoId;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x33a9c115; 
@property(assign, nonatomic) int status;	// G=0x33a9c571; S=0x33a9c581; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x33a9c5c5; S=0x33a9c5d5; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x33a9c591; S=0x33a9c5a1; @synthesize=_waypoints
- (void)addWaypoint:(id)waypoint;	// 0x33a9c071
- (void)dealloc;	// 0x33a9c019
- (id)description;	// 0x33a9c12d
- (id)description;	// 0x33a8167d
- (id)dictionaryRepresentation;	// 0x33a9c19d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x33a9c115
- (BOOL)readFrom:(id)from;	// 0x33a9c251
// declared property setter: - (void)setStatus:(int)status;	// 0x33a9c581
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x33a9c5d5
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x33a9c5a1
// declared property getter: - (int)status;	// 0x33a9c571
// declared property getter: - (id)streetViewPanoId;	// 0x33a9c5c5
- (id)waypointAtIndex:(unsigned)index;	// 0x33a9c0f5
// declared property getter: - (id)waypoints;	// 0x33a9c591
- (unsigned)waypointsCount;	// 0x33a9c0d5
- (void)writeTo:(id)to;	// 0x33a9c415
@end

