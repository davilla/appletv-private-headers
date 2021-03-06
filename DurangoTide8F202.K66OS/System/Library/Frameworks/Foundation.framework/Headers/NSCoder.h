/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSCoder : NSObject {
}
@property(assign) NSZone *objectZone;	// G=0x3246004d; S=0x3245fa59; converted property
- (BOOL)allowsKeyedCoding;	// 0x3245fa55
- (BOOL)containsValueForKey:(id)key;	// 0x3245fb61
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x3245ff95
- (BOOL)decodeBoolForKey:(id)key;	// 0x3245fb3d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x3245fa65
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x3245fd99
- (id)decodeDataObject;	// 0x3245fced
- (double)decodeDoubleForKey:(id)key;	// 0x3245fa89
- (float)decodeFloatForKey:(id)key;	// 0x3245faad
- (int)decodeInt32ForKey:(id)key;	// 0x3245faf5
- (long long)decodeInt64ForKey:(id)key;	// 0x3245fad1
- (int)decodeIntForKey:(id)key;	// 0x3245fb19
- (int)decodeIntegerForKey:(id)key;	// 0x3243c23d
- (long)decodeLongForKey:(id)key;	// 0x3245fd71
- (id)decodeObject;	// 0x3245fe0d
- (id)decodeObjectForKey:(id)key;	// 0x3245fc85
- (CGPoint)decodePoint;	// 0x3246dfa5
- (CGPoint)decodePointForKey:(id)key;	// 0x32482e55
- (CGRect)decodeRect;	// 0x3246dea9
- (CGRect)decodeRectForKey:(id)key;	// 0x32482ecd
- (CGSize)decodeSize;	// 0x3246df41
- (CGSize)decodeSizeForKey:(id)key;	// 0x32482e91
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x3245fd11
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3245ff05
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x3245fff1
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3245fc45
- (void)encodeBycopyObject:(id)object;	// 0x3245fec9
- (void)encodeByrefObject:(id)object;	// 0x3245feb5
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x3245fe41
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x3245fb85
- (void)encodeConditionalObject:(id)object;	// 0x3245fe8d
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x3245fc65
- (void)encodeDataObject:(id)object;	// 0x3245fd31
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3245fba5
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3245fbc5
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3245fc05
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3245fbe5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3245fc25
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x3243bc29
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x3245fd85
- (void)encodeObject:(id)object;	// 0x3245fedd
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3245fca9
- (void)encodePoint:(CGPoint)point;	// 0x3246dfdd
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x32482dcd
- (void)encodeRect:(CGRect)rect;	// 0x3246def1
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x32482e1d
- (void)encodeRootObject:(id)object;	// 0x3245fea1
- (void)encodeSize:(CGSize)size;	// 0x3246df79
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x32482df5
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x3245fd51
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3245ff4d
// converted property getter: - (NSZone *)objectZone;	// 0x3246004d
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x3245fa59
- (unsigned)systemVersion;	// 0x3245fa5d
- (int)versionForClassName:(id)className;	// 0x3245fcc9
@end

