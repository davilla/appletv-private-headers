/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x31dcc851
+ (id)allocWithZone:(NSZone *)zone;	// 0x31d0cd2d
- (id)initWithCoder:(id)coder;	// 0x31d0e929
- (unsigned long)_cfTypeID;	// 0x31df0131
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x31df0135
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31dcc8a9
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x31dccd75
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x31dcc9fd
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x31d128e5
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x31dcc8dd
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31dcc885
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x31d11061
- (Class)classForCoder;	// 0x31dcd095
- (id)copyWithZone:(NSZone *)zone;	// 0x31d12a61
- (id)description;	// 0x31dccc6d
- (void)encodeWithCoder:(id)coder;	// 0x31dcd0b1
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x31dccf71
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x31dcce69
- (unsigned)hash;	// 0x31dccaad
- (BOOL)isEqual:(id)equal;	// 0x31dccad5
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x31dccb31
- (unsigned)length;	// 0x31dcca85
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31dccc35
- (id)string;	// 0x31dcc861
@end

