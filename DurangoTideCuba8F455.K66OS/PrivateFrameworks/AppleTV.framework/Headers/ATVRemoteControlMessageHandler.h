/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVDirectionalRemoteConnectionHandler, NSMutableArray, NSTimer;

@interface ATVRemoteControlMessageHandler : NSObject {
@private
	int _touchDirection;	// 4 = 0x4
	CGPoint _startPoint;	// 8 = 0x8
	double _lastTimeStamp;	// 16 = 0x10
	CGPoint _lastPoint;	// 24 = 0x18
	NSTimer *_swipeTimer;	// 32 = 0x20
	NSTimer *_easeOutTimer;	// 36 = 0x24
	double _easeOutInterval;	// 40 = 0x28
	double _easeOutDecelerationFactor;	// 48 = 0x30
	BOOL _easeOutRepeat;	// 56 = 0x38
	CGPoint _autoScrollStartPoint;	// 60 = 0x3c
	double _autoScrollStartInterval;	// 68 = 0x44
	NSTimer *_autoScrollContinueTimer;	// 76 = 0x4c
	BOOL _isReallyReallyAutoScrolling;	// 80 = 0x50
	double _autoScrollInterval;	// 84 = 0x54
	CGPoint _velocityAdjustOffset;	// 92 = 0x5c
	CGPoint _lastVelocityRefPoint;	// 100 = 0x64
	CGPoint _velocityVector;	// 108 = 0x6c
	NSMutableArray *_velocitySet;	// 116 = 0x74
	int _touchCount;	// 120 = 0x78
	NSMutableArray *_throttledEventQueue;	// 124 = 0x7c
	NSTimer *_throttleEventTimer;	// 128 = 0x80
	BOOL _prohibitSelect;	// 132 = 0x84
	BOOL _activelyScrolling;	// 133 = 0x85
	CGSize _selectionChange;	// 136 = 0x88
	ATVDirectionalRemoteConnectionHandler *_connectionHandler;	// 144 = 0x90
	NSTimer *_connectionTimeoutTimer;	// 148 = 0x94
}
- (id)init;	// 0x30697151
- (CGPoint)_adjustPoint:(CGPoint)point forVelocity:(CGPoint)velocity;	// 0x306981ed
- (void)_autoScrollContinueTimerCallback:(id)callback;	// 0x306966e1
- (void)_beginAutoScroll;	// 0x30696b6d
- (double)_calculateVelocityAverage;	// 0x30696e7d
- (void)_clearEventQueue;	// 0x3069643d
- (void)_connectionTimedOut:(id)anOut;	// 0x30696fe1
- (BOOL)_easeOutInProgress;	// 0x3069641d
- (void)_easeOutTimerCallback:(id)callback;	// 0x306973e9
- (void)_finishAutoScroll;	// 0x30696ab1
- (void)_finishEaseOut;	// 0x30696675
- (CGPoint)_getSelectionPosition:(CGPoint)position;	// 0x30698179
- (CGSize)_initialSelectionChangeDistance;	// 0x30696431
- (void)_invalidateSwipeAction;	// 0x30697959
- (BOOL)_isAutoScrolling;	// 0x306963f9
- (BOOL)_isReallyReallyAutoScrolling;	// 0x3069640d
- (void)_postEvent:(id)event;	// 0x30696509
- (void)_postThrottledEvent:(id)event;	// 0x30696485
- (void)_processLastTouchMove;	// 0x306983a9
- (void)_processSelectionChange:(int)change delta:(int)delta;	// 0x3069780d
- (void)_processSwipeMovement;	// 0x30697ed1
- (BOOL)_processTouchEvent:(unsigned long)event value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x3069860d
- (void)_refreshConnectionTimeoutTimer;	// 0x30696ff5
- (CGSize)_repeatSelectionChangeDistance;	// 0x30698a7d
- (void)_resetTrackingCoordinates;	// 0x306978c5
- (void)_resetVelocitySet;	// 0x30696cb9
- (void)_scrollEndNotification;	// 0x3069728d
- (void)_scrollStartNotification;	// 0x306972ad
- (void)_sendDirectionEvent:(int)event value:(int)value;	// 0x30696be1
- (BOOL)_startEaseOut;	// 0x30697b75
- (BOOL)_swipeActive;	// 0x306963e5
- (void)_swipeTimeout;	// 0x30697569
- (void)_throttleEventTimerCallback;	// 0x306972cd
- (BOOL)_updateAutoScroll;	// 0x306979d9
- (void)_updateAutoScrollInterval;	// 0x30696781
- (void)_updateVelocitySet:(CGPoint)set velocity:(CGPoint)velocity;	// 0x30696cd9
- (double)_velocitySetTotalDistance;	// 0x30696dcd
- (void)dealloc;	// 0x306970bd
- (BOOL)handleDirectionalRemoteMessage:(unsigned long)message value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x30697601
- (void)invalidate;	// 0x30697091
@end

