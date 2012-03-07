/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"

@class NSExpression, NSPredicateOperator;

@interface NSComparisonPredicate : NSPredicate {
@private
	void *_reserved2;	// 8 = 0x8
	NSPredicateOperator *_predicateOperator;	// 12 = 0xc
	NSExpression *_lhs;	// 16 = 0x10
	NSExpression *_rhs;	// 20 = 0x14
}
@property(retain) NSPredicateOperator *predicateOperator;	// G=0x30289a7d; S=0x3028d3fd; converted property
+ (id)predicateWithLeftExpression:(id)leftExpression rightExpression:(id)expression customSelector:(SEL)selector;	// 0x30323e15
+ (id)predicateWithLeftExpression:(id)leftExpression rightExpression:(id)expression modifier:(unsigned)modifier type:(unsigned)type options:(unsigned)options;	// 0x30289bfd
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftExpression:(id)expression rightExpression:(id)expression3;	// 0x30323f65
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightKeyPath:(id)path3;	// 0x30323f1d
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightValue:(id)value;	// 0x30323ed5
- (id)initWithCoder:(id)coder;	// 0x30289521
- (id)initWithLeftExpression:(id)leftExpression rightExpression:(id)expression customSelector:(SEL)selector;	// 0x30323e5d
- (id)initWithLeftExpression:(id)leftExpression rightExpression:(id)expression modifier:(unsigned)modifier type:(unsigned)type options:(unsigned)options;	// 0x30289c51
- (id)initWithPredicateOperator:(id)predicateOperator leftExpression:(id)expression rightExpression:(id)expression3;	// 0x30267cc1
- (id)initWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightKeyPath:(id)path3;	// 0x303240dd
- (id)initWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightValue:(id)value;	// 0x303241b1
- (void)_acceptExpressions:(id)expressions flags:(unsigned)flags;	// 0x3028a149
- (void)_acceptOperator:(id)anOperator flags:(unsigned)flags;	// 0x303244d5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3028a0a9
- (unsigned)comparisonPredicateModifier;	// 0x3028a2dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3028d04d
- (SEL)customSelector;	// 0x30324351
- (void)dealloc;	// 0x30268361
- (void)encodeWithCoder:(id)coder;	// 0x30323fe1
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x3028bb01
- (id)generateMetadataDescription;	// 0x302a5585
- (unsigned)hash;	// 0x30324461
- (BOOL)isEqual:(id)equal;	// 0x30324379
- (id)keyPathExpressionForString:(id)string;	// 0x30323fad
- (id)leftExpression;	// 0x30289a05
- (unsigned)options;	// 0x3028a64d
- (id)predicateFormat;	// 0x30324275
// converted property getter: - (id)predicateOperator;	// 0x30289a7d
- (unsigned)predicateOperatorType;	// 0x30289a55
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x30324505
- (id)rightExpression;	// 0x30289a45
// converted property setter: - (void)setPredicateOperator:(id)anOperator;	// 0x3028d3fd
@end
