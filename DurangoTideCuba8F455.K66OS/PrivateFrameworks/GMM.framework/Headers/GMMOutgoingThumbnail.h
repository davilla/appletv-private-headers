/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMOutgoingThumbnail : PBCodable {
@private
	int _height;	// 4 = 0x4
	int _width;	// 8 = 0x8
}
@property(assign, nonatomic) int height;	// G=0x34465a6d; S=0x34465a7d; @synthesize=_height
@property(assign, nonatomic) int width;	// G=0x34465a4d; S=0x34465a5d; @synthesize=_width
- (id)init;	// 0x34465ab9
- (void)dealloc;	// 0x34465a8d
- (id)description;	// 0x34465b81
- (id)dictionaryRepresentation;	// 0x34465ae5
// declared property getter: - (int)height;	// 0x34465a6d
- (BOOL)readFrom:(id)from;	// 0x34465cb1
// declared property setter: - (void)setHeight:(int)height;	// 0x34465a7d
// declared property setter: - (void)setWidth:(int)width;	// 0x34465a5d
// declared property getter: - (int)width;	// 0x34465a4d
- (void)writeTo:(id)to;	// 0x34465c65
@end

