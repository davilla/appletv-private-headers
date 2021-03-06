/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSAttributedString;

@interface BRStrokeAndFillTextControl : BRControl {
@private
	NSAttributedString *_attributedString;	// 48 = 0x30
	float _strokeWidth;	// 52 = 0x34
	CGColorRef _strokeColor;	// 56 = 0x38
}
@property(copy) NSAttributedString *attributedString;	// G=0x330a274d; S=0x330a275d; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x330a2a85; S=0x330a2a99; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x330a2a65; S=0x330a2a75; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x330a274d
- (void)dealloc;	// 0x330a26ed
- (void)drawInContext:(CGContextRef)context;	// 0x330a27b5
// declared property setter: - (void)setAttributedString:(id)string;	// 0x330a275d
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x330a2a99
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x330a2a75
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x330a25dd
// declared property getter: - (CGColorRef)strokeColor;	// 0x330a2a85
// declared property getter: - (float)strokeWidth;	// 0x330a2a65
@end

