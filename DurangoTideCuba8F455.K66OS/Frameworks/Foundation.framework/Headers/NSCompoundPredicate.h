/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
@private
	void *_reserved2;	// 8 = 0x8
	unsigned _type;	// 12 = 0xc
	NSArray *_subpredicates;	// 16 = 0x10
}
@property(readonly, retain) NSArray *subpredicates;	// G=0x31029d69; converted property
+ (id)_operatorForType:(unsigned)type;	// 0x310b32ed
+ (id)andPredicateWithSubpredicates:(id)subpredicates;	// 0x310b33d1
+ (id)notPredicateWithSubpredicate:(id)subpredicate;	// 0x310b3341
+ (id)orPredicateWithSubpredicates:(id)subpredicates;	// 0x310b3399
- (id)initWithCoder:(id)coder;	// 0x310b367d
- (id)initWithType:(unsigned)type subpredicates:(id)subpredicates;	// 0x31029c69
- (void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;	// 0x3102a221
- (id)_predicateOperator;	// 0x310b3951
- (id)_subpredicateDescription:(id)description;	// 0x310b3245
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3102a1c5
- (unsigned)compoundPredicateType;	// 0x31029d59
- (id)copyWithZone:(NSZone *)zone;	// 0x31029dc5
- (void)dealloc;	// 0x31029d79
- (void)encodeWithCoder:(id)coder;	// 0x310b374d
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x310b3985
- (unsigned)hash;	// 0x310b317d
- (BOOL)isEqual:(id)equal;	// 0x310b31a1
- (id)predicateFormat;	// 0x310b3409
- (id)predicateOperator;	// 0x310b3169
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x310b3819
// converted property getter: - (id)subpredicates;	// 0x31029d69
@end
