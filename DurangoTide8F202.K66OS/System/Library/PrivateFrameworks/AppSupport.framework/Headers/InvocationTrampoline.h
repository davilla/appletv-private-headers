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
@property(retain) id target;	// G=0x32161131; S=0x32161149; @synthesize=_target
- (void)dealloc;	// 0x321610e5
- (void)forwardInvocation:(id)invocation;	// 0x32160d4d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3216108d
- (void)performInvocation:(id)invocation;	// 0x32160d79
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32161031
// declared property setter: - (void)setTarget:(id)target;	// 0x32161149
// declared property getter: - (id)target;	// 0x32161131
@end
