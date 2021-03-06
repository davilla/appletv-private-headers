/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
@private
	NSAttributedString *_string;	// 44 = 0x2c
	float _pursuitGap;	// 48 = 0x30
	CGSize _cachedNaturalTextSize;	// 52 = 0x34
}
@property(retain) id attributedString;	// G=0x32f72bb1; S=0x32f732b5; converted property
+ (Class)layerClass;	// 0x32f73339
// converted property getter: - (id)attributedString;	// 0x32f72bb1
- (void)dealloc;	// 0x32f73629
- (void)drawInContext:(CGContextRef)context;	// 0x32f73b55
- (CGSize)naturalTextSize;	// 0x32f73c51
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32f732b5
- (void)setPursuitGap:(float)gap;	// 0x32f73281
- (void)setTileSize:(CGSize)size;	// 0x32f73255
@end

