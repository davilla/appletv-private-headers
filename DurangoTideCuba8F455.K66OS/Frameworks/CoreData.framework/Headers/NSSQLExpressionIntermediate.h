/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSExpression;

__attribute__((visibility("hidden")))
@interface NSSQLExpressionIntermediate : NSSQLIntermediate {
@private
	NSExpression *_expression;	// 8 = 0x8
	BOOL _allowToMany;	// 12 = 0xc
}
- (id)initWithExpression:(id)expression allowToMany:(BOOL)many inScope:(id)scope;	// 0x33e2b26d
@end

