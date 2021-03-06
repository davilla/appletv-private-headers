/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "NSCharacterSet.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x3245e5b1
+ (id)capitalizedLetterCharacterSet;	// 0x3245e4c1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x3245e40d
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3245f969
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x3245e3d1
+ (id)characterSetWithRange:(NSRange)range;	// 0x3245f931
+ (id)controlCharacterSet;	// 0x3245e791
+ (id)decimalDigitCharacterSet;	// 0x3245e6dd
+ (id)decomposableCharacterSet;	// 0x3245e575
+ (id)illegalCharacterSet;	// 0x3245e539
+ (id)letterCharacterSet;	// 0x3245e6a1
+ (id)lowercaseLetterCharacterSet;	// 0x3245e665
+ (id)newlineCharacterSet;	// 0x3245e449
+ (id)nonBaseCharacterSet;	// 0x3245e5ed
+ (id)punctuationCharacterSet;	// 0x3245e4fd
+ (id)symbolCharacterSet;	// 0x3245e485
+ (id)uppercaseLetterCharacterSet;	// 0x3245e629
+ (id)whitespaceAndNewlineCharacterSet;	// 0x3245e719
+ (id)whitespaceCharacterSet;	// 0x3245e755
- (id)init;	// 0x3245f995
- (id)initWithCoder:(id)coder;	// 0x3245f105
- (void)addCharactersInRange:(NSRange)range;	// 0x3245ec61
- (void)addCharactersInString:(id)string;	// 0x3245ebd9
- (id)copyWithZone:(NSZone *)zone;	// 0x3245e7cd
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x3245eb0d
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x3245eb51
- (void)invert;	// 0x3245eac9
- (BOOL)isMutable;	// 0x3245e219
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3245eca5
- (void)removeCharactersInRange:(NSRange)range;	// 0x3245ec1d
- (void)removeCharactersInString:(id)string;	// 0x3245eb95
@end

