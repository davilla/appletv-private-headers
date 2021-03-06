/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class XPCProxy, NSMutableArray, Protocol;

__attribute__((visibility("hidden")))
@interface SKInvocationQueueProxy : NSObject {
	NSMutableArray *_invocationQueue;	// 4 = 0x4
	XPCProxy *_invocationTarget;	// 8 = 0x8
	Protocol *_protocol;	// 12 = 0xc
}
@property(retain, nonatomic) XPCProxy *invocationTarget;	// G=0x313c56dd; S=0x313c548d; @synthesize=_invocationTarget
- (id)initWithProtocol:(id)protocol;	// 0x313c53e9
- (void)dealloc;	// 0x313c5429
- (void)forwardInvocation:(id)invocation;	// 0x313c55d5
// declared property getter: - (id)invocationTarget;	// 0x313c56dd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x313c566d
// declared property setter: - (void)setInvocationTarget:(id)target;	// 0x313c548d
@end

