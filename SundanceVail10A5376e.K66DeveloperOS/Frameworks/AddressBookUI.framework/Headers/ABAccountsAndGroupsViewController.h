/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABAbstractViewController.h"

@class ABPeoplePickerNavigationController, ABAccountsAndGroupDataSource, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
	ABAccountsAndGroupDataSource *_dataSource;	// 204 = 0xcc
	BOOL _needsReload;	// 208 = 0xd0
	BOOL _tableViewNeedsReloadAfterResume;	// 209 = 0xd1
	BOOL _showsRefreshButton;	// 210 = 0xd2
	ABPeoplePickerNavigationController *_peoplePickerNavigationController;	// 212 = 0xd4
}
@property(readonly, assign, nonatomic) ABAccountsAndGroupDataSource *dataSource;	// G=0x30fe9165; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x30fe7ef5; S=0x30fe7ec9; 
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x30fe7ea1; S=0x30fe7e75; 
@property(retain) id model;	// G=0x30fe8155; S=0x30fe8175; converted property
@property(assign, nonatomic) ABPeoplePickerNavigationController *peoplePickerNavigationController;	// G=0x30fe9175; S=0x30fe9185; @synthesize=_peoplePickerNavigationController
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x30fe7c9d; 
- (id)initWithModel:(id)model;	// 0x30fe7f1d
- (void)_applyAccessibilityFontChanges;	// 0x30fe7de5
- (void)_applyStylesToTableView:(id)tableView;	// 0x30fe8201
- (void)_updateDisplayedContactsFilterFromSelection;	// 0x30fe8efd
- (int)abViewControllerType;	// 0x30fe86fd
- (void)accessibilityLargeTextDidChange;	// 0x30fe7e35
- (id)allGroupWrapperIndexPaths;	// 0x31018f01
- (void)applicationDidResume;	// 0x30fe86e9
// declared property getter: - (id)dataSource;	// 0x30fe9165
- (void)dealloc;	// 0x30fe808d
- (void)done:(id)done;	// 0x30fe8701
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x30fe7ef5
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x30fe7ea1
- (void)loadView;	// 0x30fe841d
// converted property getter: - (id)model;	// 0x30fe8155
- (void)modelDatabaseChange:(id)change;	// 0x30fe9135
// declared property getter: - (id)peoplePickerNavigationController;	// 0x30fe9175
- (void)refreshEverythingNow;	// 0x30fe7b6d
- (void)reloadData;	// 0x30fe7b09
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x30fe7ec9
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x30fe7e75
// converted property setter: - (void)setModel:(id)model;	// 0x30fe8175
// declared property setter: - (void)setPeoplePickerNavigationController:(id)controller;	// 0x30fe9185
- (void)setStyleProvider:(id)provider;	// 0x30fe83b1
// declared property getter: - (id)tableView;	// 0x30fe7c9d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30fe8f71
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x30fe8e65
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x30fe8ad9
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x30fe8741
- (void)updateRefreshButton;	// 0x30fe7ba1
- (void)viewDidAppear:(BOOL)view;	// 0x30fe8651
- (void)viewWillAppear:(BOOL)view;	// 0x30fe8589
- (void)viewWillDisappear:(BOOL)view;	// 0x30fe869d
@end

