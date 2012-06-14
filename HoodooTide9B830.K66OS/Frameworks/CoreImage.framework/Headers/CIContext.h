/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


@interface CIContext : NSObject {
	CIContextInternal *_priv;	// 4 = 0x4
}
+ (id)_singletonContext;	// 0x349e9551
+ (id)clContextOptions:(id)options;	// 0x349eab09
+ (id)context;	// 0x349e95bd
+ (id)contextWithEAGLContext:(id)eaglcontext;	// 0x349e96bd
+ (id)contextWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x349e9705
+ (id)contextWithOptions:(id)options;	// 0x349e95dd
+ (id)glesContextOptions:(id)options;	// 0x349eaaa1
+ (Context *)glesInternalContextOptions:(id)options;	// 0x349ea929
- (id)init;	// 0x349e9999
- (id)initWithEAGLContext:(id)eaglcontext;	// 0x349e974d
- (id)initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x349e9761
- (CGColorSpaceRef)_colorspace;	// 0x349ead51
- (void)_gpuContextCheck;	// 0x349ead65
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x349eacd5
- (bool)_isGPUContext;	// 0x349ea03d
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect;	// 0x349ea69d
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format;	// 0x349ea6fd
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x349ea74d
- (IOSurfaceRef)createIOSurface:(id)surface;	// 0x349ea341
- (IOSurfaceRef)createIOSurface:(id)surface fromRect:(CGRect)rect;	// 0x349ea395
- (void)dealloc;	// 0x349e9a0d
- (void)drawImage:(id)image atPoint:(CGPoint)point fromRect:(CGRect)rect;	// 0x349ea065
- (void)drawImage:(id)image inRect:(CGRect)rect fromRect:(CGRect)rect3;	// 0x349ea0d1
- (CGSize)inputImageMaximumSize;	// 0x349ea8c1
- (void)lock;	// 0x349e9529
- (unsigned long)maximumInputImageSize;	// 0x349ea891
- (unsigned long)maximumOutputImageSize;	// 0x349ea8a9
- (CGSize)outputImageMaximumSize;	// 0x349ea8f5
- (void)render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x349e9a81
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x349e9e31
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x349e9ec1
- (void)render:(id)render toIOSurface:(IOSurfaceRef)iosurface bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x349ea509
- (void)unlock;	// 0x349e953d
@end
