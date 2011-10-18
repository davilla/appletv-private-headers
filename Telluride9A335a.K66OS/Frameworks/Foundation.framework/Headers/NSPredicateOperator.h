/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
@private
	unsigned _operatorType;	// 4 = 0x4
	unsigned _modifier;	// 8 = 0x8
}
@property(readonly, assign) unsigned modifier;	// G=0x3203d305; converted property
@property(readonly, assign) unsigned operatorType;	// G=0x3203ca8d; converted property
+ (SEL)_getSelectorForType:(unsigned)type;	// 0x3203f9d1
+ (id)_getSymbolForType:(unsigned)type;	// 0x320dfbd1
+ (id)_newOperatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x32019d7d
+ (id)operatorWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x320dfcf5
+ (id)operatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x320dfcc1
- (id)initWithCoder:(id)coder;	// 0x3203c95d
- (id)initWithOperatorType:(unsigned)operatorType;	// 0x3203cf05
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier;	// 0x3201a0d1
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x320dfd41
- (void)_setModifier:(unsigned)modifier;	// 0x320dffc5
- (void)_setOptions:(unsigned)options;	// 0x320dff9d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x320dff75
- (id)copyWithZone:(NSZone *)zone;	// 0x320dfdf5
- (id)description;	// 0x320dfe29
- (void)encodeWithCoder:(id)coder;	// 0x320dfd51
- (unsigned)hash;	// 0x320dff11
- (BOOL)isEqual:(id)equal;	// 0x320dfe7d
// converted property getter: - (unsigned)modifier;	// 0x3203d305
// converted property getter: - (unsigned)operatorType;	// 0x3203ca8d
- (unsigned)options;	// 0x320dffc1
- (BOOL)performOperationUsingObject:(id)object andObject:(id)object2;	// 0x3203f531
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x320dff51
- (id)predicateFormat;	// 0x320dfe19
- (SEL)selector;	// 0x3203f98d
- (id)symbol;	// 0x320dfe39
@end

