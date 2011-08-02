/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSTimer;

@interface IMThreadedWorkUnit : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _kill;	// 8 = 0x8
	BOOL _inProgress;	// 9 = 0x9
	double _timeout;	// 12 = 0xc
	NSTimer *_timeoutTimer;	// 20 = 0x14
	BOOL _done;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x30b71b01; S=0x30b71b11; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL done;	// G=0x30b71ae1; @synthesize=_done
@property(readonly, assign, nonatomic) BOOL inProgress;	// G=0x30b71af1; @synthesize=_inProgress
@property(assign, nonatomic) double timeout;	// G=0x30b71b21; S=0x30b71b31; @synthesize=_timeout
- (id)init;	// 0x30b71e1d
- (void)_clearTimeoutTimer;	// 0x30b71da5
- (void)_doSendDone;	// 0x30b71c05
- (void)_setTimeoutTimer;	// 0x30b71ce5
- (void)_threadedDoStart;	// 0x30b71c6d
- (void)_timedOut;	// 0x30b71ad9
- (void)_timeoutHit:(id)hit;	// 0x30b71d6d
- (void)_workerThread;	// 0x30b71ad5
- (void)_workerThreadFinished;	// 0x30b71add
- (void)dealloc;	// 0x30b71de1
// declared property getter: - (id)delegate;	// 0x30b71b01
// declared property getter: - (BOOL)done;	// 0x30b71ae1
// declared property getter: - (BOOL)inProgress;	// 0x30b71af1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30b71b11
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x30b71b31
- (void)startThread;	// 0x30b71b89
- (void)stopWatchingThread;	// 0x30b71b45
// declared property getter: - (double)timeout;	// 0x30b71b21
@end

