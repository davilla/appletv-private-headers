/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreCatalogItemController.h"
#import "AppleTV-Structs.h"

@class NSDictionary, BRMediaListControl, NSNumber;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogCollectionController : ATVMusicStoreCatalogItemController {
@private
	BRMediaListControl *_mediaListControl;	// 72 = 0x48
	NSDictionary *_itemToPlayWhenRentalQueryCompletes;	// 76 = 0x4c
	ATVMediaQueryRef _rentalQuery;	// 80 = 0x50
	BOOL _rentalQueryComplete;	// 84 = 0x54
	NSNumber *_seasonID;	// 88 = 0x58
}
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x30673a51
- (void)_blueDotInfoChanged;	// 0x3067388d
- (BOOL)_checkForItemsRented;	// 0x30674185
- (id)_favorite;	// 0x30673585
- (void)_favoriteItemsChanged:(id)changed;	// 0x30673855
- (void)_getBlueDotCount:(long *)count nonBlueDotCount:(long *)count2 withProvider:(id)provider;	// 0x30673165
- (void)_getEpisodeForSelectedItem:(id *)selectedItem andProvider:(id *)provider;	// 0x3067323d
- (void)_highlightFirstNonHeaderRow;	// 0x306736dd
- (BOOL)_highlightItemSelectedByUser;	// 0x30673815
- (void)_markAllAsWatched:(BOOL)watched;	// 0x30673ff5
- (void)_markSelectedEpisodeAsWatched:(BOOL)watched;	// 0x30674751
- (id)_providerForSelectedItem;	// 0x30673219
- (void)_pushEpisodeForUserSelectedItem;	// 0x306735b9
- (void)_rentalQueryComplete;	// 0x3067444d
- (id)_userSelectedItemWithListIndex:(long *)listIndex;	// 0x306732e9
- (id)accessibilityLabel;	// 0x30673941
- (id)accessibilitySecondaryLabel;	// 0x30673921
- (void)controlWasActivated;	// 0x30673961
- (void)dealloc;	// 0x30673f59
- (id)episodeForSelectedItem;	// 0x306738fd
- (void)markAsUnwatched;	// 0x30673101
- (void)markAsWatched;	// 0x30673119
- (void)markSeasonAsUnwatched;	// 0x3067309d
- (void)markSeasonAsWatched;	// 0x306730b5
- (void)playStoreItemWhenRentalQueryCompletes:(id)completes;	// 0x306738c5
- (id)providersForContextMenu;	// 0x30674825
- (void)relatedContentLoaded:(id)loaded;	// 0x30672fc1
- (void)wasExhumed;	// 0x306739a9
- (void)wasPushed;	// 0x306739e9
@end

