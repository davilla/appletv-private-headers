/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSViewControllerOffsetProtocol.h"
#import "PSViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSMutableDictionary, UITableView, NSArray, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, NSMutableArray;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol> {
	NSMutableArray *_prequeuedReusablePSTableCells;	// 196 = 0xc4
	NSMutableDictionary *_cells;	// 200 = 0xc8
	BOOL _cachesCells;	// 204 = 0xcc
	BOOL _reusesCells;	// 205 = 0xcd
	BOOL _forceSynchronousIconLoadForCreatedCells;	// 206 = 0xce
	UITableView *_table;	// 208 = 0xd0
	NSArray *_specifiers;	// 212 = 0xd4
	NSMutableDictionary *_specifiersByID;	// 216 = 0xd8
	NSMutableArray *_groups;	// 220 = 0xdc
	NSString *_specifierID;	// 224 = 0xe0
	NSMutableArray *_bundleControllers;	// 228 = 0xe4
	BOOL _bundlesLoaded;	// 232 = 0xe8
	BOOL _showingSetupController;	// 233 = 0xe9
	UIActionSheet *_actionSheet;	// 236 = 0xec
	UIAlertView *_alertView;	// 240 = 0xf0
	BOOL _swapAlertButtons;	// 244 = 0xf4
	BOOL _keyboardWasVisible;	// 245 = 0xf5
	UIKeyboard *_keyboard;	// 248 = 0xf8
	UIPopoverController *_popupStylePopoverController;	// 252 = 0xfc
	BOOL _popupStylePopoverShouldRePresent;	// 256 = 0x100
	BOOL _popupIsModal;	// 257 = 0x101
	BOOL _popupIsDismissing;	// 258 = 0x102
	BOOL _hasAppeared;	// 259 = 0x103
	float _verticalContentOffset;	// 260 = 0x104
	NSString *_offsetItemName;	// 264 = 0x108
	CGPoint _contentOffsetWithKeyboard;	// 268 = 0x10c
}
@property(assign, nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;	// G=0x31d727d9; S=0x31d727e9; @synthesize=_forceSynchronousIconLoadForCreatedCells
@property(readonly, retain) UIPopoverController *popupStylePopoverController;	// G=0x31d728f5; converted property
@property(retain) id specifier;	// G=0x31d6aa79; S=0x31d6adb1; converted property
@property(retain) NSString *specifierID;	// G=0x31d6e279; S=0x31d6e23d; converted property
@property(retain) NSArray *specifiers;	// G=0x31d6ab95; S=0x31d6ae21; converted property
@property(readonly, retain) UITableView *table;	// G=0x31d6a9e9; converted property
@property(readonly, assign) float verticalContentOffset;	// G=0x31d72731; converted property
+ (BOOL)displaysButtonBar;	// 0x31d6a7a9
- (id)init;	// 0x31d6d915
- (id)initForContentSize:(CGSize)contentSize;	// 0x31d6da49
- (void)_addIdentifierForSpecifier:(id)specifier;	// 0x31d6ac25
- (id)_createGroupIndices:(id)indices;	// 0x31d6dd5d
- (id)_customViewForSpecifier:(id)specifier class:(Class)aClass isHeader:(BOOL)header;	// 0x31d6ee9d
- (BOOL)_getGroup:(int *)group row:(int *)row ofSpecifierAtIndex:(int)index groups:(id)groups;	// 0x31d6b66d
- (float)_getKeyboardIntersectionHeight;	// 0x31d71cf1
- (void)_insertContiguousSpecifiers:(id)specifiers atIndex:(int)index animated:(BOOL)animated;	// 0x31d6bad9
- (void)_keyboardDidHide:(id)_keyboard;	// 0x31d726b5
- (void)_keyboardWillHide:(id)_keyboard;	// 0x31d72475
- (void)_keyboardWillShow:(id)_keyboard;	// 0x31d7205d
- (void)_loadBundleControllers;	// 0x31d6d545
- (int)_nextGroupInSpecifiersAfterIndex:(int)specifiersAfterIndex inArray:(id)array;	// 0x31d6cb11
- (void)_removeContiguousSpecifiers:(id)specifiers animated:(BOOL)animated;	// 0x31d6c495
- (void)_removeIdentifierForSpecifier:(id)specifier;	// 0x31d6ad6d
- (void)_returnKeyPressed:(id)pressed;	// 0x31d6fd35
- (void)_setContentInset:(float)inset;	// 0x31d71fc5
- (void)_setNotShowingSetupController;	// 0x31d727c5
- (float)_tableView:(id)view heightForCustomInSection:(int)section isHeader:(BOOL)header;	// 0x31d6ef51
- (id)_tableView:(id)view viewForCustomInSection:(int)section isHeader:(BOOL)header;	// 0x31d6f0ed
- (void)_unloadBundleControllers;	// 0x31d6d5c9
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x31d70ae9
- (void)addSpecifier:(id)specifier;	// 0x31d6c239
- (void)addSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d6c24d
- (void)addSpecifiersFromArray:(id)array;	// 0x31d6c295
- (void)addSpecifiersFromArray:(id)array animated:(BOOL)animated;	// 0x31d6c2a9
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x31d70a1d
- (Class)backgroundViewClass;	// 0x31d6da79
- (void)beginUpdates;	// 0x31d6af79
- (id)bundle;	// 0x31d6a9f9
- (id)cachedCellForSpecifier:(id)specifier;	// 0x31d6e3b1
- (id)cachedCellForSpecifierID:(id)specifierID;	// 0x31d6e3f9
- (void)clearCache;	// 0x31d6a7ad
- (void)confirmationViewAcceptedForSpecifier:(id)specifier;	// 0x31d70985
- (void)confirmationViewCancelledForSpecifier:(id)specifier;	// 0x31d709d1
- (BOOL)containsSpecifier:(id)specifier;	// 0x31d6b4e5
- (id)contentScrollView;	// 0x31d6da95
- (id)controllerForRowAtIndexPath:(id)indexPath;	// 0x31d70d35
- (id)controllerForSpecifier:(id)specifier;	// 0x31d70dc1
- (void)createGroupIndices;	// 0x31d6de1d
- (void)createPrequeuedPSTableCells:(unsigned)cells etched:(BOOL)etched;	// 0x31d6e429
- (void)dealloc;	// 0x31d6d649
- (id)description;	// 0x31d6a965
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x31d6f285
- (void)dismissPopover;	// 0x31d717e5
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x31d717f9
- (void)endUpdates;	// 0x31d6af99
- (id)findFirstVisibleResponder;	// 0x31d6f675
// declared property getter: - (BOOL)forceSynchronousIconLoadForCreatedCells;	// 0x31d727d9
- (void)formSheetViewWillDisappear;	// 0x31d6fbcd
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifier:(id)specifier;	// 0x31d6b625
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifierAtIndex:(int)index;	// 0x31d6b6f9
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifierID:(id)specifierID;	// 0x31d6b5e9
- (void)handleURL:(id)url;	// 0x31d71855
- (int)indexForIndexPath:(id)indexPath;	// 0x31d6af05
- (int)indexForRow:(int)row inGroup:(int)group;	// 0x31d6b775
- (int)indexOfGroup:(int)group;	// 0x31d6b509
- (int)indexOfSpecifier:(id)specifier;	// 0x31d6b4bd
- (int)indexOfSpecifierID:(id)specifierID;	// 0x31d6b475
- (id)indexPathForIndex:(int)index;	// 0x31d6ae89
- (id)indexPathForSpecifier:(id)specifier;	// 0x31d6aed5
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifier:(id)specifier;	// 0x31d6c1cd
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d6c059
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifierID:(id)anId;	// 0x31d6c1f1
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifierID:(id)anId animated:(BOOL)animated;	// 0x31d6c0c1
- (void)insertContiguousSpecifiers:(id)specifiers atEndOfGroup:(int)group;	// 0x31d6c215
- (void)insertContiguousSpecifiers:(id)specifiers atEndOfGroup:(int)group animated:(BOOL)animated;	// 0x31d6c10d
- (void)insertContiguousSpecifiers:(id)specifiers atIndex:(int)index;	// 0x31d6c1a9
- (void)insertContiguousSpecifiers:(id)specifiers atIndex:(int)index animated:(BOOL)animated;	// 0x31d6c035
- (void)insertSpecifier:(id)specifier afterSpecifier:(id)specifier2;	// 0x31d6ba6d
- (void)insertSpecifier:(id)specifier afterSpecifier:(id)specifier2 animated:(BOOL)animated;	// 0x31d6b911
- (void)insertSpecifier:(id)specifier afterSpecifierID:(id)anId;	// 0x31d6ba91
- (void)insertSpecifier:(id)specifier afterSpecifierID:(id)anId animated:(BOOL)animated;	// 0x31d6b971
- (void)insertSpecifier:(id)specifier atEndOfGroup:(int)group;	// 0x31d6bab5
- (void)insertSpecifier:(id)specifier atEndOfGroup:(int)group animated:(BOOL)animated;	// 0x31d6b9ad
- (void)insertSpecifier:(id)specifier atIndex:(int)index;	// 0x31d6ba49
- (void)insertSpecifier:(id)specifier atIndex:(int)index animated:(BOOL)animated;	// 0x31d6b87d
- (void)lazyLoadBundle:(id)bundle;	// 0x31d70b7d
- (id)loadSpecifiersFromPlistName:(id)plistName target:(id)target;	// 0x31d6aa8d
- (void)loadView;	// 0x31d6dad9
- (void)loseFocus;	// 0x31d6de75
- (void)migrateSpecifierMetadataFrom:(id)from to:(id)to;	// 0x31d6df7d
- (int)numberOfGroups;	// 0x31d6b55d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31d6e2b5
- (BOOL)performActionForSpecifier:(id)specifier;	// 0x31d6fe0d
- (BOOL)performButtonActionForSpecifier:(id)specifier;	// 0x31d700e5
- (BOOL)performConfirmationActionForSpecifier:(id)specifier;	// 0x31d70291
- (BOOL)performConfirmationCancelActionForSpecifier:(id)specifier;	// 0x31d704b5
- (BOOL)performLoadActionForSpecifier:(id)specifier;	// 0x31d6ff39
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x31d7179d
- (BOOL)popoverControllerShouldDismissPopover:(id)popoverController;	// 0x31d71785
// converted property getter: - (id)popupStylePopoverController;	// 0x31d728f5
- (void)popupViewWillDisappear;	// 0x31d6fc69
- (void)prepareSpecifiersMetadata;	// 0x31d6f8cd
- (void)pushController:(id)controller;	// 0x31d71841
- (void)pushController:(id)controller animate:(BOOL)animate;	// 0x31d71481
- (void)reload;	// 0x31d6ded1
- (void)reloadIconForSpecifierForBundle:(id)bundle;	// 0x31d71bc5
- (void)reloadSpecifier:(id)specifier;	// 0x31d6b419
- (void)reloadSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d6b3c9
- (void)reloadSpecifierAtIndex:(int)index;	// 0x31d6b3b5
- (void)reloadSpecifierAtIndex:(int)index animated:(BOOL)animated;	// 0x31d6afb9
- (void)reloadSpecifierID:(id)anId;	// 0x31d6b461
- (void)reloadSpecifierID:(id)anId animated:(BOOL)animated;	// 0x31d6b42d
- (void)reloadSpecifiers;	// 0x31d6df81
- (void)removeContiguousSpecifiers:(id)specifiers;	// 0x31d6c9b9
- (void)removeContiguousSpecifiers:(id)specifiers animated:(BOOL)animated;	// 0x31d6c9a9
- (void)removeLastSpecifier;	// 0x31d6c439
- (void)removeLastSpecifierAnimated:(BOOL)animated;	// 0x31d6c44d
- (void)removeSpecifier:(id)specifier;	// 0x31d6c3fd
- (void)removeSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d6c2f1
- (void)removeSpecifierAtIndex:(int)index;	// 0x31d6c425
- (void)removeSpecifierAtIndex:(int)index animated:(BOOL)animated;	// 0x31d6c38d
- (void)removeSpecifierID:(id)anId;	// 0x31d6c411
- (void)removeSpecifierID:(id)anId animated:(BOOL)animated;	// 0x31d6c359
- (void)replaceContiguousSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2;	// 0x31d6c9cd
- (void)replaceContiguousSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2 animated:(BOOL)animated;	// 0x31d6c9f1
- (void)returnPressedAtEnd;	// 0x31d6fca9
- (int)rowsForGroup:(int)group;	// 0x31d6b7b1
- (void)selectRowForSpecifier:(id)specifier;	// 0x31d726c9
- (void)setCachesCells:(BOOL)cells;	// 0x31d6a8d5
- (void)setDesiredVerticalContentOffset:(float)offset;	// 0x31d72775
- (void)setDesiredVerticalContentOffsetItemNamed:(id)named;	// 0x31d72785
// declared property setter: - (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)createdCells;	// 0x31d727e9
- (void)setReusesCells:(BOOL)cells;	// 0x31d6a8a1
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x31d6adb1
// converted property setter: - (void)setSpecifierID:(id)anId;	// 0x31d6e23d
// converted property setter: - (void)setSpecifiers:(id)specifiers;	// 0x31d6ae21
- (void)setTitle:(id)title;	// 0x31d6e289
- (BOOL)shouldReloadSpecifiersOnResume;	// 0x31d727c1
- (BOOL)shouldSelectResponderOnAppearance;	// 0x31d6f601
- (void)showConfirmationSheetForSpecifier:(id)specifier;	// 0x31d7092d
- (void)showConfirmationViewForSpecifier:(id)specifier;	// 0x31d70901
- (void)showConfirmationViewForSpecifier:(id)specifier useAlert:(BOOL)alert swapAlertButtons:(BOOL)buttons;	// 0x31d7066d
- (void)showPINSheet:(id)sheet;	// 0x31d727f9
// converted property getter: - (id)specifier;	// 0x31d6aa79
- (id)specifierAtIndex:(int)index;	// 0x31d6b59d
- (id)specifierForID:(id)anId;	// 0x31d71419
// converted property getter: - (id)specifierID;	// 0x31d6e279
// converted property getter: - (id)specifiers;	// 0x31d6ab95
- (id)specifiersInGroup:(int)group;	// 0x31d6b7f5
// converted property getter: - (id)table;	// 0x31d6a9e9
- (id)tableBackgroundColor;	// 0x31d6daa5
- (int)tableStyle;	// 0x31d6da75
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31d6e5ad
- (id)tableView:(id)view detailTextForHeaderInSection:(int)section;	// 0x31d6ebed
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x31d6e9b1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31d71209
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x31d6f1e9
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x31d6f1a1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x31d6ea65
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31d6e2f5
- (int)tableView:(id)view titleAlignmentForFooterInSection:(int)section;	// 0x31d6ee01
- (int)tableView:(id)view titleAlignmentForHeaderInSection:(int)section;	// 0x31d6ed65
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x31d6ecd9
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x31d6eb71
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x31d6f20d
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x31d6f1c5
- (Class)tableViewClass;	// 0x31d6da59
- (void)updateSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2;	// 0x31d6cb71
- (void)updateSpecifiersInRange:(NSRange)range withSpecifiers:(id)specifiers;	// 0x31d6cc19
// converted property getter: - (float)verticalContentOffset;	// 0x31d72731
- (void)viewDidAppear:(BOOL)view;	// 0x31d6fac1
- (void)viewDidLoad;	// 0x31d6f759
- (void)viewDidUnload;	// 0x31d6dcd1
- (void)viewWillAppear:(BOOL)view;	// 0x31d6f3ad
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31d6f231
@end

