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
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x35eb4861
+ (id)allocWithZone:(NSZone *)zone;	// 0x35df4d3d
- (id)initWithCoder:(id)coder;	// 0x35df6939
- (unsigned long)_cfTypeID;	// 0x35ed8141
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x35ed8145
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35eb48b9
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x35eb4d85
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x35eb4a0d
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x35dfa8f5
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x35eb48ed
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35eb4895
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x35df9071
- (Class)classForCoder;	// 0x35eb50a5
- (id)copyWithZone:(NSZone *)zone;	// 0x35dfaa71
- (id)description;	// 0x35eb4c7d
- (void)encodeWithCoder:(id)coder;	// 0x35eb50c1
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x35eb4f81
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x35eb4e79
- (unsigned)hash;	// 0x35eb4abd
- (BOOL)isEqual:(id)equal;	// 0x35eb4ae5
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x35eb4b41
- (unsigned)length;	// 0x35eb4a95
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35eb4c45
- (id)string;	// 0x35eb4871
@end

