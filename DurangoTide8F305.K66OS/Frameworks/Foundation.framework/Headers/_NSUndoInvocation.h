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
- (id)initWithTarget:(id)target invocation:(id)invocation;	// 0x327ebea9
- (void)dealloc;	// 0x327ec2dd
- (id)description;	// 0x327ed1ad
- (void)invoke;	// 0x327ebe79
@end

