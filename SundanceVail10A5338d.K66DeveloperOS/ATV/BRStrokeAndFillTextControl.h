/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRStrokeAndFillTextControl : BRControl {
	NSAttributedString *_attributedString;	// 80 = 0x50
	float _strokeWidth;	// 84 = 0x54
	CGColorRef _strokeColor;	// 88 = 0x58
}
@property(copy) NSAttributedString *attributedString;	// G=0x2d8af5; S=0x2d8b05; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x2d8e39; S=0x2d8e4d; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x2d8e0d; S=0x2d8e21; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x2d8af5
- (void)dealloc;	// 0x2d8a95
- (void)drawRect:(CGRect)rect;	// 0x2d8b5d
// declared property setter: - (void)setAttributedString:(id)string;	// 0x2d8b05
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x2d8e4d
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x2d8e21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d8979
// declared property getter: - (CGColorRef)strokeColor;	// 0x2d8e39
// declared property getter: - (float)strokeWidth;	// 0x2d8e0d
@end

