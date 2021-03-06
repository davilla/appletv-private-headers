/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVignette : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputIntensity;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x37336b51; S=0x37336b61; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x37336b71; S=0x37336b85; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x37336b95; S=0x37336ba9; @synthesize
+ (id)customAttributes;	// 0x37336371
- (BOOL)_isIdentity;	// 0x373368d9
- (id)_kernel;	// 0x373366a1
// declared property getter: - (id)inputImage;	// 0x37336b51
// declared property getter: - (id)inputIntensity;	// 0x37336b71
// declared property getter: - (id)inputRadius;	// 0x37336b95
- (id)outputImage;	// 0x37336921
- (void)setDefaults;	// 0x37336869
// declared property setter: - (void)setInputImage:(id)image;	// 0x37336b61
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x37336b85
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x37336ba9
@end

