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
@interface CIHueAdjust : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputAngle;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x36962a35; S=0x36962a49; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36962a01; S=0x36962a11; @synthesize
+ (id)customAttributes;	// 0x36962559
// declared property getter: - (id)inputAngle;	// 0x36962a35
// declared property getter: - (id)inputImage;	// 0x36962a01
- (id)outputImage;	// 0x369627a9
- (void)setDefaults;	// 0x36962769
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x36962a49
// declared property setter: - (void)setInputImage:(id)image;	// 0x36962a11
@end

