/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSValue, CIImage;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSValue *inputTransform;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30221d3d; S=0x30221d4d; @synthesize
@property(copy, nonatomic) NSValue *inputTransform;	// G=0x30221d71; S=0x30221d81; @synthesize
+ (id)customAttributes;	// 0x302219d1
- (id)_initFromProperties:(id)properties;	// 0x30221f09
- (id)_outputProperties;	// 0x30221da5
// declared property getter: - (id)inputImage;	// 0x30221d3d
// declared property getter: - (id)inputTransform;	// 0x30221d71
- (id)outputImage;	// 0x30221b79
- (void)setDefaults;	// 0x30221b29
// declared property setter: - (void)setInputImage:(id)image;	// 0x30221d4d
// declared property setter: - (void)setInputTransform:(id)transform;	// 0x30221d81
@end

