/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "XPCProxyTarget.h"
#import "_UITargetedProxy.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget> {
	int _lock;	// 8 = 0x8
	unsigned _suspensionCount;	// 12 = 0xc
	NSMutableArray *_queuedInvocations;	// 16 = 0x10
	id _shouldSuspendInvocationBlock;	// 20 = 0x14
}
+ (id)proxyWithTarget:(id)target;	// 0x31013651
+ (id)proxyWithTarget:(id)target shouldSuspendInvocationBlock:(id)block;	// 0x310135c5
- (void)_dispatchSuspendedMessages;	// 0x31013855
- (void)dealloc;	// 0x31013665
- (id)description;	// 0x31013a41
- (void)forwardInvocation:(id)invocation;	// 0x310136c9
- (BOOL)isBlock;	// 0x31013a11
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x31013ab5
- (void)removeAllEnqueuedInvocations;	// 0x310139cd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31013a15
- (void)resume;	// 0x3101397d
- (void)suspend;	// 0x3101381d
@end

