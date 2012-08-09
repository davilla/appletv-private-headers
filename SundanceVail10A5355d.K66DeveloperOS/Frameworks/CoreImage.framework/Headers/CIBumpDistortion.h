/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIBumpDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputScale;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x369cdcf5; S=0x369cdd09; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369cdcc1; S=0x369cdcd1; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x369cdd2d; S=0x369cdd41; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x369cdd65; S=0x369cdd79; @synthesize
+ (id)customAttributes;	// 0x369ccec9
- (id)_kernel;	// 0x369cd279
// declared property getter: - (id)inputCenter;	// 0x369cdcf5
// declared property getter: - (id)inputImage;	// 0x369cdcc1
// declared property getter: - (id)inputRadius;	// 0x369cdd2d
// declared property getter: - (id)inputScale;	// 0x369cdd65
- (id)outputImage;	// 0x369cd411
- (void)setDefaults;	// 0x369cd219
// declared property setter: - (void)setInputCenter:(id)center;	// 0x369cdd09
// declared property setter: - (void)setInputImage:(id)image;	// 0x369cdcd1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x369cdd41
// declared property setter: - (void)setInputScale:(id)scale;	// 0x369cdd79
@end
