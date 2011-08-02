/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BackRow-Structs.h"

@class BREvent, NSMutableArray, NSAutoreleasePool, NSTimer;
@protocol BRResponder;

@interface BRApplication : NSObject {
@private
	id _delegate;	// 4 = 0x4
	NSObject<BRResponder> *_firstResponder;	// 8 = 0x8
	BREvent *_currentEvent;	// 12 = 0xc
	NSTimer *_retriggerTimer;	// 16 = 0x10
	NSTimer *_b39PlayPauseHoldTimer;	// 20 = 0x14
	NSMutableArray *_eventQueue;	// 24 = 0x18
	NSAutoreleasePool *_runLoopPool;	// 28 = 0x1c
	CFRunLoopSourceRef _source;	// 32 = 0x20
	CFRunLoopRef _mainRunLoop;	// 36 = 0x24
	double _flushBeforeTimeStamp;	// 40 = 0x28
	long _retriggerCount;	// 48 = 0x30
	double _nextRetriggerDelay;	// 52 = 0x34
	BOOL _handlingEvent;	// 60 = 0x3c
	BOOL _isInModalLoop;	// 61 = 0x3d
	BOOL _eventsBlocked;	// 62 = 0x3e
	BOOL _delegateRetained;	// 63 = 0x3f
	BOOL _isTerminating;	// 64 = 0x40
	BOOL _b39PlayPauseHoldTimerFired;	// 65 = 0x41
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x32fb3895; converted property
@property(assign) id delegate;	// G=0x32fb3855; S=0x32fb3bdd; converted property
@property(retain) id firstResponder;	// G=0x32fb3885; S=0x32fb3875; converted property
@property(assign) BOOL isInModalLoop;	// G=0x32fb38b5; S=0x32fb38a5; converted property
@property(readonly, assign) BOOL isTerminating;	// G=0x32fb3865; converted property
@property(readonly, assign) double nextRetriggerDelay;	// G=0x32fb38d5; converted property
@property(readonly, assign) long retriggerCount;	// G=0x32fb38c5; converted property
+ (id)sharedApplication;	// 0x32f17ae5
- (id)init;	// 0x32f17b29
- (BOOL)_b39PlayPauseHoldTimerFired;	// 0x32fb3905
- (void)_blockEvents;	// 0x32fb3d99
- (void)_drainRunLoopPool;	// 0x32fb39dd
- (void)_handleB39PlayPauseTimerFire:(id)fire;	// 0x32fb38e5
- (void)_handler;	// 0x32fb4241
- (void)_registerForEvents;	// 0x32fb44d5
- (void)_retriggerEvent:(id)event;	// 0x32fb3989
- (void)_run;	// 0x32fb4105
- (void)_setB39PlayPauseHoldTimer:(id)timer;	// 0x32fb3915
- (void)_setRetainedDelegate:(id)delegate;	// 0x32fb394d
- (void)_unblockEvents;	// 0x32fb3d69
- (void)cancelRetriggerCurrentEvent;	// 0x32fb3db5
// converted property getter: - (id)currentEvent;	// 0x32fb3895
- (void)dealloc;	// 0x32fb3c39
// converted property getter: - (id)delegate;	// 0x32fb3855
- (void)dispatchEventOnEventThread:(id)thread;	// 0x32fb3bad
- (void)emptyQueue;	// 0x32fb4029
// converted property getter: - (id)firstResponder;	// 0x32fb3885
// converted property getter: - (BOOL)isInModalLoop;	// 0x32fb38b5
// converted property getter: - (BOOL)isTerminating;	// 0x32fb3865
// converted property getter: - (double)nextRetriggerDelay;	// 0x32fb38d5
- (void)postEvent:(id)event;	// 0x32fb3ed1
// converted property getter: - (long)retriggerCount;	// 0x32fb38c5
- (void)retriggerCurrentEvent;	// 0x32fb3b91
- (void)retriggerCurrentEventAfterDelay:(double)delay;	// 0x32fb3aa9
- (void)retriggerCurrentEventWithDecreasingDelay;	// 0x32fb3b35
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32fb3bdd
// converted property setter: - (void)setFirstResponder:(id)responder;	// 0x32fb3875
- (void)setIgnorePlayPauseEvents:(BOOL)events;	// 0x32fb3a81
// converted property setter: - (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x32fb38a5
- (void)terminate;	// 0x32fb3cad
@end

