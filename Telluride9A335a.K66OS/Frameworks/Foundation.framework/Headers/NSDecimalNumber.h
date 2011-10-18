/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
@private
	unsigned _exponent : 8;	// 4 = 0x4
	unsigned _length : 4;	// 5 = 0x5
	unsigned _isNegative : 1;	// 5 = 0x5
	unsigned _isCompact : 1;	// 5 = 0x5
	unsigned _reserved : 1;	// 5 = 0x5
	unsigned _hasExternalRefCount : 1;	// 5 = 0x5
	unsigned _refs : 16;	// 6 = 0x6
	unsigned short _mantissa[0];	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x320b28f1
+ (id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;	// 0x320b29f5
+ (id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x320b29b5
+ (id)decimalNumberWithString:(id)string;	// 0x320b2a45
+ (id)decimalNumberWithString:(id)string locale:(id)locale;	// 0x320b2a75
+ (id)defaultBehavior;	// 0x320b373d
+ (id)maximumDecimalNumber;	// 0x320b2c89
+ (id)minimumDecimalNumber;	// 0x320b2c1d
+ (id)notANumber;	// 0x320b2da5
+ (id)numberWithBool:(BOOL)aBool;	// 0x320b4c3d
+ (id)numberWithChar:(BOOL)aChar;	// 0x320b4809
+ (id)numberWithDouble:(double)aDouble;	// 0x320b4bed
+ (id)numberWithFloat:(float)aFloat;	// 0x320b4ba1
+ (id)numberWithInt:(int)int;	// 0x320b4939
+ (id)numberWithInteger:(int)integer;	// 0x320b4985
+ (id)numberWithLong:(long)aLong;	// 0x320b4a69
+ (id)numberWithLongLong:(long long)longLong;	// 0x320b4b01
+ (id)numberWithShort:(short)aShort;	// 0x320b48a1
+ (id)numberWithUnsignedChar:(unsigned char)unsignedChar;	// 0x320b4855
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x320b49d1
+ (id)numberWithUnsignedInteger:(unsigned)unsignedInteger;	// 0x320b4a1d
+ (id)numberWithUnsignedLong:(unsigned long)unsignedLong;	// 0x320b4ab5
+ (id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;	// 0x320b4b51
+ (id)numberWithUnsignedShort:(unsigned short)unsignedShort;	// 0x320b48ed
+ (id)one;	// 0x320b2d35
+ (void)setDefaultBehavior:(id)behavior;	// 0x320b36e9
+ (id)zero;	// 0x320b2cf5
- (id)initWithCoder:(id)coder;	// 0x320b2b99
- (id)initWithDecimal:(XXStruct_9isexA)decimal;	// 0x320b2ae5
- (id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x320b2aa9
- (id)initWithString:(id)string;	// 0x320b2b21
- (id)initWithString:(id)string locale:(id)locale;	// 0x320b2b5d
- (BOOL)boolValue;	// 0x320b3b11
- (BOOL)charValue;	// 0x320b3995
- (Class)classForCoder;	// 0x320b37ad
- (int)compare:(id)compare;	// 0x320b2e15
- (id)copy;	// 0x320b292d
- (id)copyWithZone:(NSZone *)zone;	// 0x320b293d
- (id)decimalNumberByAdding:(id)adding;	// 0x320b2fd9
- (id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;	// 0x320b3029
- (id)decimalNumberByDividingBy:(id)by;	// 0x320b33a5
- (id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;	// 0x320b33f5
- (id)decimalNumberByMultiplyingBy:(id)by;	// 0x320b32c9
- (id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;	// 0x320b3319
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10;	// 0x320b3555
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;	// 0x320b35a5
- (id)decimalNumberByRaisingToPower:(unsigned)power;	// 0x320b3481
- (id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;	// 0x320b34d1
- (id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;	// 0x320b3629
- (id)decimalNumberBySubstracting:(id)substracting;	// 0x320b319d
- (id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;	// 0x320b31dd
- (id)decimalNumberBySubtracting:(id)subtracting;	// 0x320b31ed
- (id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;	// 0x320b323d
- (XXStruct_9isexA)decimalValue;	// 0x320b2bf1
- (id)description;	// 0x320b2bd5
- (id)descriptionWithLocale:(id)locale;	// 0x320b2be9
- (double)doubleValue;	// 0x320b2ee5
- (void)encodeWithCoder:(id)coder;	// 0x320b37c9
- (float)floatValue;	// 0x320b3aed
- (void)getValue:(void *)value;	// 0x320b2fbd
- (int)intValue;	// 0x320b3a25
- (BOOL)isEqual:(id)equal;	// 0x320b2e91
- (long long)longLongValue;	// 0x320b3ab5
- (long)longValue;	// 0x320b3a6d
- (const char *)objCType;	// 0x320b2ed9
- (short)shortValue;	// 0x320b39dd
- (unsigned char)unsignedCharValue;	// 0x320b39b9
- (unsigned)unsignedIntValue;	// 0x320b3a49
- (unsigned long long)unsignedLongLongValue;	// 0x320b3ad1
- (unsigned long)unsignedLongValue;	// 0x320b3a91
- (unsigned short)unsignedShortValue;	// 0x320b3a01
@end

