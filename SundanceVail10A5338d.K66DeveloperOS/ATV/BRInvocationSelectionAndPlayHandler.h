/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRInvocationSelectionHandler.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationSelectionAndPlayHandler : BRInvocationSelectionHandler {
	NSInvocation *_playInvocation;	// 12 = 0xc
}
+ (id)handlerWithSelectionInvocation:(id)selectionInvocation playInvocation:(id)invocation;	// 0x32c055
+ (id)handlerWithTarget:(id)target selectionSelector:(SEL)selector playSelector:(SEL)selector3;	// 0x32c0a5
- (id)initWithSelectionInvocation:(id)selectionInvocation playInvocation:(id)invocation;	// 0x32c189
- (void)dealloc;	// 0x32c1f9
- (BOOL)handlePlayForControl:(id)control;	// 0x32c245
@end

