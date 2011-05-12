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
@property(retain) id attributedString;	// G=0x32973e91; S=0x32974595; converted property
+ (Class)layerClass;	// 0x32974619
// converted property getter: - (id)attributedString;	// 0x32973e91
- (void)dealloc;	// 0x32974909
- (void)drawInContext:(CGContextRef)context;	// 0x32974e35
- (CGSize)naturalTextSize;	// 0x32974f31
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32974595
- (void)setPursuitGap:(float)gap;	// 0x32974561
- (void)setTileSize:(CGSize)size;	// 0x32974535
@end

