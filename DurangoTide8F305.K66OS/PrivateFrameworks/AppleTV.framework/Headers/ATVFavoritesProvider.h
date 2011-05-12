/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, ATVFavoritesControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFavoritesProvider : NSObject <BRProvider> {
@private
	NSArray *_favorites;	// 4 = 0x4
	ATVFavoritesControlFactory *_factory;	// 8 = 0x8
}
+ (id)provider;	// 0x30721689
+ (id)providerWithFavorites:(id)favorites;	// 0x307215f1
+ (id)providerWithItemType:(int)itemType;	// 0x30721625
- (id)initWithFavorites:(id)favorites;	// 0x30721529
- (void)_favoritesChanged:(id)changed;	// 0x30721429
- (id)controlFactory;	// 0x30721415
- (id)dataAtIndex:(long)index;	// 0x30721485
- (long)dataCount;	// 0x30721465
- (void)dealloc;	// 0x307214a5
- (id)hashForDataAtIndex:(long)index;	// 0x30721425
@end

