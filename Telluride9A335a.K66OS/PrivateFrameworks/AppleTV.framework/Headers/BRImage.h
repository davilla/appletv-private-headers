/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
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
	BOOL _imageBufferInMemory;	// 40 = 0x28
	BOOL _rotationEnabled;	// 41 = 0x29
}
@property(retain) NSString *accessibilityLabel;	// G=0x3419267d; S=0x3419268d; converted property
@property(assign) BOOL enableCache;	// G=0x341923a5; S=0x34192375; converted property
@property(readonly, assign) CGImageRef image;	// G=0x341921d9; converted property
@property(readonly, assign, getter=isImageBufferInMemory) BOOL imageBufferInMemory;	// G=0x34192b5d; converted property
@property(readonly, assign, nonatomic) int orientation;	// G=0x34192b6d; @synthesize=_imageOrientation
@property(readonly, assign, nonatomic) BOOL rotationEnabled;	// G=0x34192b7d; @synthesize=_rotationEnabled
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x34191a49
+ (id)imageWithData:(id)data;	// 0x34191a05
+ (id)imageWithName:(id)name ofType:(id)type inBundle:(id)bundle;	// 0x34191b75
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x34191a8d
+ (id)imageWithPath:(id)path;	// 0x3419199d
+ (id)imageWithRotationFromData:(id)data;	// 0x34191c65
+ (id)imageWithRotationFromPath:(id)path;	// 0x34191c25
+ (id)imageWithRotationFromURL:(id)url;	// 0x34191bcd
+ (id)imageWithURL:(id)url;	// 0x34191959
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x34191cbd
- (id)initWithData:(id)data;	// 0x34191f49
- (id)initWithURL:(id)url;	// 0x34191d9d
- (id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)cgimageSourceRotationEnabled;	// 0x34192b8d
- (void)_initializeCGImageWithRotation;	// 0x34192ce5
// converted property getter: - (id)accessibilityLabel;	// 0x3419267d
- (float)aspectRatio;	// 0x341922c9
- (id)croppedImageForSize:(CGSize)size;	// 0x34192795
- (void)dealloc;	// 0x34192105
- (id)deletterboxedImage;	// 0x341923b5
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x341921a5
// converted property getter: - (BOOL)enableCache;	// 0x341923a5
// converted property getter: - (CGImageRef)image;	// 0x341921d9
- (BOOL)isAccessibilityElement;	// 0x34192665
// converted property getter: - (BOOL)isImageBufferInMemory;	// 0x34192b5d
- (BOOL)isPowerOfTwo;	// 0x3419230d
- (CGRect)largestSquareRect;	// 0x34192999
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x341926d1
// declared property getter: - (int)orientation;	// 0x34192b6d
- (CGSize)pixelBounds;	// 0x3419229d
- (void)purgeRawData;	// 0x342b45ad
- (id)rawData;	// 0x342b45a9
// declared property getter: - (BOOL)rotationEnabled;	// 0x34192b7d
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x3419268d
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x34192375
- (BOOL)sourceRequiresRotation;	// 0x34192359
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x34192a79
@end

