/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABViewControllerBannerViewProtocol.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABMembersControllerDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABAbstractViewController.h"

@class ABMembersController, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
	ABMembersController *_membersController;	// 200 = 0xc8
	int _insertionProperty;	// 204 = 0xcc
	id _insertionValue;	// 208 = 0xd0
	id _insertionLabel;	// 212 = 0xd4
	int _rightButtonBehavior;	// 216 = 0xd8
	int _leftButtonBehavior;	// 220 = 0xdc
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;	// 224 = 0xe0
	_UIAccessDeniedView *_accessDeniedView;	// 228 = 0xe4
}
@property(readonly, assign, nonatomic) _UIAccessDeniedView *accessDeniedView;	// G=0x34fb2045; @synthesize=_accessDeniedView
@property(readonly, assign) BOOL allowsCancel;	// G=0x34f683e1; 
@property(readonly, assign) BOOL allowsCardEditing;	// G=0x34f68409; 
@property(readonly, retain) ABMembersController *membersController;	// G=0x34f6bf4d; converted property
@property(readonly, assign) BOOL shouldShowGroups;	// G=0x34f68455; 
@property(retain) id styleProvider;	// G=0x34f66701; S=0x34f6685d; converted property
- (id)initWithModel:(id)model;	// 0x34f66415
- (void)_applicationEnteringBackground;	// 0x34f6bf65
- (void)_applicationEnteringForeground;	// 0x34fb2035
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x34fb24cd
- (void)_updateForModel;	// 0x34fb2839
- (int)abViewControllerType;	// 0x34fb24c9
// declared property getter: - (id)accessDeniedView;	// 0x34fb2045
- (void)addPerson:(id)person;	// 0x34f94ad9
// declared property getter: - (BOOL)allowsCancel;	// 0x34f683e1
// declared property getter: - (BOOL)allowsCardEditing;	// 0x34f68409
- (BOOL)allowsShowingPersonsCards;	// 0x34fb2609
- (void)applicationDidResume;	// 0x34fb250d
- (void)applicationWillSuspend;	// 0x34f6bf25
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x34fa4449
- (void)cancel:(id)cancel;	// 0x34fb25a9
- (void)cancelRefreshingAccount;	// 0x34f6bf75
- (void)cancelSearching:(id)searching;	// 0x34fb27f9
- (void)dealloc;	// 0x34fb1de1
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x34fb1fe1
- (id)defaultPNGName;	// 0x34fb1f35
- (void)didReceiveMemoryWarning;	// 0x34fb2561
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x34fb1fb5
- (void)handleExternalChangeOnPersonViewControllers;	// 0x34fa2ebd
- (void)insertProperty:(int *)property insertValue:(id *)value insertLabel:(id *)label;	// 0x34f730d5
- (BOOL)isNavigationButtonEnabled:(int)enabled;	// 0x34fb25a5
- (void)linksUpdatedForPerson:(void *)person;	// 0x34fb2941
- (void)loadState;	// 0x34f668c5
- (void)loadView;	// 0x34f66d31
// converted property getter: - (id)membersController;	// 0x34f6bf4d
- (BOOL)membersController:(id)controller shouldAllowSelectingPersonWithRecordID:(int)recordID;	// 0x34f6a3e9
- (void)membersControllerDidEndServerSearch:(id)membersController;	// 0x34fb27d1
- (void)membersControllerWillEndSearching:(id)membersController;	// 0x34f96a49
- (void)membersControllerWillStartSearching:(id)membersController;	// 0x34f95f91
- (id)model;	// 0x34f67635
- (void)modelDatabaseChange:(id)change;	// 0x34fa2e7d
- (void)nameUpdatedForPerson:(void *)person;	// 0x34fb28c5
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x34f95b35
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson informDelegate:(BOOL)delegate;	// 0x34f95b59
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)animating;	// 0x34f6bef1
- (BOOL)personViewController:(id)controller shouldContinueAfterEditingConfirmed:(BOOL)confirmed forPerson:(void *)person;	// 0x34f90ad5
- (void)personWasDeleted;	// 0x34fa43fd
- (void)personWasSelected:(void *)selected;	// 0x34fb2835
- (void)preferredPersonDidChangeToPerson:(void *)preferredPerson;	// 0x34fb29bd
- (void)presentGroupsViewController;	// 0x34fb2165
- (void)reallyHandleExternalChangeOnPersonViewControllers;	// 0x34fa2f49
- (void)refreshEverythingNow;	// 0x34fb25d5
- (void)resetInsertionData;	// 0x34fb1ed1
- (void)resetStateForDisplayedFilterChange;	// 0x34fb2889
- (void)searchCurrentContactsGroupForWords:(id)words animated:(BOOL)animated;	// 0x34fee441
- (void)setAddressBook:(void *)book;	// 0x34fb1f6d
- (void)setBannerTitle:(id)title value:(id)value;	// 0x34f67e3d
- (void)setSearchCompletionDelegate:(id)delegate;	// 0x34fee415
// converted property setter: - (void)setStyleProvider:(id)provider;	// 0x34f6685d
// declared property getter: - (BOOL)shouldShowGroups;	// 0x34f68455
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate;	// 0x34fa2345
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person3;	// 0x34fb2631
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate;	// 0x34f6d1a1
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person4;	// 0x34f6d1c5
- (void)showInsertEditorForPerson:(void *)person animate:(BOOL)animate;	// 0x34fb2655
- (void)startRefreshingAccount;	// 0x34f69041
// converted property getter: - (id)styleProvider;	// 0x34f66701
- (void)updateLeftNavigationButtonAnimated:(BOOL)animated;	// 0x34fb22fd
- (void)updateNavigationButtonsAnimated:(BOOL)animated;	// 0x34f68141
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode;	// 0x34f95fa5
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode animated:(BOOL)animated;	// 0x34f681dd
- (void)updateTitle;	// 0x34fb218d
- (void)updateView;	// 0x34fb2249
- (void)viewDidAppear:(BOOL)view;	// 0x34f69145
- (void)viewDidDisappear:(BOOL)view;	// 0x34f6c3ed
- (void)viewWillAppear:(BOOL)view;	// 0x34f680d1
- (void)viewWillDisappear:(BOOL)view;	// 0x34f6c111
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34fb2105
@end

