/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSData, NSString;

@interface BRImage : NSObject {
@private
	CGImageRef _image;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
	CGImageSourceRef _imageSource;	// 12 = 0xc
	float _imageWidth;	// 16 = 0x10
	float _imageHeight;	// 20 = 0x14
	int _imageOrientation;	// 24 = 0x18
	BOOL _enableCache;	// 28 = 0x1c
	NSURL *_imageURL;	// 32 = 0x20
	NSData *_imageData;	// 36 = 0x24
}
@property(retain) NSString *accessibilityLabel;	// G=0x329593f5; S=0x32959405; converted property
@property(assign) BOOL enableCache;	// G=0x329593d1; S=0x329593c1; converted property
@property(readonly, assign) CGImageRef image;	// G=0x329130cd; converted property
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x32921cb1
+ (id)imageWithData:(id)data;	// 0x32924b69
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x3293eb0d
+ (id)imageWithPath:(id)path;	// 0x32912db9
+ (id)imageWithRotationFromData:(id)data;	// 0x32959929
+ (id)imageWithRotationFromPath:(id)path;	// 0x32959441
+ (id)imageWithRotationFromURL:(id)url;	// 0x3295972d
+ (id)imageWithURL:(id)url;	// 0x32912e19
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x32912e7d
- (id)initWithData:(id)data;	// 0x3295978d
- (id)initWithURL:(id)url;	// 0x32959591
- (id)_initWithCGImageSource:(CGImageSourceRef)cgimageSource;	// 0x32959479
- (void)_initializeCGImageWithRotation;	// 0x32959d3d
// converted property getter: - (id)accessibilityLabel;	// 0x329593f5
- (float)aspectRatio;	// 0x329240cd
- (id)croppedImageForSize:(CGSize)size;	// 0x32959b29
- (void)dealloc;	// 0x3291f1b9
- (id)deletterboxedImage;	// 0x3295a031
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x3292206d
// converted property getter: - (BOOL)enableCache;	// 0x329593d1
// converted property getter: - (CGImageRef)image;	// 0x329130cd
- (BOOL)isAccessibilityElement;	// 0x329593e1
- (BOOL)isPowerOfTwo;	// 0x32941dbd
- (CGRect)largestSquareRect;	// 0x32940da9
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x32959a5d
- (CGSize)pixelBounds;	// 0x32916691
- (void)purgeRawData;	// 0x329cff65
- (id)rawData;	// 0x329cff61
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32959405
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x329593c1
- (BOOL)sourceRequiresRotation;	// 0x329593a9
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x32959989
@end

