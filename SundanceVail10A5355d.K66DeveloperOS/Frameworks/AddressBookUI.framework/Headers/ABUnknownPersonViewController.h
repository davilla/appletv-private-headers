/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class NSArray, ABPersonTableViewActionsDelegate, NSString, ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, UIView, ABPersonViewControllerHelper;
@protocol ABStyleProvider, ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
	id _helper;	// 192 = 0xc0
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;	// 196 = 0xc4
	id _reserved;	// 200 = 0xc8
	ABPersonTableViewDataSource *_dataSource;	// 204 = 0xcc
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 208 = 0xd0
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 212 = 0xd4
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x34fb9731; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x34fb7411; S=0x34fb7431; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x34fb7761; S=0x34fb7735; 
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;	// G=0x34fb77fd; S=0x34fb77dd; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x34fb78a1; S=0x34fb7875; 
@property(assign, nonatomic) BOOL allowsSendingTextMessage;	// G=0x34fb784d; S=0x34fb7821; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x34fb7789; S=0x34fb77b1; 
@property(copy, nonatomic) NSString *alternateName;	// G=0x34fb7569; S=0x34fb753d; 
@property(copy, nonatomic) NSString *attribution;	// G=0x34fb7b11; S=0x34fb7b39; 
@property(assign) BOOL badgeEmailPropertiesForMailVIP;	// G=0x34fb8035; S=0x34fb805d; converted property
@property(readonly, assign, nonatomic) BOOL canShareContact;	// G=0x34fb7c35; 
@property(retain) id customFooterView;	// G=0x34fb7d79; S=0x34fb7d4d; converted property
@property(retain) id customHeaderView;	// G=0x34fb7d25; S=0x34fb7cf9; converted property
@property(retain) id customMessageView;	// G=0x34fb76e1; S=0x34fb7709; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34fb9721; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x34fb74fd; S=0x34fb751d; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x34fb7ad1; S=0x34fb7af1; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x34fb730d; 
@property(assign, nonatomic) BOOL isLocation;	// G=0x34fb7c5d; S=0x34fb7c81; 
@property(readonly, assign, nonatomic) BOOL isShowingMultipleVCards;	// G=0x34fb96f1; 
@property(copy, nonatomic) NSString *message;	// G=0x34fb75bd; S=0x34fb7591; 
@property(retain) id messageDetail;	// G=0x34fb7665; S=0x34fb7639; converted property
@property(retain) id messageDetailFont;	// G=0x34fb768d; S=0x34fb76b5; converted property
@property(retain) id messageFont;	// G=0x34fb7611; S=0x34fb75e5; converted property
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x34fb7a11; S=0x34fb79e5; 
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;	// G=0x34fb7dc1; S=0x34fb7da1; 
@property(retain) id shareLocationSnapshotImage;	// G=0x34fb7f39; S=0x34fb7f61; converted property
@property(retain) id shareLocationURL;	// G=0x34fb7ee5; S=0x34fb7f0d; converted property
@property(retain) id shareMessageBody;	// G=0x34fb7e3d; S=0x34fb7e65; converted property
@property(assign) BOOL shareMessageBodyIsHTML;	// G=0x34fb7de9; S=0x34fb7e11; converted property
@property(retain) id shareMessageSubject;	// G=0x34fb7e91; S=0x34fb7eb9; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x34fb9741; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x34fb7a65; S=0x34fb7a39; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34fb74bd; S=0x34fb74dd; 
@property(assign, nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;	// G=0x34fb9751; S=0x34fb9761; @synthesize=_unknownPersonViewDelegate
@property(retain) id willTweetLocationCallback;	// G=0x34fb7f8d; S=0x34fb7fb5; converted property
@property(retain) id willWeiboLocationCallback;	// G=0x34fb7fe1; S=0x34fb8009; converted property
+ (id)defaultLabelsForProperty:(int)property person:(void *)person addressBook:(void *)book;	// 0x34fb78e9
- (id)init;	// 0x34fb6b29
- (id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;	// 0x34fb6b5d
- (id)initWithStyle:(int)style;	// 0x34fb6b3d
- (id)initWithVCardData:(id)vcardData;	// 0x34fb7075
- (void)_addToExistingContacts;	// 0x34fb8e09
- (void)_addUnmergedRecords;	// 0x34fb86f5
- (id)_alertSheet;	// 0x34fb71d5
- (BOOL)_allowsAutorotation;	// 0x34fb8171
- (void)_createNewContacts;	// 0x34fb8671
- (id)_findMatchingCardsForRecord:(void *)record;	// 0x34fb8a01
- (id)_forwarder;	// 0x34fb7275
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x34fb8239
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x34fb81b5
- (void)_showCardViewerForIndex:(int)index;	// 0x34fb949d
- (void)_showUnmergedContactsAlert;	// 0x34fb87a1
- (id)_unmergedAlertSheet;	// 0x34fb71fd
- (id)_unmergedRecords;	// 0x34fb7225
- (void)_unselectTable;	// 0x34fb9459
- (id)_vCardProperties;	// 0x34fb71ad
- (id)_vCardTable;	// 0x34fb724d
- (id)_vCards;	// 0x34fb7185
- (id)_viewControllerForCardAtIndex:(int)index;	// 0x34fb90b9
- (int)abViewControllerType;	// 0x34fb7de5
- (float)ab_heightToFitForViewInPopoverView;	// 0x34fb8089
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x34fb8fe9
// declared property getter: - (id)actionsDelegate;	// 0x34fb9731
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca779
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca679
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca6a9
// declared property getter: - (void *)addressBook;	// 0x34fb7411
- (void)addressBookChangedExternally;	// 0x34fb9161
// declared property getter: - (BOOL)allowsActions;	// 0x34fb7761
// declared property getter: - (BOOL)allowsAddingToAddressBook;	// 0x34fb77fd
// declared property getter: - (BOOL)allowsConferencing;	// 0x34fb78a1
// declared property getter: - (BOOL)allowsSendingTextMessage;	// 0x34fb784d
// declared property getter: - (BOOL)allowsSharing;	// 0x34fb7789
// declared property getter: - (id)alternateName;	// 0x34fb7569
- (void)applicationDidResume;	// 0x34fb8581
// declared property getter: - (id)attribution;	// 0x34fb7b11
// converted property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x34fb8035
// declared property getter: - (BOOL)canShareContact;	// 0x34fb7c35
// converted property getter: - (id)customFooterView;	// 0x34fb7d79
// converted property getter: - (id)customHeaderView;	// 0x34fb7d25
// converted property getter: - (id)customMessageView;	// 0x34fb76e1
// declared property getter: - (id)dataSource;	// 0x34fb9721
- (void)dealloc;	// 0x34fb6dd1
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x34fb6fb9
- (void)dismissAnimated:(BOOL)animated;	// 0x34fb8dad
// declared property getter: - (void *)displayedPerson;	// 0x34fb74fd
// declared property getter: - (id)displayedProperties;	// 0x34fb7ad1
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x34fb6e95
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x34fca631
// declared property getter: - (id)helper;	// 0x34fb730d
// declared property getter: - (BOOL)isLocation;	// 0x34fb7c5d
// declared property getter: - (BOOL)isShowingMultipleVCards;	// 0x34fb96f1
- (void)loadView;	// 0x34fb8245
// declared property getter: - (id)message;	// 0x34fb75bd
// converted property getter: - (id)messageDetail;	// 0x34fb7665
// converted property getter: - (id)messageDetailFont;	// 0x34fb768d
// converted property getter: - (id)messageFont;	// 0x34fb7611
- (id)newActionButton;	// 0x34fca751
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34fb91a5
// declared property getter: - (id)personHeaderView;	// 0x34fb7a11
- (BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x34fb85c5
- (void)presentAddToContactsSheet;	// 0x34fb7bdd
- (void)presentNewContactViewControllerForAddToContacts;	// 0x34fb7ca1
- (void)presentPeoplePickerNavigationControllerForMergeToContact;	// 0x34fb7ccd
- (void)presentShareContactSheet;	// 0x34fb7c09
- (void)reloadImageData;	// 0x34fb7bb5
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca6f5
// declared property getter: - (BOOL)savesNewContactOnSuspend;	// 0x34fb7dc1
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x34fca725
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34fb7431
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x34fb7735
// declared property setter: - (void)setAllowsAddingToAddressBook:(BOOL)addressBook;	// 0x34fb77dd
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x34fb7875
// declared property setter: - (void)setAllowsSendingTextMessage:(BOOL)message;	// 0x34fb7821
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x34fb77b1
// declared property setter: - (void)setAlternateName:(id)name;	// 0x34fb753d
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x34fb7b39
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x34fb7b7d
// converted property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x34fb805d
- (void)setCardContentProvider:(id)provider;	// 0x34fb78c9
- (void)setCustomAppearanceProvider:(id)provider;	// 0x34fdb481
// converted property setter: - (void)setCustomFooterView:(id)view;	// 0x34fb7d4d
// converted property setter: - (void)setCustomHeaderView:(id)view;	// 0x34fb7cf9
// converted property setter: - (void)setCustomMessageView:(id)view;	// 0x34fb7709
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x34fb751d
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x34fb7af1
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x34fb79a1
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x34fb7961
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x34fb7925
// declared property setter: - (void)setIsLocation:(BOOL)location;	// 0x34fb7c81
// declared property setter: - (void)setMessage:(id)message;	// 0x34fb7591
// converted property setter: - (void)setMessageDetail:(id)detail;	// 0x34fb7639
// converted property setter: - (void)setMessageDetailFont:(id)font;	// 0x34fb76b5
// converted property setter: - (void)setMessageFont:(id)font;	// 0x34fb75e5
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x34fb79e5
- (void)setPrimaryProperty:(int)property;	// 0x34fb7abd
- (void)setPrimaryProperty:(int)property countryCode:(id)code;	// 0x34fb7a8d
// declared property setter: - (void)setSavesNewContactOnSuspend:(BOOL)suspend;	// 0x34fb7da1
// converted property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x34fb7f61
// converted property setter: - (void)setShareLocationURL:(id)url;	// 0x34fb7f0d
// converted property setter: - (void)setShareMessageBody:(id)body;	// 0x34fb7e65
// converted property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x34fb7e11
// converted property setter: - (void)setShareMessageSubject:(id)subject;	// 0x34fb7eb9
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x34fb7a39
- (void)setStringValue:(id)value forProperty:(int)property;	// 0x34fb79c5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34fb74dd
// declared property setter: - (void)setUnknownPersonViewDelegate:(id)delegate;	// 0x34fb9761
// converted property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x34fb7fb5
// converted property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x34fb8009
// converted property getter: - (id)shareLocationSnapshotImage;	// 0x34fb7f39
// converted property getter: - (id)shareLocationURL;	// 0x34fb7ee5
// converted property getter: - (id)shareMessageBody;	// 0x34fb7e3d
// converted property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x34fb7de9
// converted property getter: - (id)shareMessageSubject;	// 0x34fb7e91
// declared property getter: - (id)sharingDelegate;	// 0x34fb9741
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x34fb7a65
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34fb8201
// declared property getter: - (id)styleProvider;	// 0x34fb74bd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34fb91d9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34fb9521
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34fb91a9
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x34fb94e1
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fb73dd
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector target:(id)target localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fb731d
// declared property getter: - (id)unknownPersonViewDelegate;	// 0x34fb9751
- (void)updateNavigationButtons;	// 0x34fb8241
- (void)viewDidAppear:(BOOL)view;	// 0x34fb850d
- (void)viewDidLoad;	// 0x34fb812d
- (void)viewDidUnload;	// 0x34fb847d
- (void)viewWillAppear:(BOOL)view;	// 0x34fb849d
- (void)viewWillDisappear:(BOOL)view;	// 0x34fb8539
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34fb8205
// converted property getter: - (id)willTweetLocationCallback;	// 0x34fb7f8d
// converted property getter: - (id)willWeiboLocationCallback;	// 0x34fb7fe1
@end

