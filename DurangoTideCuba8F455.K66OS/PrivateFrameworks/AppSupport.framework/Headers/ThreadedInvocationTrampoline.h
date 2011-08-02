/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
	NSThread *_thread;	// 8 = 0x8
	BOOL _immediateForMatchingThread;	// 12 = 0xc
}
- (id)initWithTarget:(id)target thread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0x322aafb5
- (void)dealloc;	// 0x322aaf6d
- (void)forwardInvocation:(id)invocation;	// 0x322aac81
@end

