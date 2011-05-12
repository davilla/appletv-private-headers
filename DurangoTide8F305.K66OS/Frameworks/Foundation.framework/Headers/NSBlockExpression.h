/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x327fd789; converted property
- (id)initWithCoder:(id)coder;	// 0x327fd8a5
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x327fd9e9
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x327fdd15
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x327fda55
// converted property getter: - (id)arguments;	// 0x327fd789
- (id)copyWithZone:(NSZone *)zone;	// 0x327fd90d
- (void)dealloc;	// 0x327fd975
- (void)encodeWithCoder:(id)coder;	// 0x327fd8d9
- (id)expressionBlock;	// 0x327fd779
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x327fdb41
- (unsigned)hash;	// 0x327fd799
- (BOOL)isEqual:(id)equal;	// 0x327fd7a9
- (id)predicateFormat;	// 0x327fd855
@end

