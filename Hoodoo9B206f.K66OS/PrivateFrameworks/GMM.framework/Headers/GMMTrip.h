/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMTrip : PBCodable {
	NSMutableArray *_routes;	// 4 = 0x4
	NSString *_tripSummary;	// 8 = 0x8
	BOOL _hasDetailLevel;	// 12 = 0xc
	int _detailLevel;	// 16 = 0x10
}
@property(assign, nonatomic) int detailLevel;	// G=0x33cd3ac5; S=0x33cd3ae9; @synthesize=_detailLevel
@property(assign, nonatomic) BOOL hasDetailLevel;	// G=0x33cd3fe9; S=0x33cd3ff9; @synthesize=_hasDetailLevel
@property(readonly, assign, nonatomic) BOOL hasTripSummary;	// G=0x33cd3aad; 
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x33cd3f81; S=0x33cd3f91; @synthesize=_routes
@property(retain, nonatomic) NSString *tripSummary;	// G=0x33cd3fb5; S=0x33cd3fc5; @synthesize=_tripSummary
- (void)addRoute:(id)route;	// 0x33cd3a09
- (id)altDescription;	// 0x33cec991
- (void)dealloc;	// 0x33cd39b1
- (id)description;	// 0x33cd3b0d
- (id)description;	// 0x33cb8729
// declared property getter: - (int)detailLevel;	// 0x33cd3ac5
- (id)dictionaryRepresentation;	// 0x33cd3b7d
// declared property getter: - (BOOL)hasDetailLevel;	// 0x33cd3fe9
// declared property getter: - (BOOL)hasTripSummary;	// 0x33cd3aad
- (BOOL)readFrom:(id)from;	// 0x33cd3c55
- (id)routeAtIndex:(unsigned)index;	// 0x33cd3a8d
// declared property getter: - (id)routes;	// 0x33cd3f81
- (unsigned)routesCount;	// 0x33cd3a6d
// declared property setter: - (void)setDetailLevel:(int)level;	// 0x33cd3ae9
// declared property setter: - (void)setHasDetailLevel:(BOOL)level;	// 0x33cd3ff9
// declared property setter: - (void)setRoutes:(id)routes;	// 0x33cd3f91
// declared property setter: - (void)setTripSummary:(id)summary;	// 0x33cd3fc5
// declared property getter: - (id)tripSummary;	// 0x33cd3fb5
- (void)writeTo:(id)to;	// 0x33cd3e19
@end

