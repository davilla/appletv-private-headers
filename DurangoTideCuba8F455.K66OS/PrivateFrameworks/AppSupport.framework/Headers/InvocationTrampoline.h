/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface InvocationTrampoline : NSObject {
	id _target;	// 4 = 0x4
}
@property(retain) id target;	// G=0x322ab131; S=0x322ab149; @synthesize=_target
- (void)dealloc;	// 0x322ab0e5
- (void)forwardInvocation:(id)invocation;	// 0x322aad4d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x322ab08d
- (void)performInvocation:(id)invocation;	// 0x322aad79
- (BOOL)respondsToSelector:(SEL)selector;	// 0x322ab031
// declared property setter: - (void)setTarget:(id)target;	// 0x322ab149
// declared property getter: - (id)target;	// 0x322ab131
@end

