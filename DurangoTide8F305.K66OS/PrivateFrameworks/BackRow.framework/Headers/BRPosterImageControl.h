/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRPosterImageControl : BRControl {
@private
	BRImage *_image;	// 44 = 0x2c
	float _cornerRadius;	// 48 = 0x30
	float _posterBorderWidth;	// 52 = 0x34
	CGColorRef _posterBorderColor;	// 56 = 0x38
}
- (id)initWithImage:(id)image cornerRadius:(float)radius borderWidth:(float)width borderColor:(CGColorRef)color;	// 0x3299b4cd
- (void)dealloc;	// 0x3299b2d5
- (void)drawInContext:(CGContextRef)context;	// 0x3299c30d
@end

