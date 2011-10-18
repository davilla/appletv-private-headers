/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray;

@interface BRATVDataImageProxy : NSObject <BRImageProxy> {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVDataClientRef _dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(void *)mediaObject;	// 0x341b61a1
- (id)initWithMediaObject:(void *)mediaObject;	// 0x341b61dd
- (void)_cancelImageForImageID:(id)imageID;	// 0x341b6a59
- (id)_imageIDForImageSize:(int)imageSize;	// 0x341b6b55
- (id)_imageIDStringForSize:(int)size;	// 0x341b6b11
- (id)_imageManager;	// 0x341b6c9d
- (void *)_mediaID;	// 0x341b6d6d
- (void)_removeTokenForImageID:(id)imageID;	// 0x341b69fd
- (void)_saveToken:(void *)token forImageID:(id)imageID;	// 0x341b69b1
- (id)_tokenInfoForImageID:(id)imageID;	// 0x341b6935
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x341b6811
- (void)dealloc;	// 0x341b62c1
- (id)defaultImageForImageSize:(int)imageSize;	// 0x341b6795
- (id)imageForImageSize:(int)imageSize;	// 0x341b6349
- (BOOL)imageForImageSizeIsAvailable:(int)imageSizeIsAvailable;	// 0x341b68e5
- (id)imageIDForImageSize:(int)imageSize;	// 0x341b6339
- (id)object;	// 0x341b68d5
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x341b6925
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x341b680d
@end

