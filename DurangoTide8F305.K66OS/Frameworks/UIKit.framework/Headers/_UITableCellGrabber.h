/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface _UITableCellGrabber : UIControl {
@private
	UITableCell *_cell;	// 68 = 0x44
	CGPoint _downPoint;	// 72 = 0x48
}
- (id)initWithCell:(id)cell;	// 0x320eca05
- (void)_controlMouseDown:(GSEventRef)down;	// 0x320eb5c5
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x320eb5cd
- (void)_controlMouseUp:(GSEventRef)up;	// 0x320eb5c9
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x320eb799
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320ec999
- (BOOL)cancelMouseTracking;	// 0x320eb6c5
- (BOOL)cancelTouchTracking;	// 0x320eb695
- (void)cancelTrackingWithEvent:(id)event;	// 0x320eb711
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x320eccd5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320ecc69
- (void)drawRect:(CGRect)rect;	// 0x320ecfed
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x320eb761
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320eb729
- (BOOL)shouldTrack;	// 0x320eb5c1
@end

