/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _NSUndoInvocation : _NSUndoObject {
@private
	NSInvocation *_invocation;	// 16 = 0x10
}
- (id)initWithTarget:(id)target invocation:(id)invocation;	// 0x320d2fa9
- (void)dealloc;	// 0x320d3029
- (id)description;	// 0x320d3075
- (void)invoke;	// 0x320d2ffd
@end

