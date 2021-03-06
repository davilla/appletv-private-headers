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
@interface CIModTransition : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIVector *inputCenter;	// 44 = 0x2c
	NSNumber *inputTime;	// 48 = 0x30
	NSNumber *inputAngle;	// 52 = 0x34
	NSNumber *inputRadius;	// 56 = 0x38
	NSNumber *inputCompression;	// 60 = 0x3c
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x36c0f5ad; S=0x36c0f5c1; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x36c0f53d; S=0x36c0f551; @synthesize
@property(copy, nonatomic) NSNumber *inputCompression;	// G=0x36c0f61d; S=0x36c0f631; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36c0f4d5; S=0x36c0f4e5; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36c0f5e5; S=0x36c0f5f9; @synthesize
@property(retain, nonatomic) CIImage *inputTargetImage;	// G=0x36c0f509; S=0x36c0f519; @synthesize
@property(copy, nonatomic) NSNumber *inputTime;	// G=0x36c0f575; S=0x36c0f589; @synthesize
+ (id)customAttributes;	// 0x36c0ea01
- (id)_kernel;	// 0x36c0ef81
// declared property getter: - (id)inputAngle;	// 0x36c0f5ad
// declared property getter: - (id)inputCenter;	// 0x36c0f53d
// declared property getter: - (id)inputCompression;	// 0x36c0f61d
// declared property getter: - (id)inputImage;	// 0x36c0f4d5
// declared property getter: - (id)inputRadius;	// 0x36c0f5e5
// declared property getter: - (id)inputTargetImage;	// 0x36c0f509
// declared property getter: - (id)inputTime;	// 0x36c0f575
- (id)outputImage;	// 0x36c0f1f1
- (void)setDefaults;	// 0x36c0ee81
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x36c0f5c1
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36c0f551
// declared property setter: - (void)setInputCompression:(id)compression;	// 0x36c0f631
// declared property setter: - (void)setInputImage:(id)image;	// 0x36c0f4e5
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36c0f5f9
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x36c0f519
// declared property setter: - (void)setInputTime:(id)time;	// 0x36c0f589
@end

