/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject {
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x33c1d081
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x33c1d365
- (void)dealloc;	// 0x33c1d17d
- (unsigned short)nextCharacter;	// 0x33c1d205
- (id)parseArray;	// 0x33c1d715
- (BOOL)parseConstantString:(const char *)string;	// 0x33c1d829
- (id)parseDictionary;	// 0x33c1d5bd
- (id)parseFalse;	// 0x33c1d8f1
- (id)parseHexCharacter;	// 0x33c1d2c1
- (id)parseNull;	// 0x33c1d85d
- (id)parseNumber;	// 0x33c1d93d
- (id)parseObject;	// 0x33c1db2d
- (id)parseString;	// 0x33c1d3f9
- (id)parseTrue;	// 0x33c1d8a5
- (void)skipWhitespace;	// 0x33c1d245
@end
