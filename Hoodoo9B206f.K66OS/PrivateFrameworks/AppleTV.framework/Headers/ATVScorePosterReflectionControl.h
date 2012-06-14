/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface ATVScorePosterReflectionControl : BRControl {
@private
	BRImage *_backgroundImage;	// 48 = 0x30
	float _sizeFactor;	// 52 = 0x34
	BRImage *_image;	// 56 = 0x38
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x365f8c49; S=0x365f8931; @synthesize=_backgroundImage
@property(retain, nonatomic) BRImage *image;	// G=0x365f8c39; S=0x365f8985; @synthesize=_image
@property(assign, nonatomic) float sizeFactor;	// G=0x365f8c59; S=0x365f8c69; @synthesize=_sizeFactor
- (id)init;	// 0x365f88d9
// declared property getter: - (id)backgroundImage;	// 0x365f8c49
- (void)dealloc;	// 0x365f89d9
- (void)drawInContext:(CGContextRef)context;	// 0x365f8a39
// declared property getter: - (id)image;	// 0x365f8c39
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x365f8931
// declared property setter: - (void)setImage:(id)image;	// 0x365f8985
// declared property setter: - (void)setSizeFactor:(float)factor;	// 0x365f8c69
// declared property getter: - (float)sizeFactor;	// 0x365f8c59
@end
