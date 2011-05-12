/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebSelectControl.h"
#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UIWebSelectTableViewController, UIKeyboard;

__attribute__((visibility("hidden")))
@interface UIWebSelectPopover : NSObject <UIWebSelectControl, UIPopoverControllerDelegate> {
@private
	UIWebSelectTableViewController *_tableViewController;	// 4 = 0x4
	UIPopoverController *_popoverController;	// 8 = 0x8
	UIKeyboard *_keyboard;	// 12 = 0xc
	BOOL _isRotating;	// 16 = 0x10
}
@property(retain, nonatomic) UIPopoverController *_popoverController;	// G=0x3212a399; S=0x3212aeb5; @synthesize
@property(retain, nonatomic) UIWebSelectTableViewController *_tableViewController;	// G=0x3212a3a9; S=0x3212ae8d; @synthesize
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x3212c191
// declared property getter: - (id)_popoverController;	// 0x3212a399
- (void)_popoverDismissed;	// 0x3212b2d1
// declared property getter: - (id)_tableViewController;	// 0x3212a3a9
- (void)_userActionDismissedPopover:(id)popover;	// 0x3212a451
- (void)controlBeginEditing;	// 0x3212be69
- (id)controlView;	// 0x3212a395
- (void)dealloc;	// 0x3212a96d
- (void)didRotate:(id)rotate;	// 0x3212a3b9
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3212a40d
// declared property setter: - (void)set_popoverController:(id)controller;	// 0x3212aeb5
// declared property setter: - (void)set_tableViewController:(id)controller;	// 0x3212ae8d
- (void)willRotate:(id)rotate;	// 0x3212a3dd
@end

