/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BROptionDialog.h> // Unknown library

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
@private
	ATVStoreFavorite *_favorite;	// 128 = 0x80
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x3064c64d
- (void)_optionSelected:(id)selected;	// 0x3064c55d
- (id)_textForFavoriteType:(int)favoriteType;	// 0x3064c611
- (void)dealloc;	// 0x3064c5c9
@end

