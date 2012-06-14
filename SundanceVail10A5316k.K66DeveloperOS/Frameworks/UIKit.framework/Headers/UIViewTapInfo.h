/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewTapInfo : NSObject {
@private
	id _delegate;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
	int _tapDownCount;	// 12 = 0xc
	int _fingerCount;	// 16 = 0x10
	float _multiTapDelay;	// 20 = 0x14
	float _rejectAsTapThrehold;	// 24 = 0x18
	float _viewTouchPauseThreshold;	// 28 = 0x1c
	CGPoint _startPosition;	// 32 = 0x20
	double _startTime;	// 40 = 0x28
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _tapInfoFlags;	// 48 = 0x30
}
- (id)initWithDelegate:(id)delegate view:(id)view;	// 0x30239a75
- (BOOL)_eventLocationConsideredMovement:(GSEventRef)movement;	// 0x3023a1e1
- (void)_handleTapWithCount:(int)count event:(GSEventRef)event;	// 0x30239d29
- (void)_sendTouchPauseDownIfNecessary;	// 0x30239f71
- (void)_sendTouchPauseUpIfNecessary;	// 0x3023a005
- (BOOL)cancelMouseTracking;	// 0x3023a489
- (void)clearTapState;	// 0x30239b25
- (void)handleDoubleTapEvent:(GSEventRef)event;	// 0x30239e35
- (void)handleSingleTapEvent:(GSEventRef)event;	// 0x30239e21
- (void)mouseDown:(GSEventRef)down;	// 0x3023a081
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3023a271
- (void)mouseUp:(GSEventRef)up;	// 0x3023a2f9
- (void)releaseAndClearWeakRefs;	// 0x30239acd
- (void)scheduleSingleTapHandlerForEvent:(GSEventRef)event;	// 0x30239e49
- (void)setDelegate:(id)delegate;	// 0x30239b85
@end
