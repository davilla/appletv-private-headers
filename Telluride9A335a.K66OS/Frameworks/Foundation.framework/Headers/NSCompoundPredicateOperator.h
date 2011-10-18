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
+ (id)andPredicateOperator;	// 0x3203cebd
+ (id)notPredicateOperator;	// 0x320de645
+ (id)orPredicateOperator;	// 0x3203e8ed
- (id)initWithCoder:(id)coder;	// 0x320de70d
- (id)copyWithZone:(NSZone *)zone;	// 0x320de78d
- (void)encodeWithCoder:(id)coder;	// 0x320de68d
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x320de831
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x3203e935
- (id)predicateFormat;	// 0x320de79d
- (id)symbol;	// 0x320de7ad
@end

