/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldResponse.h"


@interface GMMHasTrafficResponse : GMMOldResponse {
@private
	BOOL _hasTraffic;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL hasTraffic;	// G=0x30a8f111; S=0x30a8f121; @synthesize=_hasTraffic
+ (id)responseSubdataFromReader:(id)reader;	// 0x30a8f131
- (id)dictionaryRepresentation;	// 0x30a8f10d
// declared property getter: - (BOOL)hasTraffic;	// 0x30a8f111
- (BOOL)readFrom:(id)from;	// 0x30a8f161
// declared property setter: - (void)setHasTraffic:(BOOL)traffic;	// 0x30a8f121
- (void)writeTo:(id)to;	// 0x30a8f149
@end
