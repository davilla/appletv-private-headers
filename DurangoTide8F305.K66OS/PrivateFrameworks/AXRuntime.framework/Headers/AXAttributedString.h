/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "AXRuntime-Structs.h"
#import <NSString.h> // Unknown library


@interface AXAttributedString : NSString {
	CFAttributedStringRef _string;	// 4 = 0x4
}
+ (id)axAttributedStringWithString:(id)string;	// 0x34809319
+ (id)string;	// 0x348092fd
- (id)initWithCFAttributedString:(CFAttributedStringRef)cfattributedString;	// 0x348093e5
- (id)initWithString:(id)string;	// 0x34809499
- (void)appendAXAttributedString:(id)string;	// 0x34809229
- (void)appendString:(id)string;	// 0x34809261
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x34809811
- (id)attributesAtIndex:(int)index effectiveRange:(NSRange *)range;	// 0x34809641
- (id)axAttributedStringDescription;	// 0x34809205
- (CFAttributedStringRef)cfAttributedString;	// 0x348091d9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x34809561
- (id)coalescedFontAttributes;	// 0x34809911
- (id)copyWithZone:(NSZone *)zone;	// 0x348092b9
- (void)dealloc;	// 0x3480944d
- (id)description;	// 0x348091f1
- (BOOL)hasAttribute:(id)attribute;	// 0x34809b1d
- (BOOL)isAXAttributedString;	// 0x348091e9
- (unsigned)length;	// 0x34809531
- (void)replaceString:(CFStringRef)string;	// 0x34809685
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x348096c1
- (void)setAttribute:(id)attribute forKey:(id)key withRange:(NSRange)range;	// 0x34809709
- (void)setAttributes:(id)attributes;	// 0x34809589
- (void)setAttributes:(id)attributes withRange:(NSRange)range;	// 0x348097b9
- (id)string;	// 0x34809549
- (id)substringFromIndex:(unsigned)index;	// 0x34809bd1
@end

