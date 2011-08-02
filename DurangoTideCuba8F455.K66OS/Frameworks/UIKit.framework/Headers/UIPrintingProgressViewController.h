/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController {
@private
	UIPrintingProgress *_printingProgress;	// 144 = 0x90
	UIPrintingMessageView *_messageView;	// 148 = 0x94
	UINavigationController *_navController;	// 152 = 0x98
	UIWindow *_window;	// 156 = 0x9c
	double _rotationDelay;	// 160 = 0xa0
}
@property(readonly, assign) double rotationDelay;	// G=0x3035490d; converted property
- (id)initWithTitle:(id)title message:(id)message printingProgress:(id)progress;	// 0x30354fc9
- (void)cancelProgress;	// 0x30354e5d
- (void)cleanupAfterDismiss;	// 0x30354ce9
- (void)dealloc;	// 0x30354f5d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x303548f1
- (void)dismissAnimated:(BOOL)animated;	// 0x30355ac1
- (void)doneProgress;	// 0x30354eb5
// converted property getter: - (double)rotationDelay;	// 0x3035490d
- (void)setDonePrinting:(BOOL)printing;	// 0x30354d8d
- (void)setMessage:(id)message;	// 0x30354e3d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30354efd
- (void)show;	// 0x30354d69
- (BOOL)visible;	// 0x30354ca5
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x303548d1
@end

