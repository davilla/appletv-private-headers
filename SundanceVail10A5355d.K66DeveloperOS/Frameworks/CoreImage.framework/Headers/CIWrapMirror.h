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
@interface CIWrapMirror : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369a9abd; S=0x369a9acd; @synthesize
+ (id)customAttributes;	// 0x369a9501
- (id)_kernel;	// 0x369a9585
// declared property getter: - (id)inputImage;	// 0x369a9abd
- (id)outputImage;	// 0x369a9721
- (void)setDefaults;	// 0x369a971d
// declared property setter: - (void)setInputImage:(id)image;	// 0x369a9acd
@end
