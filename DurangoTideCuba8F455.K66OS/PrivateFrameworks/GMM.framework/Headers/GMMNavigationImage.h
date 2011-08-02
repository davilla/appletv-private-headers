/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMNavigationImage : PBCodable {
@private
	int _height;	// 4 = 0x4
	NSData *_imageData;	// 8 = 0x8
	int _width;	// 12 = 0xc
}
@property(assign, nonatomic) int height;	// G=0x34463c3d; S=0x34463c4d; @synthesize=_height
@property(retain, nonatomic) NSData *imageData;	// G=0x34463c2d; S=0x34464045; @synthesize=_imageData
@property(assign, nonatomic) int width;	// G=0x34463c0d; S=0x34463c1d; @synthesize=_width
- (id)init;	// 0x34463c5d
- (void)dealloc;	// 0x34463ffd
- (id)description;	// 0x34463d41
- (id)dictionaryRepresentation;	// 0x34463c89
// declared property getter: - (int)height;	// 0x34463c3d
// declared property getter: - (id)imageData;	// 0x34463c2d
- (BOOL)readFrom:(id)from;	// 0x34463ed5
// declared property setter: - (void)setHeight:(int)height;	// 0x34463c4d
// declared property setter: - (void)setImageData:(id)data;	// 0x34464045
// declared property setter: - (void)setWidth:(int)width;	// 0x34463c1d
// declared property getter: - (int)width;	// 0x34463c0d
- (void)writeTo:(id)to;	// 0x34463e59
@end

