/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreTVMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)_initializeAbbreviatedTransformers;	// 0x328e326d
+ (void)_initializeDetailedTransformers;	// 0x328e3219
+ (void)_initializeMappings:(id)mappings;	// 0x328e2ebd
+ (void)initialize;	// 0x328e2c31
- (id)_formatControlForStoreOffer:(id)storeOffer requestedBy:(id)by;	// 0x328e3c0d
- (void)_populateAbbreviatedMetadata:(id)metadata withStoreOffer:(id)storeOffer;	// 0x328e3431
- (void)_populateDetailedMetadata:(id)metadata withStoreOffer:(id)storeOffer;	// 0x328e3621
- (void)_populateMetadataForControl:(id)control withStoreOffer:(id)storeOffer;	// 0x328e3341
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x328e2cf5
- (void)populateMetadataForControl:(id)control;	// 0x328e2ea9
@end

