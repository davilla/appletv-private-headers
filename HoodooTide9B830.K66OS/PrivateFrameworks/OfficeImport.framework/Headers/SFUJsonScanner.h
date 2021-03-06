/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface SFUJsonScanner : NSObject {
@private
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x313c4181
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x313c3f59
- (void)dealloc;	// 0x313c40f9
- (unsigned short)nextCharacter;	// 0x313c3661
- (id)parseArray;	// 0x313c3b39
- (BOOL)parseConstantString:(const char *)string;	// 0x313c3b05
- (id)parseDictionary;	// 0x313c3c41
- (id)parseFalse;	// 0x313c3a25
- (id)parseHexCharacter;	// 0x313c3fe5
- (id)parseNull;	// 0x313c3abd
- (id)parseNumber;	// 0x313c3809
- (id)parseObject;	// 0x313c3751
- (id)parseString;	// 0x313c3d85
- (id)parseTrue;	// 0x313c3a71
- (void)skipWhitespace;	// 0x313c4081
@end

