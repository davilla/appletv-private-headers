/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"


__attribute__((visibility("hidden")))
@interface _NSUndoLightInvocation : _NSUndoObject {
@private
	SEL _selector;	// 16 = 0x10
	id _arg;	// 20 = 0x14
}
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3276cdd1
- (id)_argument;	// 0x327ebd11
- (void)dealloc;	// 0x3276e395
- (id)description;	// 0x327ed111
- (void)invoke;	// 0x327ebef9
@end

