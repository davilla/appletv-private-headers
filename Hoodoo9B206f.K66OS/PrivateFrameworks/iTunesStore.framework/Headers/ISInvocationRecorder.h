/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library


@interface ISInvocationRecorder : NSObject {
	id _target;	// 4 = 0x4
}
- (id)initWithTarget:(id)target;	// 0x300fb2fd
- (id)adjustedTargetForSelector:(SEL)selector;	// 0x300fb391
- (void)dealloc;	// 0x300fb33d
- (void)forwardInvocation:(id)invocation;	// 0x300fb3b5
- (void)invokeInvocation:(id)invocation;	// 0x300fb3a1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x300fb411
@end

