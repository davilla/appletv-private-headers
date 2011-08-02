/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRImageControl;

@interface BRReflectedImageControl : BRControl {
@private
	BRImageControl *_image;	// 44 = 0x2c
	BRReflectionControl *_reflection;	// 48 = 0x30
	float _offset;	// 52 = 0x34
}
@property(assign) BOOL automaticDownsample;	// G=0x32f79901; S=0x32f2e679; converted property
@property(retain) BRImageControl *image;	// G=0x32f2a821; S=0x32f2a7a9; converted property
@property(assign) CGColorRef imageBorderColor;	// G=0x32f79815; S=0x32f79845; converted property
@property(assign) float imageBorderWidth;	// G=0x32f79879; S=0x32f798a9; converted property
@property(assign) float reflectionOffset;	// G=0x32f79805; S=0x32f798dd; converted property
- (id)init;	// 0x32f2a69d
// converted property getter: - (BOOL)automaticDownsample;	// 0x32f79901
- (void)dealloc;	// 0x32f2b451
// converted property getter: - (id)image;	// 0x32f2a821
// converted property getter: - (CGColorRef)imageBorderColor;	// 0x32f79815
// converted property getter: - (float)imageBorderWidth;	// 0x32f79879
- (void)layoutSubcontrols;	// 0x32f79925
- (CGRect)reflectedImageFrameForImageFrame:(CGRect)imageFrame reflectionAmount:(float)amount;	// 0x32f41259
// converted property getter: - (float)reflectionOffset;	// 0x32f79805
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x32f2e679
// converted property setter: - (void)setImage:(id)image;	// 0x32f2a7a9
// converted property setter: - (void)setImageBorderColor:(CGColorRef)color;	// 0x32f79845
// converted property setter: - (void)setImageBorderWidth:(float)width;	// 0x32f798a9
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x32f798dd
@end

