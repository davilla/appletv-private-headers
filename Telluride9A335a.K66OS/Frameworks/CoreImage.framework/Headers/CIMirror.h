/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMirror : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputOrientation;	// 44 = 0x2c
	NSNumber *inputMirroredStatus;	// 48 = 0x30
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x307386f5; S=0x30738705; @synthesize
@property(copy, nonatomic) NSNumber *inputMirroredStatus;	// G=0x30738791; S=0x307387a1; @synthesize
@property(copy, nonatomic) NSNumber *inputOrientation;	// G=0x3073875d; S=0x3073876d; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x30738729; S=0x30738739; @synthesize
+ (id)customAttributes;	// 0x30737f51
- (id)_kernel;	// 0x30738195
// declared property getter: - (id)inputImage;	// 0x307386f5
// declared property getter: - (id)inputMirroredStatus;	// 0x30738791
// declared property getter: - (id)inputOrientation;	// 0x3073875d
// declared property getter: - (id)inputPoint;	// 0x30738729
- (id)outputImage;	// 0x30738401
- (void)setDefaults;	// 0x30738379
// declared property setter: - (void)setInputImage:(id)image;	// 0x30738705
// declared property setter: - (void)setInputMirroredStatus:(id)status;	// 0x307387a1
// declared property setter: - (void)setInputOrientation:(id)orientation;	// 0x3073876d
// declared property setter: - (void)setInputPoint:(id)point;	// 0x30738739
@end

