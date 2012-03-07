/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIStripesGenerator : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputSharpness;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x36eef179; S=0x36eef189; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x36eef1ad; S=0x36eef1bd; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x36eef1e1; S=0x36eef1f1; @synthesize
@property(retain, nonatomic) NSNumber *inputSharpness;	// G=0x36eef249; S=0x36eef259; @synthesize
@property(retain, nonatomic) NSNumber *inputWidth;	// G=0x36eef215; S=0x36eef225; @synthesize
+ (id)customAttributes;	// 0x36eeeb05
- (id)_kernel;	// 0x36eee8ed
// declared property getter: - (id)inputCenter;	// 0x36eef179
// declared property getter: - (id)inputColor0;	// 0x36eef1ad
// declared property getter: - (id)inputColor1;	// 0x36eef1e1
// declared property getter: - (id)inputSharpness;	// 0x36eef249
// declared property getter: - (id)inputWidth;	// 0x36eef215
- (id)outputImage;	// 0x36eeefd1
- (void)setDefaults;	// 0x36eeeec5
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36eef189
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x36eef1bd
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x36eef1f1
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x36eef259
// declared property setter: - (void)setInputWidth:(id)width;	// 0x36eef225
@end
