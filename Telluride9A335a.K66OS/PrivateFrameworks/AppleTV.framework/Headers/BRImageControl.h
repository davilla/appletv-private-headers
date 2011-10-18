/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSString;

@interface BRImageControl : BRControl {
@private
	BRImage *_image;	// 48 = 0x30
	BOOL _renderingImage;	// 52 = 0x34
	BOOL _autoDownsample;	// 53 = 0x35
	NSString *_artworkIdentifier;	// 56 = 0x38
	BOOL _sizeIgnoresPixelBounds;	// 60 = 0x3c
}
@property(assign) BOOL automaticDownsample;	// G=0x341ecba9; S=0x341ecb21; converted property
@property(retain) BRImage *image;	// G=0x341ecab5; S=0x341ec9c5; converted property
- (void)_imageUpdated:(id)updated;	// 0x341ece3d
- (id)accessibilityLabel;	// 0x341ecedd
- (float)aspectRatio;	// 0x341ecb01
// converted property getter: - (BOOL)automaticDownsample;	// 0x341ecba9
- (void)dealloc;	// 0x341ec935
- (void)drawInContext:(CGContextRef)context;	// 0x341ecc91
// converted property getter: - (id)image;	// 0x341ecab5
- (CGSize)pixelBounds;	// 0x341ecac5
- (void)setArtworkIdentifier:(id)identifier;	// 0x341ecbb9
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x341ecb21
// converted property setter: - (void)setImage:(id)image;	// 0x341ec9c5
- (void)setImageAsContents:(id)contents;	// 0x341eca29
- (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x341ecc71
- (BOOL)sizeIgnoresPixelsBounds;	// 0x341ecc81
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x341ecd41
@end

