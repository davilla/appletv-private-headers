/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class NSTimer, BRTextControl, NSMutableArray, BRScrollControl, NSMutableDictionary, BRCursorControl, BRGridView, BRHeaderControl, BRWaitPromptControl, BRPanelControl;

__attribute__((visibility("hidden")))
@interface ATVFavoritesController : BRController {
	int _itemType;	// 100 = 0x64
	NSMutableArray *_favorites;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	BRScrollControl *_scroller;	// 112 = 0x70
	BRPanelControl *_panel;	// 116 = 0x74
	BRGridView *_grid;	// 120 = 0x78
	BRCursorControl *_cursor;	// 124 = 0x7c
	BRTextControl *_rearrangeInstructions;	// 128 = 0x80
	BOOL _hasBeenActivated;	// 132 = 0x84
	NSMutableDictionary *_redDotMap;	// 136 = 0x88
	NSTimer *_spinnerTimer;	// 140 = 0x8c
	BRWaitPromptControl *_spinner;	// 144 = 0x90
	BOOL _showsSpinner;	// 148 = 0x94
	BOOL _favoriteOrderChanged;	// 149 = 0x95
	BOOL _needsReload;	// 150 = 0x96
	BOOL _hasInitiatedFirstFetch;	// 151 = 0x97
}
@property(assign, nonatomic) BOOL hasInitiatedFirstFetch;	// G=0x135a69; S=0x135a79; @synthesize=_hasInitiatedFirstFetch
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x134ec5
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x1361f1
- (void)_favoriteInsertedNotification:(id)notification;	// 0x135ee9
- (void)_favoriteRemovedNotification:(id)notification;	// 0x135fd1
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x136135
- (void)_fetchFavoritesFromKeyValueStore;	// 0x135a89
- (void)_markAsDirtyAndReloadIfActive;	// 0x136a05
- (id)_mediaType;	// 0x136c45
- (id)_noFavoritesController;	// 0x136169
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x136dcd
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x136d5d
- (void)_reload;	// 0x135e49
- (void)_reloadIfNeeded;	// 0x135ec5
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x136d05
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x136c8d
- (BOOL)_setupAfterFavoritesFetch;	// 0x135b59
- (BOOL)_shouldShowRedDots;	// 0x1361d1
- (void)_showDataChangedNotification:(id)notification;	// 0x1360f9
- (void)_showGrid;	// 0x1363e9
- (void)_showSpinner:(BOOL)spinner;	// 0x136235
- (id)_sortedFavorites;	// 0x135cc9
- (void)_spinnerTimerFired:(id)fired;	// 0x13631d
- (void)_storeFavoriteChangedNotification:(id)notification;	// 0x13606d
- (id)accessibilityScreenContent;	// 0x1354d1
- (void)controlWasActivated;	// 0x135085
- (void)controlWasDeactivated;	// 0x13513d
- (void)dealloc;	// 0x134f69
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x135921
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x135a31
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x13585d
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x135529
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x135825
- (BOOL)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x135925
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x135a3d
// declared property getter: - (BOOL)hasInitiatedFirstFetch;	// 0x135a69
- (BOOL)isNetworkDependent;	// 0x135239
- (void)layoutSubcontrols;	// 0x13523d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x135511
- (long)numberOfItemsInGrid:(id)grid;	// 0x1354f1
// declared property setter: - (void)setHasInitiatedFirstFetch:(BOOL)fetch;	// 0x135a79
- (void)setRearrangeInstructionsHidden:(BOOL)hidden;	// 0x136a4d
- (void)wasPushed;	// 0x1351cd
@end

