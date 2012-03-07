/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMetadataPopulator.h"


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x33b06f6d
- (id)axMetadataFromAsset:(id)asset;	// 0x33b06a15
- (id)copyrightForAsset:(id)asset;	// 0x33b06cb1
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x33b06d05
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x33b06e4d
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x33b06cb5
- (id)ratingForAsset:(id)asset;	// 0x33b06b89
- (id)starRatingForAsset:(id)asset;	// 0x33b06bd1
- (id)summaryForAsset:(id)asset;	// 0x33b06c19
- (id)titleForAsset:(id)asset;	// 0x33b06b41
@end
