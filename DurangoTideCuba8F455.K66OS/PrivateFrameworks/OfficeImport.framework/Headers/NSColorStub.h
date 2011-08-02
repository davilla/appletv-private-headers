/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSColorStub : NSObject {
@private
	CGColorRef cgColor;	// 4 = 0x4
}
+ (id)blackColor;	// 0x32b8228d
+ (id)clearColor;	// 0x32bca199
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x32d86351
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x32bfe131
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x32d8644d
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x32d863cd
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32cce3e9
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32b0c999
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x32cdfc99
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x32bd25cd
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32b1a2cd
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x32cdfd0d
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x32d3e5c1
+ (id)colorWithPatternImage:(CGImageRef)patternImage;	// 0x32c80131
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x32b9a321
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x32ca86d5
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x32b0c8cd
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x32d86195
+ (id)whiteColor;	// 0x32b0f425
- (id)init;	// 0x32cce2cd
- (id)initWithGCColor:(CGColorRef)gccolor;	// 0x32b99fd1
- (float)alphaComponent;	// 0x32b0cdc5
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x32c7eac1
- (float)blueComponent;	// 0x32b0cd9d
- (CGColorRef)cgColorRef;	// 0x32b9d779
- (id)colorSpaceName;	// 0x32cce2c1
- (id)colorUsingColorSpaceName:(id)name;	// 0x32ba03b1
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x32b80f89
- (id)colorWithShadeValue:(double)shadeValue;	// 0x32c7ea39
- (id)colorWithTintValue:(double)tintValue;	// 0x32c835d9
- (id)copyWithZone:(NSZone *)zone;	// 0x32b99f91
- (CsColour)csColour;	// 0x32d3e549
- (CsColour)csColour;	// 0x32cdfc21
- (void)dealloc;	// 0x32ba8ff9
- (id)description;	// 0x32cce309
- (EshColor)eshColor;	// 0x32d3e581
- (EshColor)eshColor;	// 0x32cdfc59
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x32c49599
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x32b0cd45
- (float)greenComponent;	// 0x32b0cd75
- (BOOL)isBlack;	// 0x32b0cc91
- (BOOL)isEqualToColor:(id)color;	// 0x32b0d539
- (float)redComponent;	// 0x32b0cd1d
- (id)rgbColor;	// 0x32ba03ad
- (void)set;	// 0x32b9e875
- (id)solidColoredBitmap:(CGSize)bitmap;	// 0x32d8618d
- (id)solidColoredPngImage;	// 0x32d86191
- (unsigned long)toBGR;	// 0x32d864c1
- (tagRgbQuad)ttColor;	// 0x32ba02dd
@end

