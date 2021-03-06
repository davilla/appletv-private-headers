/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;

@interface BRImageControl : BRControl {
@private
	BRImage *_image;	// 44 = 0x2c
	CGSize _lastDownsample;	// 48 = 0x30
	BOOL _autoDownsample;	// 56 = 0x38
	NSString *_artworkIdentifier;	// 60 = 0x3c
	BOOL _sizeIgnoresPixelBounds;	// 64 = 0x40
}
@property(assign) BOOL automaticDownsample;	// G=0x328fddc1; S=0x328a2161; converted property
@property(retain) BRImage *image;	// G=0x328af29d; S=0x3289e14d; converted property
- (void)_imageUpdated:(id)updated;	// 0x328b71c9
- (void)_updateContents:(BOOL)contents;	// 0x3289e199
- (id)accessibilityLabel;	// 0x328fddf1
- (float)aspectRatio;	// 0x328b3cb5
// converted property getter: - (BOOL)automaticDownsample;	// 0x328fddc1
- (void)dealloc;	// 0x328ab045
// converted property getter: - (id)image;	// 0x328af29d
- (void)layoutSubcontrols;	// 0x328fde11
- (CGSize)pixelBounds;	// 0x328a1835
- (void)setArtworkIdentifier:(id)identifier;	// 0x328b6ff5
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x328a2161
// converted property setter: - (void)setImage:(id)image;	// 0x3289e14d
- (void)setImage:(id)image downsampleTo:(CGSize)to;	// 0x328c4639
- (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x328fddd1
- (BOOL)sizeIgnoresPixelsBounds;	// 0x328fdde1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328fde29
@end

