/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
@private
	UIDelayedAction *_touchDelay;	// 60 = 0x3c
	CGPoint _startScreenLocation;	// 64 = 0x40
}
- (void)_resetGestureRecognizer;	// 0x3011cc3d
- (void)clearTimer;	// 0x30118c59
- (void)dealloc;	// 0x3030dae1
- (void)sendDelayedTouches;	// 0x3016f495
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x3012c1b9
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x3018465d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30118b35
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3019a141
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3012c151
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3011b519
@end

