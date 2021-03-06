/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;
@protocol BRImageProxy;

@interface BRImageControl : BRControl {
@private
	id<BRImageProxy> _imageProxy;	// 48 = 0x30
	BRImage *_image;	// 52 = 0x34
	BOOL _renderingImage;	// 56 = 0x38
	BOOL _autoDownsample;	// 57 = 0x39
	NSString *_artworkIdentifier;	// 60 = 0x3c
	BOOL _sizeIgnoresPixelBounds;	// 64 = 0x40
}
@property(assign) BOOL automaticDownsample;	// G=0x329dd4c5; S=0x329dd43d; converted property
@property(retain) BRImage *image;	// G=0x329dd3d1; S=0x329dd2e1; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x329dd59d; S=0x329dd58d; converted property
- (void)_imageUpdated:(id)updated;	// 0x329dd811
- (void)_loadImage;	// 0x329dd915
- (void)_unloadImage;	// 0x329dd8b1
- (id)accessibilityLabel;	// 0x329dd7f1
- (float)aspectRatio;	// 0x329dd41d
// converted property getter: - (BOOL)automaticDownsample;	// 0x329dd4c5
- (void)controlWasActivated;	// 0x329dd759
- (void)controlWasDeactivated;	// 0x329dd785
- (void)dealloc;	// 0x329dd12d
- (void)drawInContext:(CGContextRef)context;	// 0x329dd5ad
// converted property getter: - (id)image;	// 0x329dd3d1
- (CGSize)pixelBounds;	// 0x329dd3e1
- (void)setArtworkIdentifier:(id)identifier;	// 0x329dd4d5
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x329dd43d
// converted property setter: - (void)setImage:(id)image;	// 0x329dd2e1
- (void)setImageAsContents:(id)contents;	// 0x329dd345
- (void)setImageProxy:(id)proxy;	// 0x329dd1d1
- (void)setImageProxyAsContents:(id)contents;	// 0x329dd259
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x329dd58d
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x329dd59d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x329dd65d
- (void)windowMaxBoundsChanged;	// 0x329dd7b1
@end

