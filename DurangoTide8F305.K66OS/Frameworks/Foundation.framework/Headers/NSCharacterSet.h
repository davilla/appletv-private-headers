/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)alphanumericCharacterSet;	// 0x32784ee5
+ (id)capitalizedLetterCharacterSet;	// 0x32784ec1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x327856cd
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3276c9e9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x32785661
+ (id)characterSetWithRange:(NSRange)range;	// 0x3278569d
+ (id)controlCharacterSet;	// 0x32784f15
+ (id)decimalDigitCharacterSet;	// 0x32757099
+ (id)decomposableCharacterSet;	// 0x32784ecd
+ (id)illegalCharacterSet;	// 0x32784eb5
+ (void)initialize;	// 0x32756bd1
+ (id)letterCharacterSet;	// 0x32784f09
+ (id)lowercaseLetterCharacterSet;	// 0x32784efd
+ (id)newlineCharacterSet;	// 0x327709a5
+ (id)nonBaseCharacterSet;	// 0x32784ed9
+ (id)punctuationCharacterSet;	// 0x32775fc5
+ (id)symbolCharacterSet;	// 0x32784ea9
+ (id)uppercaseLetterCharacterSet;	// 0x32784ef1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x3275e615
+ (id)whitespaceCharacterSet;	// 0x32756c1d
- (id)init;	// 0x3277773d
- (id)initWithCoder:(id)coder;	// 0x327856f1
- (unsigned long)_cfTypeID;	// 0x32784245
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x3278420d
- (id)_retainedBitmapRepresentation;	// 0x327847f5
- (id)bitmapRepresentation;	// 0x32784819
- (BOOL)characterIsMember:(unsigned short)member;	// 0x32784db5
- (id)copyWithZone:(NSZone *)zone;	// 0x32784a11
- (unsigned)count;	// 0x32784931
- (void)encodeWithCoder:(id)coder;	// 0x32784a49
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x32784d2d
- (unsigned)hash;	// 0x32784a25
- (id)invertedSet;	// 0x327849cd
- (BOOL)isEmpty;	// 0x3278497d
- (BOOL)isEqual:(id)equal;	// 0x327848b5
- (BOOL)isMutable;	// 0x32784211
- (BOOL)isSupersetOfSet:(id)set;	// 0x32784d71
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x32784919
- (void)makeImmutable;	// 0x32784215
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32784ce9
@end

