/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMOutgoingThumbnail : PBCodable {
	int _width;	// 4 = 0x4
	int _height;	// 8 = 0x8
}
@property(assign, nonatomic) int height;	// G=0x33ab21cd; S=0x33ab21dd; @synthesize=_height
@property(assign, nonatomic) int width;	// G=0x33ab21ad; S=0x33ab21bd; @synthesize=_width
- (void)dealloc;	// 0x33ab1f29
- (id)description;	// 0x33ab1f55
- (id)dictionaryRepresentation;	// 0x33ab1fc5
// declared property getter: - (int)height;	// 0x33ab21cd
- (BOOL)readFrom:(id)from;	// 0x33ab2071
// declared property setter: - (void)setHeight:(int)height;	// 0x33ab21dd
// declared property setter: - (void)setWidth:(int)width;	// 0x33ab21bd
// declared property getter: - (int)width;	// 0x33ab21ad
- (void)writeTo:(id)to;	// 0x33ab2165
@end

