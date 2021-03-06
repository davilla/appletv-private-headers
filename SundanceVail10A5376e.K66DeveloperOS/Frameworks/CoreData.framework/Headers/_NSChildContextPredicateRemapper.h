/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {
	NSManagedObjectContext *_context;	// 4 = 0x4
}
- (id)init;	// 0x35bfeb51
- (id)initWithContext:(id)context;	// 0x35bfeb7d
- (id)createPredicateForFetchFromPredicate:(id)predicate withContext:(id)context;	// 0x35bfec09
- (void)dealloc;	// 0x35bfebbd
- (id)replacementValueForValue:(id)value;	// 0x35bfec55
- (void)visitPredicate:(id)predicate;	// 0x35bfec51
- (void)visitPredicateExpression:(id)expression;	// 0x35bfefb5
@end

