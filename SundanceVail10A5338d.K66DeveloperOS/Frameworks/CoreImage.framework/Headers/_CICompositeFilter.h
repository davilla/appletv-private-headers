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
@interface _CICompositeFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x352fb6a1; S=0x352fb6b1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x352fb66d; S=0x352fb67d; @synthesize
+ (id)_filter_display_name;	// 0x352fb041
+ (id)_kernel;	// 0x352fb149
+ (id)_kernel_name;	// 0x352fb045
+ (id)_kernel_source;	// 0x352fb049
+ (id)customAttributes;	// 0x352fb04d
- (CGRect)_extentForInputExtent:(CGRect)inputExtent backgroundExtent:(CGRect)extent;	// 0x352fb529
// declared property getter: - (id)inputBackgroundImage;	// 0x352fb6a1
// declared property getter: - (id)inputImage;	// 0x352fb66d
- (id)outputImage;	// 0x352fb55d
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x352fb6b1
// declared property setter: - (void)setInputImage:(id)image;	// 0x352fb67d
@end
