/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MEITunesMediaCollection;

@interface MEITunesMediaCollectionImageProxy : XXUnknownSuperclass <BRImageProxy> {
	MEITunesMediaCollection *_collection;	// 4 = 0x4
}
+ (id)imageProxyWithCollection:(id)collection;	// 0xf1e9
- (id)initWithCollection:(id)collection;	// 0xf199
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0xf095
- (void)dealloc;	// 0xf151
- (id)defaultImageForImageSize:(int)imageSize;	// 0xf0cd
- (id)imageForImageSize:(int)imageSize;	// 0xf111
- (id)imageIDForImageSize:(int)imageSize;	// 0xf131
- (id)object;	// 0xf099
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0xf0a9
@end
