/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
@private
	NSString *_adamID;	// 64 = 0x40
}
- (id)initWithDictionary:(id)dictionary;	// 0x330c4cc9
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x330c4aa1
- (void)dealloc;	// 0x330c4d3d
- (void)encodeWithDictionary:(id)dictionary;	// 0x330c4d89
- (id)itemID;	// 0x330c4de5
- (void)remove;	// 0x330c4e69
- (BOOL)removeUponAcquisition;	// 0x330c4df5
- (void)save;	// 0x330c4df9
@end

