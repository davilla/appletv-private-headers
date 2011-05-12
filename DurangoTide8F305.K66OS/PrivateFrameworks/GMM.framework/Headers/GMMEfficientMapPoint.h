/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMEfficientMapPoint : PBCodable {
@private
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int latitude;	// G=0x32b8d7c9; S=0x32b8d7d9; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x32b8d7a9; S=0x32b8d7b9; @synthesize=_longitude
- (id)init;	// 0x32b8d815
- (void)dealloc;	// 0x32b8d7e9
- (id)description;	// 0x32b8d8dd
- (id)dictionaryRepresentation;	// 0x32b8d841
// declared property getter: - (int)latitude;	// 0x32b8d7c9
// declared property getter: - (int)longitude;	// 0x32b8d7a9
- (BOOL)readFrom:(id)from;	// 0x32b8da0d
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x32b8d7d9
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x32b8d7b9
- (void)writeTo:(id)to;	// 0x32b8d9c1
@end

