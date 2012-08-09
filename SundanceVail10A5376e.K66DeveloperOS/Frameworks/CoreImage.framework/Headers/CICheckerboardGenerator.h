/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CICheckerboardGenerator : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputSharpness;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x3733263d; S=0x3733264d; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x3733269d; S=0x373326ad; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x373326bd; S=0x373326cd; @synthesize
@property(retain, nonatomic) NSNumber *inputSharpness;	// G=0x3733267d; S=0x3733268d; @synthesize
@property(retain, nonatomic) NSNumber *inputWidth;	// G=0x3733265d; S=0x3733266d; @synthesize
+ (id)customAttributes;	// 0x37331f59
- (id)_kernel;	// 0x37331d51
// declared property getter: - (id)inputCenter;	// 0x3733263d
// declared property getter: - (id)inputColor0;	// 0x3733269d
// declared property getter: - (id)inputColor1;	// 0x373326bd
// declared property getter: - (id)inputSharpness;	// 0x3733267d
// declared property getter: - (id)inputWidth;	// 0x3733265d
- (id)outputImage;	// 0x37332421
- (void)setDefaults;	// 0x37332311
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3733264d
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x373326ad
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x373326cd
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x3733268d
// declared property setter: - (void)setInputWidth:(id)width;	// 0x3733266d
@end
