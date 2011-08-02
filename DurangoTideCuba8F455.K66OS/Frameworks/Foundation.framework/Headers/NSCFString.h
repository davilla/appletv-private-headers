/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"


__attribute__((visibility("hidden")))
@interface NSCFString : NSMutableString {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31040079
- (const char *)UTF8String;	// 0x30ffb9e5
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x31040b15
- (const unsigned short *)_fastCharacterContents;	// 0x310400f9
- (BOOL)_isCString;	// 0x31040179
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x310007c5
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x310402b1
- (void)appendFormat:(id)format;	// 0x31000241
- (void)appendString:(id)string;	// 0x3100020d
- (const char *)cString;	// 0x31040b45
- (unsigned)cStringLength;	// 0x3100120d
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x3101a8e9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x30ff90e1
- (Class)classForCoder;	// 0x3101ca61
- (id)copyWithZone:(NSZone *)zone;	// 0x30ff9399
- (void)deleteCharactersInRange:(NSRange)range;	// 0x310005e5
- (unsigned)fastestEncoding;	// 0x310011fd
- (void)finalize;	// 0x31040089
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x3100625d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x310000e5
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x310402e1
- (BOOL)hasPrefix:(id)prefix;	// 0x310004fd
- (BOOL)hasSuffix:(id)suffix;	// 0x31000571
- (unsigned)hash;	// 0x31011749
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x31032e45
- (BOOL)isEqual:(id)equal;	// 0x30ff869d
- (BOOL)isEqualToString:(id)string;	// 0x30ff914d
- (unsigned)length;	// 0x30ff8c2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31000eb5
- (oneway void)release;	// 0x30ff9945
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x31025615
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x3100036d
- (id)retain;	// 0x30ff9951
- (unsigned)retainCount;	// 0x3104007d
- (void)setString:(id)string;	// 0x3100488d
- (unsigned)smallestEncoding;	// 0x31040169
- (id)substringWithRange:(NSRange)range;	// 0x30ff8f19
@end

