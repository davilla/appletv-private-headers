/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVFlickrImageProxy : NSObject <BRImageProxy> {
@private
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x3065e359
- (id)initWithAsset:(id)asset;	// 0x3065e38d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3065e11d
- (void)dealloc;	// 0x3065e311
- (id)defaultImageForImageSize:(int)imageSize;	// 0x3065e3dd
- (id)imageForImageSize:(int)imageSize;	// 0x3065e19d
- (id)imageIDForImageSize:(int)imageSize;	// 0x3065e2a9
- (id)object;	// 0x3065e109
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x3065e119
@end

