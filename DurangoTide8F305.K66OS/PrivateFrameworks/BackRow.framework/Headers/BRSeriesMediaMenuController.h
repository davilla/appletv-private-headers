/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaMenuController.h"
#import "BRTabControlDelegate.h"

@class NSMutableDictionary, NSString, BRPreferences, NSSet, BRTabControl;
@protocol BRProvider;

@interface BRSeriesMediaMenuController : BRMediaMenuController <BRTabControlDelegate> {
@private
	NSSet *_mediaTypes;	// 136 = 0x88
	long _errorNumberForNoContent;	// 140 = 0x8c
	BOOL _forSharedContent;	// 144 = 0x90
	BOOL _showUnwatchedOnly;	// 145 = 0x91
	NSString *_series;	// 148 = 0x94
	int _sortState;	// 152 = 0x98
	BRPreferences *_prefs;	// 156 = 0x9c
	NSMutableDictionary *_savedSelectionBySortState;	// 160 = 0xa0
	BRTabControl *_tabControl;	// 164 = 0xa4
	id<BRProvider> _playlistProvider;	// 168 = 0xa8
	id<BRProvider> _dateProvider;	// 172 = 0xac
	id<BRProvider> _showProvider;	// 176 = 0xb0
	id<BRProvider> _unwatchedProvider;	// 180 = 0xb4
}
@property(assign) long errorNumberForNoContent;	// G=0x3294fc65; S=0x3294fc55; converted property
@property(readonly, assign) BOOL forSharedContent;	// G=0x3294fc25; converted property
@property(assign) int sortState;	// G=0x3294fc35; S=0x329514ed; converted property
@property(retain) BRTabControl *tabControl;	// G=0x3294fc45; S=0x32951471; converted property
+ (id)seriesControllerForTypes:(id)types;	// 0x32951bdd
+ (id)seriesControllerForTypes:(id)types forSeries:(id)series;	// 0x32951b39
+ (id)seriesUnwatchedControllerForTypes:(id)types forSeries:(id)series;	// 0x32951ae5
+ (id)sharedSeriesControllerForTypes:(id)types;	// 0x32951b8d
- (id)init;	// 0x32951aa9
- (id)initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent;	// 0x32951881
- (id)initWithTypes:(id)types forSharedContent:(BOOL)sharedContent;	// 0x329518ad
- (void)_buildPlaylistsMenu;	// 0x3294fe69
- (BOOL)_checkProviderOK:(id)ok;	// 0x3294fcf9
- (id)_currentProviders;	// 0x329505bd
- (id)_deepestFocusedControl;	// 0x3294fcd5
- (void)_handleContextMenuSelection:(id)selection;	// 0x329501a9
- (id)_hashForIndex:(long)index;	// 0x329500e5
- (id)_identifierFromTypes:(id)types;	// 0x32951e69
- (id)_initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent forceFilterOutWatched:(BOOL)watched;	// 0x32950665
- (void)_itemSelected;	// 0x32950441
- (id)_playlistProvider;	// 0x3294ff09
- (id)_playlistsParade;	// 0x3294fd8d
- (long)_rowForHash:(id)hash;	// 0x32950125
- (id)_sortOrderFilterPrefKey;	// 0x32950db9
- (id)actionItemAtIndex:(long)index;	// 0x3295130d
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x32951361
- (void)arrayItemSelected:(id)selected;	// 0x32950cb9
- (BOOL)brEventAction:(id)action;	// 0x32951c29
- (id)controlForContextMenuPositioning;	// 0x32950e61
- (id)controlForContextMenuStart;	// 0x32950e75
- (void)controlWasActivated;	// 0x329516cd
- (void)dealloc;	// 0x32951781
- (int)defaultSortItem;	// 0x3294fc7d
// converted property getter: - (long)errorNumberForNoContent;	// 0x3294fc65
// converted property getter: - (BOOL)forSharedContent;	// 0x3294fc25
- (BOOL)isValidAfterDataUpdate;	// 0x329513f9
- (id)itemForContextMenuFromSelection:(id)selection;	// 0x32950bad
- (id)keyForSortState:(int)sortState;	// 0x3294fcbd
- (void)layoutSubcontrols;	// 0x32951d25
- (void)mediaAssetSelected:(id)selected;	// 0x32950c85
- (BOOL)okToShowNoItemsWithCurrentProvider:(id)currentProvider;	// 0x32950c0d
- (id)providerForSortState:(int)sortState;	// 0x3294fc81
- (id)providersForContextMenu;	// 0x32950e89
- (void)setDefaultSelection;	// 0x32950aa1
// converted property setter: - (void)setErrorNumberForNoContent:(long)noContent;	// 0x3294fc55
// converted property setter: - (void)setSortState:(int)state;	// 0x329514ed
// converted property setter: - (void)setTabControl:(id)control;	// 0x32951471
- (BOOL)showPlaylists;	// 0x32950c59
- (BOOL)showUnwatched;	// 0x3294fc15
// converted property getter: - (int)sortState;	// 0x3294fc35
// converted property getter: - (id)tabControl;	// 0x3294fc45
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x329512a5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3294fc75
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x3294fc79
@end

