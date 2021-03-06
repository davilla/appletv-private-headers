/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSProxy.h> // Unknown library
#import "ActorKit-Structs.h"

@class AKDispatchQueue, Protocol;

@interface AKMailbox : NSProxy {
@private
	id _target;	// 4 = 0x4
	Protocol *_publicProtocol;	// 8 = 0x8
	Protocol *_privateProtocol;	// 12 = 0xc
	AKDispatchQueue *_dispatchQueue;	// 16 = 0x10
	qed_queue_u *_queue;	// 20 = 0x14
}
@property(retain) AKDispatchQueue *dispatchQueue;	// G=0x32f8c995; S=0x32f8c95d; converted property
@property(assign, nonatomic) id target;	// G=0x32f8c9d5; S=0x32f8c9e5; @synthesize=_target
+ (id)mailboxWithTarget:(id)target protocol:(id)protocol;	// 0x32f8c485
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x32f8c4c5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32f8c521
- (void)dealloc;	// 0x32f8c4f5
// converted property getter: - (id)dispatchQueue;	// 0x32f8c995
- (void)forwardInvocation:(id)invocation;	// 0x32f8c5a5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32f8c8e5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32f8c551
- (id)send;	// 0x32f8c959
// converted property setter: - (void)setDispatchQueue:(id)queue;	// 0x32f8c95d
- (void)setPrivateMessages:(id)messages;	// 0x32f8c9a5
// declared property setter: - (void)setTarget:(id)target;	// 0x32f8c9e5
- (BOOL)swapCurrentTarget:(id)target forNewTarget:(id)newTarget;	// 0x32f8c9b5
// declared property getter: - (id)target;	// 0x32f8c9d5
@end

