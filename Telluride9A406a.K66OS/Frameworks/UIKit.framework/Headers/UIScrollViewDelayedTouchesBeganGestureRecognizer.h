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
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x3577c05d
- (void)clearTimer;	// 0x3569de21
- (void)dealloc;	// 0x3569dde1
- (void)sendDelayedTouches;	// 0x357b6531
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x35775205
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x357c798d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35772a41
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x357d39a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35775195
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35796095
@end
