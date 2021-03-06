/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString *_variable;	// 12 = 0xc
}
@property(readonly, retain) NSString *variable;	// G=0x34719b01; converted property
- (id)initWithCoder:(id)coder;	// 0x34719981
- (id)initWithObject:(id)object;	// 0x346769f1
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34719cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x34719a41
- (void)dealloc;	// 0x3471988d
- (void)encodeWithCoder:(id)coder;	// 0x347198d9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34719bb9
- (unsigned)hash;	// 0x34719b91
- (BOOL)isEqual:(id)equal;	// 0x34719b11
- (id)predicateFormat;	// 0x34719a7d
// converted property getter: - (id)variable;	// 0x34719b01
@end

