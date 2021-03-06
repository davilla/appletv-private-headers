/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputScale;	// 40 = 0x28
	NSNumber *inputAspectRatio;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputAspectRatio;	// G=0x369bdc09; S=0x369bdc1d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369bdb9d; S=0x369bdbad; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x369bdbd1; S=0x369bdbe5; @synthesize
+ (id)customAttributes;	// 0x369bd681
- (BOOL)_isIdentity;	// 0x369bd9dd
// declared property getter: - (id)inputAspectRatio;	// 0x369bdc09
// declared property getter: - (id)inputImage;	// 0x369bdb9d
// declared property getter: - (id)inputScale;	// 0x369bdbd1
- (id)outputImage;	// 0x369bda49
- (void)setDefaults;	// 0x369bd969
// declared property setter: - (void)setInputAspectRatio:(id)ratio;	// 0x369bdc1d
// declared property setter: - (void)setInputImage:(id)image;	// 0x369bdbad
// declared property setter: - (void)setInputScale:(id)scale;	// 0x369bdbe5
@end

