/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCellDeleteConfirmationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
@private
	BOOL _visible;	// 106 = 0x6a
	UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;	// 108 = 0x6c
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x303188c1; S=0x30318891; converted property
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x303189a1; S=0x3031898d; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x301bfe3d
- (id)initWithTitle:(id)title;	// 0x301bfc71
- (void)_confirmationAnimationDidEnd;	// 0x301c0b35
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301c0bd1
- (void)cancelDeleteConfirmationWithGesture:(id)gesture;	// 0x30318829
- (void)cancelTrackingWithEvent:(id)event;	// 0x3031895d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30318929
- (void)dealloc;	// 0x303187b9
- (CGSize)defaultSize;	// 0x301c0329
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301c0c51
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x303188ed
// converted property getter: - (BOOL)isHighlighted;	// 0x303188c1
// declared property getter: - (BOOL)isVisible;	// 0x303189a1
- (void)layoutSubviews;	// 0x301c0619
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30318891
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x3031898d
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x301c0419
@end

