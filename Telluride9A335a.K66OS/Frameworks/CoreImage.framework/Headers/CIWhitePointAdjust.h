/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x3070f75d; S=0x3070f76d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3070f729; S=0x3070f739; @synthesize
+ (id)customAttributes;	// 0x3070f581
- (id)_kernel;	// 0x3070f2f5
// declared property getter: - (id)inputColor;	// 0x3070f75d
// declared property getter: - (id)inputImage;	// 0x3070f729
- (id)outputImage;	// 0x3070f485
- (void)setDefaults;	// 0x3070f535
// declared property setter: - (void)setInputColor:(id)color;	// 0x3070f76d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3070f739
@end

