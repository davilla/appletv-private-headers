/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL disposed;	// 116 = 0x74
}
@property(readonly, assign) CGFontRef cgFont;	// G=0x302abbc5; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x302aaf41; converted property
@property(readonly, retain) NSString *fontName;	// G=0x302aaf51; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x302abaf9
- (float)ascent;	// 0x302aafbd
- (float)avgWidth;	// 0x302ab02d
- (float)capHeight;	// 0x302aafed
// converted property getter: - (CGFontRef)cgFont;	// 0x302abbc5
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x302aaf41
- (void)dealloc;	// 0x302aba69
- (float)descent;	// 0x302aafcd
- (void)dispose;	// 0x302abb7d
- (void)finalize;	// 0x302ababd
- (unsigned)flags;	// 0x302aaf81
- (CGRect)fontBBox;	// 0x302aaf91
// converted property getter: - (id)fontName;	// 0x302aaf51
- (float)fontStretch;	// 0x302aaf61
- (float)fontWeight;	// 0x302aaf71
- (void)getFontName;	// 0x302ab381
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x302abc89
- (BOOL)isSameFontAs:(id)as;	// 0x302ab08d
- (float)italicAngle;	// 0x302aafad
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x302abbfd
- (float)leading;	// 0x302aafdd
- (void)loadEmbeddedFontInfo;	// 0x302ab595
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x302ab489
- (id)matchingFontName;	// 0x302ab0bd
- (float)maxWidth;	// 0x302ab03d
- (float)missingWidth;	// 0x302ab04d
- (float)spaceWidth;	// 0x302ab05d
- (float)stemH;	// 0x302ab01d
- (float)stemV;	// 0x302ab00d
- (float)underlinePosition;	// 0x302ab06d
- (float)underlineThickness;	// 0x302ab07d
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x302abd95
- (float)xHeight;	// 0x302aaffd
@end

