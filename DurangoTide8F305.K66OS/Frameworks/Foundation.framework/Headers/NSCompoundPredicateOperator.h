/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+ (id)andPredicateOperator;	// 0x327f8c39
+ (id)notPredicateOperator;	// 0x327f8ba9
+ (id)orPredicateOperator;	// 0x327f8bf1
- (id)initWithCoder:(id)coder;	// 0x327f8c81
- (id)copyWithZone:(NSZone *)zone;	// 0x327f8b95
- (void)encodeWithCoder:(id)coder;	// 0x327f8cf5
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x327f8b5d
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x327f8d69
- (id)predicateFormat;	// 0x327f8b81
- (id)symbol;	// 0x327f8e9d
@end
