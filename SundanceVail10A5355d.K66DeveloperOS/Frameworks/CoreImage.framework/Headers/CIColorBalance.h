/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputStrength;	// 44 = 0x2c
	NSNumber *inputWarmth;	// 48 = 0x30
	NSNumber *inputDamping;	// 52 = 0x34
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x369a5c65; S=0x369a5c79; @synthesize
@property(copy, nonatomic) NSNumber *inputDamping;	// G=0x369a5d0d; S=0x369a5d21; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369a5c31; S=0x369a5c41; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x369a5c9d; S=0x369a5cb1; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x369a5cd5; S=0x369a5ce9; @synthesize
+ (id)customAttributes;	// 0x369a52d9
- (id)_kernel;	// 0x369a57f5
// declared property getter: - (id)inputColor;	// 0x369a5c65
// declared property getter: - (id)inputDamping;	// 0x369a5d0d
// declared property getter: - (id)inputImage;	// 0x369a5c31
// declared property getter: - (id)inputStrength;	// 0x369a5c9d
// declared property getter: - (id)inputWarmth;	// 0x369a5cd5
- (id)outputImage;	// 0x369a59b9
- (void)setDefaults;	// 0x369a5759
// declared property setter: - (void)setInputColor:(id)color;	// 0x369a5c79
// declared property setter: - (void)setInputDamping:(id)damping;	// 0x369a5d21
// declared property setter: - (void)setInputImage:(id)image;	// 0x369a5c41
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x369a5cb1
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x369a5ce9
@end

