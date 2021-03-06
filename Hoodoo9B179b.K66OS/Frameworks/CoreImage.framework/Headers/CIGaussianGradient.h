/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x36da2c49; S=0x36da2c59; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x36da2c7d; S=0x36da2c8d; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x36da2cb1; S=0x36da2cc1; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x36da2ce5; S=0x36da2cf5; @synthesize
+ (id)customAttributes;	// 0x36da265d
- (id)_kernel;	// 0x36da2445
// declared property getter: - (id)inputCenter;	// 0x36da2c49
// declared property getter: - (id)inputColor0;	// 0x36da2c7d
// declared property getter: - (id)inputColor1;	// 0x36da2cb1
// declared property getter: - (id)inputRadius;	// 0x36da2ce5
- (id)outputImage;	// 0x36da2a3d
- (void)setDefaults;	// 0x36da2951
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36da2c59
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x36da2c8d
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x36da2cc1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36da2cf5
@end

