/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 172 = 0xac
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x359f9331
- (void)adjustPopoverSize;	// 0x359f93f5
- (void)dealloc;	// 0x359f93a5
- (void)loadView;	// 0x359f95e1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x359f9621
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x359f93d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x359f965d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x359f9859
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x359f9625
@end
