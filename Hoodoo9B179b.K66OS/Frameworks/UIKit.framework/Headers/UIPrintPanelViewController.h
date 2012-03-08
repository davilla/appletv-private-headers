/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPrintPanelTableViewController, PKPrinter, UIWindow, UIPrintInteractionController, UIPopoverController, NSArray, UIPrintPaper, UIViewController, UINavigationController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject {
@private
	UIPrintInteractionController *_printInteractionController;	// 4 = 0x4
	UINavigationController *_navigationController;	// 8 = 0x8
	UIPrintPanelTableViewController *_tableViewController;	// 12 = 0xc
	UIViewController *_parentController;	// 16 = 0x10
	UIPopoverController *_poverController;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	PKPrinter *_printer;	// 28 = 0x1c
	BOOL _dismissed;	// 32 = 0x20
	BOOL _animated;	// 33 = 0x21
	BOOL _observingRotation;	// 34 = 0x22
	BOOL _parentHasNoPopover;	// 35 = 0x23
}
@property(assign, nonatomic) int copies;	// G=0x33218251; S=0x332182f9; 
@property(assign, nonatomic) BOOL duplex;	// G=0x33218181; S=0x332181c1; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x33218289; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x332182a9; S=0x332182d9; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x33218449; S=0x33218469; 
@property(readonly, assign, nonatomic) NSArray *paperList;	// G=0x33218335; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x33218599; S=0x33217f29; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x33218489; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x332184f5; 
@property(readonly, assign, nonatomic) BOOL showPaper;	// G=0x33218519; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x33216b35
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x332172fd
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x33216f41
- (void)_presentWindow;	// 0x33217051
- (void)cancelPrinting;	// 0x33217d35
- (void)controllerDidDisappear;	// 0x33217d49
// declared property getter: - (int)copies;	// 0x33218251
- (void)dealloc;	// 0x33216e2d
- (void)dismissAnimated:(BOOL)animated;	// 0x33217b51
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x33217791
// declared property getter: - (BOOL)duplex;	// 0x33218181
// declared property getter: - (int)pageCount;	// 0x33218289
// declared property getter: - (NSRange)pageRange;	// 0x332182a9
// declared property getter: - (id)paper;	// 0x33218449
// declared property getter: - (id)paperList;	// 0x33218335
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33217cb1
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x33217391
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3321768d
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x33217565
// declared property getter: - (id)printer;	// 0x33218599
// declared property setter: - (void)setCopies:(int)copies;	// 0x332182f9
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x332181c1
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x332182d9
// declared property setter: - (void)setPaper:(id)paper;	// 0x33218469
// declared property setter: - (void)setPrinter:(id)printer;	// 0x33217f29
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33217b65
// declared property getter: - (BOOL)showDuplex;	// 0x33218489
// declared property getter: - (BOOL)showPageRange;	// 0x332184f5
// declared property getter: - (BOOL)showPaper;	// 0x33218519
- (void)startPrinting;	// 0x33217cc5
@end
