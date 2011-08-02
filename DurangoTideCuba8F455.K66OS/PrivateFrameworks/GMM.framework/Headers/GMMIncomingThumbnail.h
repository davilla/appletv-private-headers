/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingThumbnail : PBCodable {
@private
	int _height;	// 4 = 0x4
	NSData *_thumbnailData;	// 8 = 0x8
	int _width;	// 12 = 0xc
}
@property(assign, nonatomic) int height;	// G=0x3446561d; S=0x3446562d; @synthesize=_height
@property(retain, nonatomic) NSData *thumbnailData;	// G=0x3446560d; S=0x34465a25; @synthesize=_thumbnailData
@property(assign, nonatomic) int width;	// G=0x344655ed; S=0x344655fd; @synthesize=_width
- (id)init;	// 0x3446563d
- (void)dealloc;	// 0x344659dd
- (id)description;	// 0x34465721
- (id)dictionaryRepresentation;	// 0x34465669
// declared property getter: - (int)height;	// 0x3446561d
- (BOOL)readFrom:(id)from;	// 0x344658b5
// declared property setter: - (void)setHeight:(int)height;	// 0x3446562d
// declared property setter: - (void)setThumbnailData:(id)data;	// 0x34465a25
// declared property setter: - (void)setWidth:(int)width;	// 0x344655fd
// declared property getter: - (id)thumbnailData;	// 0x3446560d
// declared property getter: - (int)width;	// 0x344655ed
- (void)writeTo:(id)to;	// 0x34465839
@end

