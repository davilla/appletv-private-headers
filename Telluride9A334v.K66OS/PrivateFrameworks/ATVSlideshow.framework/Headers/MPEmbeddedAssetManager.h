/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAssetManager.h"
#import "ATVSlideshow-Structs.h"


@interface MPEmbeddedAssetManager : MPAssetManager {
}
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x32fb4275
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x32fb44e9
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x32fb43f1
+ (FaceCoreAPI *)createFaceAPI;	// 0x32fb40b5
- (id)absolutePathFromPath:(id)path;	// 0x32fb40b1
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x32fb38a5
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x32fb381d
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x32fb3a01
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x32fb3909
@end

