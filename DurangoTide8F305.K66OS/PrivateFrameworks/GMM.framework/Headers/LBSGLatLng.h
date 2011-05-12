/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGLatLng : PBCodable {
@private
	int _latE7;	// 4 = 0x4
	int _lngE7;	// 8 = 0x8
}
@property(assign) float lat;	// G=0x32b842c9; S=0x32b842f5; converted property
@property(assign, nonatomic) int latE7;	// G=0x32ba9acd; S=0x32ba9add; @synthesize=_latE7
@property(assign, nonatomic) int lngE7;	// G=0x32ba9aad; S=0x32ba9abd; @synthesize=_lngE7
@property(assign) float lon;	// G=0x32b84271; S=0x32b8429d; converted property
- (id)init;	// 0x32ba9b19
- (void)dealloc;	// 0x32ba9aed
- (id)description;	// 0x32ba9be1
- (id)dictionaryRepresentation;	// 0x32ba9b45
// converted property getter: - (float)lat;	// 0x32b842c9
// declared property getter: - (int)latE7;	// 0x32ba9acd
// declared property getter: - (int)lngE7;	// 0x32ba9aad
// converted property getter: - (float)lon;	// 0x32b84271
- (BOOL)readFrom:(id)from;	// 0x32ba9d11
// converted property setter: - (void)setLat:(float)lat;	// 0x32b842f5
// declared property setter: - (void)setLatE7:(int)a7;	// 0x32ba9add
// declared property setter: - (void)setLngE7:(int)a7;	// 0x32ba9abd
// converted property setter: - (void)setLon:(float)lon;	// 0x32b8429d
- (void)writeTo:(id)to;	// 0x32ba9cc5
@end

