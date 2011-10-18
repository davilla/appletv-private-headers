/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate {
}
+ (BOOL)functionIsAcceptableAsAggregate:(id)aggregate;	// 0x33183fa9
- (id)_generateArgumentStringForCollection:(id)collection inContext:(id)context;	// 0x33182b3d
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)symbol forExpression:(id)expression inContext:(id)context;	// 0x3318120d
- (id)_generateDistinctStringInContext:(id)context;	// 0x33182455
- (id)_generateMathStringWithSymbol:(id)symbol inContext:(id)context;	// 0x33180991
- (id)_generateSQLForCountInContext:(id)context;	// 0x3318354d
- (id)_generateSelectForAggregateStringWithSymbol:(id)symbol argument:(id)argument inContext:(id)context;	// 0x33182d41
- (id)_generateType4SQLForSymbol:(id)symbol inContext:(id)context;	// 0x33184129
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)symbol forAttribute:(id)attribute inContext:(id)context;	// 0x33180ca9
- (id)generateSQLStringInContext:(id)context;	// 0x33182711
- (id)generateType1SQLString:(id)string inContext:(id)context;	// 0x33181ae1
- (id)generateType2SQLString:(id)string inContext:(id)context;	// 0x33181e21
- (id)generateType3SQLString:(id)string keypathOnly:(BOOL)only inContext:(id)context;	// 0x3318213d
- (BOOL)isFunctionScoped;	// 0x3318098d
@end

