/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController {
@private
	int _interfaceOrientation;	// 156 = 0x9c
	UIViewController *_disappearingViewController;	// 160 = 0xa0
	UINavigationController *_parentController;	// 164 = 0xa4
}
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x3529d6f9; S=0x3529d555; @synthesize=_disappearingViewController
- (id)initWithInterfaceOrientation:(int)interfaceOrientation;	// 0x3529d4c9
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3529d6e1
- (void)dealloc;	// 0x3529d509
// declared property getter: - (id)disappearingViewController;	// 0x3529d6f9
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x3529d555
- (void)viewDidDisappear:(BOOL)view;	// 0x3529d671
- (void)viewWillDisappear:(BOOL)view;	// 0x3529d5b9
@end
