/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"

@class SCRCStackQueue, NSString, NSThread;

@interface SCRCThread : NSObject {
	SCRCStackQueue *_queue;	// 4 = 0x4
	id _queueLock;	// 8 = 0x8
	CFRunLoopSourceRef _source;	// 12 = 0xc
	CFRunLoopRef _runLoop;	// 16 = 0x10
	id _key;	// 20 = 0x14
	BOOL _isInvalid;	// 24 = 0x18
	BOOL _isRegistered;	// 25 = 0x19
	BOOL _isTimerSet;	// 26 = 0x1a
	double _lastStartTime;	// 28 = 0x1c
	NSString *_description;	// 36 = 0x24
	BOOL _descriptionChanged;	// 40 = 0x28
	NSThread *_nsThread;	// 44 = 0x2c
}
@property(assign) BOOL isInvalid;	// G=0x30189b9d; S=0x3018a8d5; converted property
@property(readonly, assign) double lastStartTime;	// G=0x3018aac5; converted property
+ (double)_performSelector:(SEL)selector withThreadKey:(id)threadKey onTarget:(id)target waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x301892f5
+ (int)activeThreadCount;	// 0x3018f491
+ (id)activity;	// 0x3018edb5
+ (void)initialize;	// 0x30189109
+ (void)invalidateForKey:(id)key;	// 0x3018a81d
+ (double)lastStartTimeForKey:(id)key;	// 0x3018aa45
+ (void)postStopNotification;	// 0x3018b7f9
- (id)init;	// 0x3018f229
- (void)_enqueueTask:(id)task cancelMask:(unsigned long)mask lastStartTime:(double *)time;	// 0x3018a07d
- (id)_initWithKey:(id)key task:(id)task;	// 0x30189761
- (double)_performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x3018f151
- (void)_processQueue;	// 0x30189bf9
- (void)_processQueueFromTimer;	// 0x3018b235
- (void)_runThread:(id)thread;	// 0x30189875
- (void)_setKey:(id)key;	// 0x3018a019
- (void)_setName:(id)name;	// 0x3018f1d9
- (void)dealloc;	// 0x3018a96d
// converted property getter: - (BOOL)isInvalid;	// 0x30189b9d
// converted property getter: - (double)lastStartTime;	// 0x3018aac5
- (double)performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x3018f3cd
- (double)performSelector:(SEL)selector onTarget:(id)target count:(unsigned long)count objects:(id)objects;	// 0x3018f40d
// converted property setter: - (void)setIsInvalid:(BOOL)invalid;	// 0x3018a8d5
- (void)setName:(id)name;	// 0x3018f1f9
@end

