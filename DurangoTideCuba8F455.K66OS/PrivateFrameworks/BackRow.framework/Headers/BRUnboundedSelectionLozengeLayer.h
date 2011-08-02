/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSelectionLozengeLayer.h"
#import "BackRow-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 96 = 0x60
	BRImage *_bottomImage;	// 100 = 0x64
	BOOL _brighterImage;	// 104 = 0x68
	BOOL _focusedImage;	// 105 = 0x69
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x32f72b41; S=0x32f1d445; converted property
- (id)init;	// 0x32f1d2c5
- (void)_updateImages;	// 0x32f1d315
- (void)dealloc;	// 0x32f72b55
- (void)drawInContext:(CGContextRef)context;	// 0x32f23fd1
- (void)layoutSubcontrols;	// 0x32f72b51
- (void)setFocused:(BOOL)focused;	// 0x32f243f5
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x32f1d445
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x32f72b41
@end

