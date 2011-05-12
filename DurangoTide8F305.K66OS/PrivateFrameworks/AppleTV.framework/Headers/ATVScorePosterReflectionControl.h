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
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x307b82cd; S=0x307b8391; @synthesize=_backgroundImage
@property(retain, nonatomic) BRImage *image;	// G=0x307b82dd; S=0x307b8349; @synthesize=_image
@property(assign, nonatomic) float sizeFactor;	// G=0x307b82ad; S=0x307b82bd; @synthesize=_sizeFactor
- (id)init;	// 0x307b83d9
// declared property getter: - (id)backgroundImage;	// 0x307b82cd
- (void)dealloc;	// 0x307b82ed
- (void)drawInContext:(CGContextRef)context;	// 0x307b8ce5
// declared property getter: - (id)image;	// 0x307b82dd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x307b8391
// declared property setter: - (void)setImage:(id)image;	// 0x307b8349
// declared property setter: - (void)setSizeFactor:(float)factor;	// 0x307b82bd
// declared property getter: - (float)sizeFactor;	// 0x307b82ad
@end

