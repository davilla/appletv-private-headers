/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIPrintPanelTableViewController, UIWindow, UIPrintInteractionController, UIPrintPaper, UIViewController, UINavigationController, PKPrinter, UIPopoverController;

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
@property(assign, nonatomic) int copies;	// G=0x33cd2f75; S=0x33cd301d; 
@property(assign, nonatomic) BOOL duplex;	// G=0x33cd2ea5; S=0x33cd2ee5; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x33cd2fad; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x33cd2fcd; S=0x33cd2ffd; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x33cd316d; S=0x33cd318d; 
@property(readonly, assign, nonatomic) NSArray *paperList;	// G=0x33cd3059; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x33cd32bd; S=0x33cd2c4d; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x33cd31ad; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x33cd3219; 
@property(readonly, assign, nonatomic) BOOL showPaper;	// G=0x33cd323d; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x33cd1859
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x33cd2021
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x33cd1c65
- (void)_presentWindow;	// 0x33cd1d75
- (void)cancelPrinting;	// 0x33cd2a59
- (void)controllerDidDisappear;	// 0x33cd2a6d
// declared property getter: - (int)copies;	// 0x33cd2f75
- (void)dealloc;	// 0x33cd1b51
- (void)dismissAnimated:(BOOL)animated;	// 0x33cd2875
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x33cd24b5
// declared property getter: - (BOOL)duplex;	// 0x33cd2ea5
// declared property getter: - (int)pageCount;	// 0x33cd2fad
// declared property getter: - (NSRange)pageRange;	// 0x33cd2fcd
// declared property getter: - (id)paper;	// 0x33cd316d
// declared property getter: - (id)paperList;	// 0x33cd3059
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33cd29d5
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x33cd20b5
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x33cd23b1
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x33cd2289
// declared property getter: - (id)printer;	// 0x33cd32bd
// declared property setter: - (void)setCopies:(int)copies;	// 0x33cd301d
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x33cd2ee5
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x33cd2ffd
// declared property setter: - (void)setPaper:(id)paper;	// 0x33cd318d
// declared property setter: - (void)setPrinter:(id)printer;	// 0x33cd2c4d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33cd2889
// declared property getter: - (BOOL)showDuplex;	// 0x33cd31ad
// declared property getter: - (BOOL)showPageRange;	// 0x33cd3219
// declared property getter: - (BOOL)showPaper;	// 0x33cd323d
- (void)startPrinting;	// 0x33cd29e9
@end

