/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSCoder : NSObject {
}
@property(assign) NSZone *objectZone;	// G=0x302b25cd; S=0x302b25c9; converted property
- (BOOL)allowsKeyedCoding;	// 0x30273399
- (BOOL)containsValueForKey:(id)key;	// 0x302b2485
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x302b2221
- (BOOL)decodeBoolForKey:(id)key;	// 0x302b24a9
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x302b25a5
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x302b2289
- (id)decodeDataObject;	// 0x302b1fed
- (double)decodeDoubleForKey:(id)key;	// 0x302b2571
- (float)decodeFloatForKey:(id)key;	// 0x302b254d
- (int)decodeInt32ForKey:(id)key;	// 0x302b24f1
- (long long)decodeInt64ForKey:(id)key;	// 0x302b2515
- (int)decodeIntForKey:(id)key;	// 0x302b24cd
- (int)decodeIntegerForKey:(id)key;	// 0x302846c1
- (long)decodeLongForKey:(id)key;	// 0x302b253d
- (id)decodeObject;	// 0x302b21a1
- (id)decodeObjectForKey:(id)key;	// 0x302b2331
- (CGPoint)decodePoint;	// 0x302c1df9
- (CGPoint)decodePointForKey:(id)key;	// 0x302d81fd
- (CGRect)decodeRect;	// 0x302c1f05
- (CGRect)decodeRectForKey:(id)key;	// 0x302d827d
- (CGSize)decodeSize;	// 0x302c1e71
- (CGSize)decodeSizeForKey:(id)key;	// 0x302d823d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x302b1fc9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x302b21d9
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x302b20e9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x302b2379
- (void)encodeBycopyObject:(id)object;	// 0x302b2061
- (void)encodeByrefObject:(id)object;	// 0x302b2071
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x302b2151
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x302b2461
- (void)encodeConditionalObject:(id)object;	// 0x302b2091
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x302b2355
- (void)encodeDataObject:(id)object;	// 0x302b1fa5
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x302b243d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x302b2419
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x302b23c1
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x302b23e5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x302b239d
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x30283f71
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x302b2409
- (void)encodeObject:(id)object;	// 0x302b2035
- (void)encodeObject:(id)object forKey:(id)key;	// 0x302b230d
- (void)encodePoint:(CGPoint)point;	// 0x302c1dc9
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x302d8179
- (void)encodeRect:(CGRect)rect;	// 0x302c1eb9
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x302d81c9
- (void)encodeRootObject:(id)object;	// 0x302b2081
- (void)encodeSize:(CGSize)size;	// 0x302c1e41
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x302d81a1
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x302b1f81
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x302b20a1
// converted property getter: - (NSZone *)objectZone;	// 0x302b25cd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x302b25c9
- (unsigned)systemVersion;	// 0x302b25d1
- (int)versionForClassName:(id)className;	// 0x302b2011
@end
