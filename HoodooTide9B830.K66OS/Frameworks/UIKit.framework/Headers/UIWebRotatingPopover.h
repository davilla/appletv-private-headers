/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPopoverControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class DOMNode, UIPopoverController;

__attribute__((visibility("hidden")))
@interface UIWebRotatingPopover : NSObject <UIPopoverControllerDelegate> {
@private
	BOOL _isRotating;	// 4 = 0x4
	DOMNode *_node;	// 8 = 0x8
	UIPopoverController *_popoverController;	// 12 = 0xc
}
@property(retain, nonatomic) DOMNode *_node;	// G=0x302346c5; S=0x302346d5; @synthesize
@property(retain, nonatomic) UIPopoverController *_popoverController;	// G=0x302346f9; S=0x30234709; @synthesize
- (id)initWithDOMNode:(id)domnode;	// 0x30234291
// declared property getter: - (id)_node;	// 0x302346c5
// declared property getter: - (id)_popoverController;	// 0x302346f9
- (void)accessoryDone;	// 0x302345cd
- (void)dealloc;	// 0x30234365
- (void)didRotate:(id)rotate;	// 0x30234669
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30234689
- (void)presentPopover;	// 0x30234421
// declared property setter: - (void)set_node:(id)node;	// 0x302346d5
// declared property setter: - (void)set_popoverController:(id)controller;	// 0x30234709
- (void)willRotate:(id)rotate;	// 0x30234639
@end

