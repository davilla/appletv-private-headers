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
@property(readonly, retain) NSString *variable;	// G=0x34e13ea9; converted property
- (id)initWithCoder:(id)coder;	// 0x34e13d29
- (id)initWithObject:(id)object;	// 0x34e13c2d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34e1407d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e13de9
- (void)dealloc;	// 0x34e13be1
- (void)encodeWithCoder:(id)coder;	// 0x34e13c81
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34e13f61
- (unsigned)hash;	// 0x34e13f39
- (BOOL)isEqual:(id)equal;	// 0x34e13eb9
- (id)predicateFormat;	// 0x34e13e25
// converted property getter: - (id)variable;	// 0x34e13ea9
@end
