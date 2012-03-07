/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <NSCopying> {
@private
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x34e4f5b1; @synthesize=mCGColor
+ (id)blackColor;	// 0x34e4f97d
+ (id)blueColor;	// 0x34e4f7e1
+ (id)brownColor;	// 0x34e4f60d
+ (id)clearColor;	// 0x34e4f9bd
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x34e4fabd
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x34e4cced
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34e4cccd
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34e4fa6d
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x34e4fa2d
+ (id)cyanColor;	// 0x34e4f799
+ (id)grayColor;	// 0x34e4f8fd
+ (id)greenColor;	// 0x34e4f829
+ (id)lightGrayColor;	// 0x34e4f8b9
+ (id)magentaColor;	// 0x34e4f705
+ (id)orangeColor;	// 0x34e4f6b5
+ (id)purpleColor;	// 0x34e4f669
+ (id)randomColor;	// 0x34e4f9f9
+ (id)redColor;	// 0x34e4f871
+ (id)whiteColor;	// 0x34e4f93d
+ (id)yellowColor;	// 0x34e4f74d
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x34e4f5c1
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34e50169
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x34e50119
// declared property getter: - (CGColorRef)CGColor;	// 0x34e4f5b1
- (float)alphaComponent;	// 0x34e4ff15
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x34e4fb85
- (float)blueComponent;	// 0x34e4ff31
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x34e4fdb9
- (id)copy;	// 0x34e4cc7d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e50011
- (void)dealloc;	// 0x34e500d9
- (id)grayscaleColor;	// 0x34e4fe6d
- (float)greenComponent;	// 0x34e4ff45
- (unsigned)hash;	// 0x34e500bd
- (id)invertedColor;	// 0x34e4fdfd
- (BOOL)isEqual:(id)equal;	// 0x34e5003d
- (BOOL)isOpaque;	// 0x34e4fcf9
- (float)luminance;	// 0x34e4fd29
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x34e4ff6d
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x34e4faf9
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x34e4fb35
- (float)redComponent;	// 0x34e4ff59
- (void)set;	// 0x34e4cc79
@end
