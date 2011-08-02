/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRViewController.h"

@class BRMarimbaMenuView, NSTimer, NSArray, NSMutableArray;

@interface BRSlideshowSettingsController : BRViewController {
@private
	BRMarimbaMenuView *_marimbaMenuView;	// 64 = 0x40
	NSMutableArray *_menuHistory;	// 68 = 0x44
	NSArray *_musicServers;	// 72 = 0x48
	NSArray *_musicPlaylists;	// 76 = 0x4c
	ATVDataServerRef _defaultMusicServer;	// 80 = 0x50
	ATVMediaQueryRef _playlistsQuery;	// 84 = 0x54
	NSTimer *_randomThemeSwappingTimer;	// 88 = 0x58
	int _currentMenuType;	// 92 = 0x5c
	int _previousSelectionIndex;	// 96 = 0x60
	BOOL _ignoreFocusMessages;	// 100 = 0x64
	BOOL _initialMenuSwitchInProgress;	// 101 = 0x65
	BOOL _playlistQueryInProgress;	// 102 = 0x66
	BOOL _updateDefaultMusicMenuAfterPlaylistQueryCompletes;	// 103 = 0x67
	BOOL _memoryWarningAlreadyReceived;	// 104 = 0x68
}
+ (id)randomTransitionIDs;	// 0x3300bc85
+ (id)randomlySelectedSlideshowThemeIdentifier;	// 0x3300bf8d
+ (id)slideshowIdentifierForTitle:(id)title;	// 0x3300c011
+ (id)slideshowThemeTitles;	// 0x3300c0e5
+ (id)slideshowTransitionTitles;	// 0x3300befd
+ (id)timePerSlideValues;	// 0x3300bbd5
+ (id)transitionIdentifierForTitle:(id)title;	// 0x3300be91
- (id)init;	// 0x3300bbbd
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x3300c2a5
- (id)_allSharedComputers;	// 0x3300ace5
- (id)_currentPlaylistName;	// 0x3300d1fd
- (ATVDataClientRef)_dataClient;	// 0x3300df71
- (void)_dataClientStatusChanged:(id)changed;	// 0x3300dd85
- (int)_indexOfStringItem:(id)stringItem inArray:(id *)array itemCount:(int)count;	// 0x3300b96d
- (void)_initiatePlaylistsQuery;	// 0x3300dc59
- (void)_lowMemoryNotification:(id)notification;	// 0x3300b3b9
- (void)_mainSettingsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300ae21
- (void)_mainSettingsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3300c729
- (id)_mainSettingsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300afe1
- (long)_mainSettingsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x3300af9d
- (id)_mainSettingsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x3300d801
- (long)_mainSettingsMenuNumberOfSectionsInList:(id)list;	// 0x3300ac09
- (void)_musicLibraryMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300ac21
- (void)_musicLibraryMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3300d9e5
- (id)_musicLibraryMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300d84d
- (long)_musicLibraryMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x3300ad35
- (id)_musicLibraryMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x3300d37d
- (long)_musicLibraryMenuNumberOfSectionsInList:(id)list;	// 0x3300ac1d
- (void)_playlistMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300ac25
- (void)_playlistMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3300cae9
- (id)_playlistMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300d071
- (long)_playlistMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x3300ac79
- (id)_playlistMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x3300d331
- (long)_playlistMenuNumberOfSectionsInList:(id)list;	// 0x3300aca9
- (void)_playlistsQueryComplete;	// 0x3300dfb1
- (void)_returnToPreviousMenu;	// 0x3300b47d
- (void)_runPlaylistsQuery;	// 0x3300de5d
- (void)_setPlaylistsQuery:(ATVMediaQueryRef)query;	// 0x3300d9ad
- (void)_swapSlideshowTheme:(id)theme;	// 0x3300addd
- (void)_switchToMenuType:(int)menuType rememberCurrentMenu:(BOOL)menu;	// 0x3300b6e1
- (void)_themeDetailsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300ad65
- (void)_themeDetailsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3300c551
- (id)_themeDetailsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300d679
- (long)_themeDetailsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x3300ac11
- (id)_themeDetailsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x3300d62d
- (long)_themeDetailsMenuNumberOfSectionsInList:(id)list;	// 0x3300ac0d
- (void)_toggleTimePerSlide;	// 0x3300d3c9
- (void)_updateListFocusOnMenuSwitch;	// 0x3300cd11
- (BOOL)brEventAction:(id)action;	// 0x3300c1c1
- (void)dealloc;	// 0x3300c46d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300b9fd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3300b9b1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3300ac01
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x3300ba49
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300bb6d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3300bacd
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3300ba7d
- (long)numberOfSectionsInList:(id)list;	// 0x3300bb1d
@end

