/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRMetadataPopulator.h"


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3293ac41
- (id)axMetadataFromAsset:(id)asset;	// 0x329aca91
- (id)copyrightForAsset:(id)asset;	// 0x3293def5
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x3293a93d
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x329ac925
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x329aca4d
- (id)ratingForAsset:(id)asset;	// 0x3293aaa1
- (id)starRatingForAsset:(id)asset;	// 0x3293ab09
- (id)summaryForAsset:(id)asset;	// 0x3293ab45
- (id)titleForAsset:(id)asset;	// 0x3293aa65
@end

