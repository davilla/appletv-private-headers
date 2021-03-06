/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSetExpression : NSExpression {
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x347171a1
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x34716fd9
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x347175b5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34717511
- (id)copyWithZone:(NSZone *)zone;	// 0x34717295
- (void)dealloc;	// 0x34717051
- (void)encodeWithCoder:(id)coder;	// 0x347170c9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x347176a9
- (BOOL)isEqual:(id)equal;	// 0x34717351
- (id)leftExpression;	// 0x347174f1
- (id)predicateFormat;	// 0x34717431
- (id)rightExpression;	// 0x34717501
@end

