/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableData;

@interface ABVCardLexer : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	char *_bytes;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _peakedPoint;	// 16 = 0x10
	unsigned _cursor;	// 20 = 0x14
	BOOL _unicode;	// 24 = 0x18
	int _errorCount;	// 28 = 0x1c
	NSArray *_activeTokenSets;	// 32 = 0x20
}
@property(readonly, assign) unsigned cursor;	// G=0x34838481; converted property
@property(readonly, assign) int errorCount;	// G=0x34838491; converted property
- (id)initWithData:(id)data;	// 0x34839171
- (BOOL)advancePastEOL;	// 0x348385f5
- (BOOL)advancePastEOLSingle;	// 0x3483983d
- (BOOL)advancePastEOLUnicode;	// 0x348393b5
- (BOOL)advanceToEOL;	// 0x34838625
- (BOOL)advanceToEOLSingle;	// 0x34838569
- (BOOL)advanceToEOLUnicode;	// 0x348384f9
- (void)advanceToPeakPoint;	// 0x348384dd
- (int)advanceToSingleByteString;	// 0x348398f9
- (int)advanceToString;	// 0x3483869d
- (BOOL)advanceToToken:(int)token throughTypes:(int)types;	// 0x34838655
- (int)advanceToUnicodeString;	// 0x34839481
- (BOOL)atEOF;	// 0x348385c9
// converted property getter: - (unsigned)cursor;	// 0x34838481
- (void)dealloc;	// 0x34838df5
// converted property getter: - (int)errorCount;	// 0x34838491
- (void)finalize;	// 0x34838dc9
- (id)nextArraySeperatedByToken:(int)token stoppingAt:(int)at inEncoding:(unsigned)encoding;	// 0x348387e9
- (id)nextBase64Data;	// 0x348386c9
- (id)nextBase64Line:(BOOL *)line;	// 0x348387bd
- (id)nextEscapedCharacter;	// 0x34838a45
- (id)nextQuotedPrintableData;	// 0x34838afd
- (id)nextSingleByteBase64Line:(BOOL *)line;	// 0x348399b9
- (id)nextSingleByteStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x34839c7d
- (id)nextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x348388e1
- (int)nextTokenPeak:(BOOL)peak;	// 0x34838c19
- (int)nextTokenPeakSingle:(BOOL)single length:(int)length;	// 0x34839b1d
- (int)nextTokenPeakUnicode:(BOOL)unicode length:(int)length;	// 0x34839645
- (id)nextUnicodeBase64Line:(BOOL *)line;	// 0x3483954d
- (id)nextUnicodeStringStopTokens:(int)tokens quotedPrintable:(BOOL)printable trim:(BOOL)trim;	// 0x34839fe1
- (int)tokenAtCursor;	// 0x34839a9d
- (id)tokenName:(int)name;	// 0x34838cd5
- (id)tokenSetForLength:(int)length;	// 0x34838c4d
@end

