/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
	NSString *_adamID;	// 64 = 0x40
}
- (id)initWithDictionary:(id)dictionary;	// 0x13b9c1
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x13b805
- (void)dealloc;	// 0x13ba35
- (void)encodeWithDictionary:(id)dictionary;	// 0x13ba81
- (id)itemID;	// 0x13badd
- (void)remove;	// 0x13bb61
- (BOOL)removeUponAcquisition;	// 0x13baed
- (void)save;	// 0x13baf1
@end

