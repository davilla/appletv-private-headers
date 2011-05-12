/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
@private
	BOOL _visible;	// 66 = 0x42
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x321ac455; S=0x321ac5e5; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x321ac875
- (id)initWithTitle:(id)title;	// 0x321ad059
- (void)_confirmationAnimationDidEnd;	// 0x321ac735
- (id)_interceptEvent:(id)event;	// 0x321ac9f9
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x321acadd
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x321ac6ed
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x321ac681
- (void)cancelTrackingWithEvent:(id)event;	// 0x321ac5fd
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x321ac651
- (CGSize)defaultSize;	// 0x321ac829
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x321ac625
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x321ac6b1
// declared property getter: - (BOOL)isVisible;	// 0x321ac455
- (void)layoutSubviews;	// 0x321acf45
- (void)removeFromSuperview;	// 0x321ac465
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x321ac5e5
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x321ac4a1
@end

