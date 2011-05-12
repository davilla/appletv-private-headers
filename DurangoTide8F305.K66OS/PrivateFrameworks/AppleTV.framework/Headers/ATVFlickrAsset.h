/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRPhotoMediaAsset.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrAsset : BRPhotoMediaAsset {
@private
	NSDictionary *_assetInfo;	// 40 = 0x28
}
+ (id)assetWithAssetInfo:(id)assetInfo;	// 0x30731331
- (id)initWithAssetInfo:(id)assetInfo;	// 0x3073120d
- (id)_imagePathWithSize:(int)size;	// 0x30731365
- (void)dealloc;	// 0x307311c5
- (id)flickrIdentifier;	// 0x30731179
- (id)imageProxy;	// 0x30731159
- (BOOL)isLocal;	// 0x30731155
- (id)mediaType;	// 0x307311a5
@end

