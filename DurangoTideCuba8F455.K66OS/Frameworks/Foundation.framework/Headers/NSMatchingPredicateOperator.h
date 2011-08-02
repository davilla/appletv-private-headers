/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
@private
	int _contextLock;	// 16 = 0x10
	XXStruct_U6EDQD *_regexContext;	// 20 = 0x14
}
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x310bbb9d
- (void)_clearContext;	// 0x310bbc0d
- (BOOL)_shouldEscapeForLike;	// 0x310bbb99
- (void)dealloc;	// 0x310bbcb1
- (void)finalize;	// 0x310bbc59
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x310bbd09
- (SEL)selector;	// 0x310bbb8d
- (id)symbol;	// 0x310bbbdd
@end

