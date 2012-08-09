/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class ABUnknownPersonViewController;

@interface ABUnknownPersonViewDelegateForwarder : NSObject <ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
	ABUnknownPersonViewController *_viewController;	// 4 = 0x4
}
- (id)initWithUnknownPersonViewController:(id)unknownPersonViewController;	// 0x34fb9771
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x34fb97b1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34fb97d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34fb9811
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34fb9831
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34fb97f1
@end
