/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSDecimalNumberBehaviors.h"
#import <NSObject.h> // Unknown library


@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {
@private
	unsigned _scale : 16;	// 4 = 0x4
	unsigned _roundingMode : 3;	// 6 = 0x6
	unsigned _raiseOnExactness : 1;	// 6 = 0x6
	unsigned _raiseOnOverflow : 1;	// 6 = 0x6
	unsigned _raiseOnUnderflow : 1;	// 6 = 0x6
	unsigned _raiseOnDivideByZero : 1;	// 6 = 0x6
	unsigned _unused : 9;	// 6 = 0x6
	void *_reserved2;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
}
+ (id)decimalNumberHandlerWithRoundingMode:(unsigned)roundingMode scale:(short)scale raiseOnExactness:(BOOL)exactness raiseOnOverflow:(BOOL)overflow raiseOnUnderflow:(BOOL)underflow raiseOnDivideByZero:(BOOL)zero;	// 0x320b3c39
+ (id)defaultDecimalNumberHandler;	// 0x320b3b35
- (id)initWithCoder:(id)coder;	// 0x320b3e09
- (id)initWithRoundingMode:(unsigned)roundingMode scale:(short)scale raiseOnExactness:(BOOL)exactness raiseOnOverflow:(BOOL)overflow raiseOnUnderflow:(BOOL)underflow raiseOnDivideByZero:(BOOL)zero;	// 0x320b3b89
- (void)encodeWithCoder:(id)coder;	// 0x320b3cb9
- (id)exceptionDuringOperation:(SEL)operation error:(unsigned)error leftOperand:(id)operand rightOperand:(id)operand4;	// 0x320b3f29
- (unsigned)roundingMode;	// 0x320b3c95
- (short)scale;	// 0x320b3ca9
@end

