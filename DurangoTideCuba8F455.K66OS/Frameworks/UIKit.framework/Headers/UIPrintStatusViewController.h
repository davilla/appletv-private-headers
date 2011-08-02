/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class UIPopoverController;
@protocol UIPrintStatusDelegate;

@interface UIPrintStatusViewController : UINavigationController {
@private
	UIPopoverController *_poverController;	// 212 = 0xd4
	id<UIPrintStatusDelegate> _printStatusDelegate;	// 216 = 0xd8
}
@property(assign, nonatomic) id<UIPrintStatusDelegate> printStatusDelegate;	// G=0x30350b59; S=0x30350b69; @synthesize=_printStatusDelegate
- (void)dealloc;	// 0x30350ec9
- (void)dismissAnimated:(BOOL)animated;	// 0x30350bfd
- (void)jobDidCancel;	// 0x30350b79
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30350bb9
- (void)presentPrintStatusFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x30350c21
// declared property getter: - (id)printStatusDelegate;	// 0x30350b59
- (id)printStatusView;	// 0x30350cd1
// declared property setter: - (void)setPrintStatusDelegate:(id)delegate;	// 0x30350b69
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30350cfd
- (void)viewDidLoad;	// 0x30350e25
- (void)viewWillAppear:(BOOL)view;	// 0x30350d5d
@end

