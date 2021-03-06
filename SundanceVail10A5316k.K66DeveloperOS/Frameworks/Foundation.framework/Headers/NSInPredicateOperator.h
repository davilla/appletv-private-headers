/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x31ac4689; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x31ac4351; converted property
- (id)initWithCoder:(id)coder;	// 0x31ac446d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x31a1d395
- (void)_setOptions:(unsigned)options;	// 0x31a1d3dd
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac4751
- (void)dealloc;	// 0x31a1eca1
- (void)encodeWithCoder:(id)coder;	// 0x31ac4411
// converted property getter: - (unsigned)flags;	// 0x31ac4689
- (BOOL)isEqual:(id)equal;	// 0x31ac4699
- (unsigned)options;	// 0x31ac4a1d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31ac47bd
// converted property getter: - (id)stringVersion;	// 0x31ac4351
- (id)symbol;	// 0x31ac44d1
@end

