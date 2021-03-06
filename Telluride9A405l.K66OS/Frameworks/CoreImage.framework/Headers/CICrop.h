/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRectangle;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36eae3d9; S=0x36eae3e9; @synthesize
@property(copy, nonatomic) CIVector *inputRectangle;	// G=0x36eae40d; S=0x36eae41d; @synthesize
+ (id)customAttributes;	// 0x36eae085
- (id)_initFromProperties:(id)properties;	// 0x36eae555
- (id)_outputProperties;	// 0x36eae441
// declared property getter: - (id)inputImage;	// 0x36eae3d9
// declared property getter: - (id)inputRectangle;	// 0x36eae40d
- (id)outputImage;	// 0x36eae25d
- (void)setDefaults;	// 0x36eae209
// declared property setter: - (void)setInputImage:(id)image;	// 0x36eae3e9
// declared property setter: - (void)setInputRectangle:(id)rectangle;	// 0x36eae41d
@end

