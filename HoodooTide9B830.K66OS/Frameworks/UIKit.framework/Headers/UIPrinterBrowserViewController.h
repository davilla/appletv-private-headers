/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "PKPrinterBrowserDelegate.h"
#import "UITableViewController.h"

@class PKPrinter, PKPrinterBrowser, UIPrintPanelViewController, UIPrinterSearchingView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 176 = 0xb0
	PKPrinterBrowser *_printerBrowser;	// 180 = 0xb4
	NSMutableArray *_printers;	// 184 = 0xb8
	PKPrinter *_lockedPrinter;	// 188 = 0xbc
	BOOL _loaded;	// 192 = 0xc0
	UIPrinterSearchingView *_searchingView;	// 196 = 0xc4
	double _displayTime;	// 200 = 0xc8
	BOOL _clearCurrentPrinter;	// 208 = 0xd0
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x30377c9d
- (void)addPrinter:(id)printer moreComing:(BOOL)coming;	// 0x30378b4d
- (void)adjustPopoverSize;	// 0x30377e8d
- (void)dealloc;	// 0x30377dd9
- (void)loadView;	// 0x30378079
- (void)removePrinter:(id)printer moreGoing:(BOOL)going;	// 0x30378e65
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30378451
- (void)startPrinterBrowser;	// 0x303780e1
- (void)stopPrinterBrowser;	// 0x30378141
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30378495
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303788d5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30378475
- (void)updateSearching;	// 0x303781b5
- (void)viewDidDisappear:(BOOL)view;	// 0x303783e9
- (void)viewWillAppear:(BOOL)view;	// 0x303782e1
- (void)viewWillDisappear:(BOOL)view;	// 0x30378355
- (void)willEnterForeground;	// 0x30378291
@end
