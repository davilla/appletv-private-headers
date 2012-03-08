/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIView, UIBarButtonItem, NSArray;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
@private
	unsigned _permittedArrowDirections;	// 20 = 0x14
	NSArray *_passthroughViews;	// 24 = 0x18
	UIBarButtonItem *_anchorBarButtonItem;	// 28 = 0x1c
	UIView *_anchorView;	// 32 = 0x20
}
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;	// G=0x359f9d19; S=0x359f9d29; @synthesize=_anchorBarButtonItem
@property(retain, nonatomic) UIView *anchorView;	// G=0x359f9d4d; S=0x359f9d5d; @synthesize=_anchorView
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x359f9ce5; S=0x359f9cf5; @synthesize=_passthroughViews
@property(assign, nonatomic) unsigned permittedArrowDirections;	// G=0x359f9cc5; S=0x359f9cd5; @synthesize=_permittedArrowDirections
- (id)initWithCoder:(id)coder;	// 0x359f9965
// declared property getter: - (id)anchorBarButtonItem;	// 0x359f9d19
// declared property getter: - (id)anchorView;	// 0x359f9d4d
- (void)dealloc;	// 0x359f98f1
- (id)defaultSegueClassName;	// 0x359f9b2d
- (void)encodeWithCoder:(id)coder;	// 0x359f9a65
// declared property getter: - (id)passthroughViews;	// 0x359f9ce5
// declared property getter: - (unsigned)permittedArrowDirections;	// 0x359f9cc5
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x359f9b39
// declared property setter: - (void)setAnchorBarButtonItem:(id)item;	// 0x359f9d29
// declared property setter: - (void)setAnchorView:(id)view;	// 0x359f9d5d
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x359f9cf5
// declared property setter: - (void)setPermittedArrowDirections:(unsigned)directions;	// 0x359f9cd5
@end
