/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStraightenFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputAngle;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x30224ba9; S=0x30224bb9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30224b75; S=0x30224b85; @synthesize
+ (id)customAttributes;	// 0x3022471d
// declared property getter: - (id)inputAngle;	// 0x30224ba9
// declared property getter: - (id)inputImage;	// 0x30224b75
- (id)outputImage;	// 0x302248f5
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x30224bb9
// declared property setter: - (void)setInputImage:(id)image;	// 0x30224b85
@end

