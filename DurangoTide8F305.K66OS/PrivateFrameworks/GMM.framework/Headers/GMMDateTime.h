/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMDateTime : PBCodable {
@private
	long long _secsSinceEpoch;	// 4 = 0x4
	int _timeZoneOffsetMin;	// 12 = 0xc
	BOOL _hasTimeZoneOffsetMin;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL hasTimeZoneOffsetMin;	// G=0x32b8d01d; @synthesize=_hasTimeZoneOffsetMin
@property(assign, nonatomic) long long secsSinceEpoch;	// G=0x32b8d03d; S=0x32b8d04d; @synthesize=_secsSinceEpoch
@property(assign, nonatomic) int timeZoneOffsetMin;	// G=0x32b8d02d; S=0x32b8d001; @synthesize=_timeZoneOffsetMin
- (id)init;	// 0x32b8d08d
- (void)dealloc;	// 0x32b8d061
- (id)description;	// 0x32b8d169
- (id)description;	// 0x32b84c1d
- (id)dictionaryRepresentation;	// 0x32b8d0b9
// declared property getter: - (BOOL)hasTimeZoneOffsetMin;	// 0x32b8d01d
- (BOOL)readFrom:(id)from;	// 0x32b8d2bd
// declared property getter: - (long long)secsSinceEpoch;	// 0x32b8d03d
// declared property setter: - (void)setSecsSinceEpoch:(long long)epoch;	// 0x32b8d04d
// declared property setter: - (void)setTimeZoneOffsetMin:(int)min;	// 0x32b8d001
// declared property getter: - (int)timeZoneOffsetMin;	// 0x32b8d02d
- (void)writeTo:(id)to;	// 0x32b8d251
@end

