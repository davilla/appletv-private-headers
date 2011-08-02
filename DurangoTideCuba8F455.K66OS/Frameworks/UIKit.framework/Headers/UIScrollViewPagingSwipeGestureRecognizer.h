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
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
@private
	UIDelayedAction *_swipeFailureDelay;	// 60 = 0x3c
	CGPoint _startLocation;	// 64 = 0x40
	CGPoint _lastLocation;	// 72 = 0x48
	double _lastTime;	// 80 = 0x50
	int _directionalFailureCount;	// 88 = 0x58
}
- (void)_processNewLocation:(CGPoint)location;	// 0x3030dcd1
- (void)_resetGestureRecognizer;	// 0x3030da5d
- (void)clearTimer;	// 0x3030da21
- (void)dealloc;	// 0x3030daa5
- (void)enoughTimeElapsed:(id)elapsed;	// 0x3030da09
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3030db6d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3030d9e1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3030deed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3030db1d
@end

