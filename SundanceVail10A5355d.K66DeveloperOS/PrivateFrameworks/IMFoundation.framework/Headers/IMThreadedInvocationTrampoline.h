/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMInvocationTrampoline.h"

@class NSThread;

__attribute__((visibility("hidden")))
@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {
	NSThread *_thread;	// 8 = 0x8
	BOOL _immediateForMatchingThread;	// 12 = 0xc
}
- (id)initWithTarget:(id)target thread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0x32996bb1
- (void)dealloc;	// 0x32996c39
- (void)forwardInvocation:(id)invocation;	// 0x32996c85
@end
