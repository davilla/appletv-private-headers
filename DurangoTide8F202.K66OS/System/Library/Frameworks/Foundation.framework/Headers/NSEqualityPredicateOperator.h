/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator {
@private
	BOOL _negate;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(assign, getter=isNegation) BOOL negation;	// G=0x3244229d; S=0x324d3271; converted property
@property(readonly, assign) unsigned options;	// G=0x32440fa9; converted property
- (id)initWithCoder:(id)coder;	// 0x324d3615
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;	// 0x3243e369
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;	// 0x3243e335
- (void)_setOptions:(unsigned)options;	// 0x324d3281
- (id)copyWithZone:(NSZone *)zone;	// 0x32441f7d
- (void)encodeWithCoder:(id)coder;	// 0x324d36d5
- (BOOL)isEqual:(id)equal;	// 0x324d3431
// converted property getter: - (BOOL)isNegation;	// 0x3244229d
// converted property getter: - (unsigned)options;	// 0x32440fa9
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x324d3291
- (id)predicateFormat;	// 0x324d3505
// converted property setter: - (void)setNegation:(BOOL)negation;	// 0x324d3271
@end
