/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSInvocation;

@interface BRInvocationSelectionHandler : NSObject <BRSelectionHandler> {
@private
	NSInvocation *_invocation;	// 4 = 0x4
	BOOL _useInvocationReturnValue;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x32fafb45; converted property
@property(assign) BOOL useInvocationReturnValue;	// G=0x32fafb65; S=0x32fafb55; converted property
+ (id)handlerWithInvocation:(id)invocation;	// 0x32fafcbd
+ (id)handlerWithTarget:(id)target selector:(SEL)selector;	// 0x32fafc39
- (id)initWithInvocation:(id)invocation;	// 0x32fafd49
- (void)dealloc;	// 0x32fafd01
- (BOOL)handleSelectionForControl:(id)control;	// 0x32fafb75
// converted property getter: - (id)invocation;	// 0x32fafb45
// converted property setter: - (void)setUseInvocationReturnValue:(BOOL)value;	// 0x32fafb55
// converted property getter: - (BOOL)useInvocationReturnValue;	// 0x32fafb65
@end

