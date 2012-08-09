/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x369bebc1; S=0x369bebd1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369beb8d; S=0x369beb9d; @synthesize
@property(retain, nonatomic) CIImage *inputMaskImage;	// G=0x369bebf5; S=0x369bec05; @synthesize
+ (id)customAttributes;	// 0x369be2f9
- (id)_kernel;	// 0x369be3b9
- (id)_kernelNoB;	// 0x369be569
- (id)_kernelNoF;	// 0x369be70d
// declared property getter: - (id)inputBackgroundImage;	// 0x369bebc1
// declared property getter: - (id)inputImage;	// 0x369beb8d
// declared property getter: - (id)inputMaskImage;	// 0x369bebf5
- (id)outputImage;	// 0x369be8b1
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x369bebd1
// declared property setter: - (void)setInputImage:(id)image;	// 0x369beb9d
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x369bec05
@end
