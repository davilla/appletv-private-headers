/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRXMLMediaAsset;

__attribute__((visibility("hidden")))
@interface BRXMLImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRXMLMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x28033d
- (id)initWithAsset:(id)asset;	// 0x280385
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x28057d
- (void)dealloc;	// 0x2803dd
- (id)defaultImageForImageSize:(int)imageSize;	// 0x2804c9
- (id)imageForImageSize:(int)imageSize;	// 0x280479
- (id)imageIDForImageSize:(int)imageSize;	// 0x280429
- (id)object;	// 0x280581
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x280515
@end
