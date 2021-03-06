/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface ATVScorePosterReflectionControl : BRControl {
@private
	BRImage *_backgroundImage;	// 44 = 0x2c
	float _sizeFactor;	// 48 = 0x30
	BRImage *_image;	// 52 = 0x34
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x3371f2cd; S=0x3371f391; @synthesize=_backgroundImage
@property(retain, nonatomic) BRImage *image;	// G=0x3371f2dd; S=0x3371f349; @synthesize=_image
@property(assign, nonatomic) float sizeFactor;	// G=0x3371f2ad; S=0x3371f2bd; @synthesize=_sizeFactor
- (id)init;	// 0x3371f3d9
// declared property getter: - (id)backgroundImage;	// 0x3371f2cd
- (void)dealloc;	// 0x3371f2ed
- (void)drawInContext:(CGContextRef)context;	// 0x3371fce5
// declared property getter: - (id)image;	// 0x3371f2dd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3371f391
// declared property setter: - (void)setImage:(id)image;	// 0x3371f349
// declared property setter: - (void)setSizeFactor:(float)factor;	// 0x3371f2bd
// declared property getter: - (float)sizeFactor;	// 0x3371f2ad
@end

