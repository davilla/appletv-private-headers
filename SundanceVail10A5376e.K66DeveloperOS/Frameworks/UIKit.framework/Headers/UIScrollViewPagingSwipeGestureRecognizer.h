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
	UIDelayedAction *_swipeFailureDelay;	// 56 = 0x38
	CGPoint _startLocation;	// 60 = 0x3c
	CGPoint _lastLocation;	// 68 = 0x44
	double _lastTime;	// 76 = 0x4c
	int _directionalFailureCount;	// 84 = 0x54
}
- (void)_processNewLocation:(CGPoint)location;	// 0x303a4521
- (void)_resetGestureRecognizer;	// 0x303a3995
- (void)clearTimer;	// 0x303a2e5d
- (void)dealloc;	// 0x303b987d
- (void)enoughTimeElapsed:(id)elapsed;	// 0x303a48a9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x303a2cd1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x305392b9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30539141
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x303a44c5
@end
