/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSString, AVMetadataItem;

__attribute__((visibility("hidden")))
@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5fc9d
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5fcfd
- (void).cxx_destruct;	// 0x60165
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x6015d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x60105
- (id)imageForImageSize:(int)imageSize;	// 0x5fdad
- (id)imageIDForImageSize:(int)imageSize;	// 0x5fd99
- (id)object;	// 0x60161
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x60159
@end
