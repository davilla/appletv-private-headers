/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

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
@property(readonly, assign) CGFontRef cgFont;	// G=0x348515bd; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x348506e5; converted property
@property(readonly, retain) NSString *fontName;	// G=0x348506f5; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x3485169d
- (float)ascent;	// 0x34850771
- (float)avgWidth;	// 0x348507fd
- (float)capHeight;	// 0x348507ad
// converted property getter: - (CGFontRef)cgFont;	// 0x348515bd
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x348506e5
- (void)dealloc;	// 0x348515f1
- (float)descent;	// 0x34850785
- (void)dispose;	// 0x3485164d
- (void)finalize;	// 0x34851339
- (unsigned)flags;	// 0x34850729
- (CGRect)fontBBox;	// 0x3485073d
// converted property getter: - (id)fontName;	// 0x348506f5
- (float)fontStretch;	// 0x34850705
- (float)fontWeight;	// 0x34850715
- (void)getFontName;	// 0x34850bc5
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x34851409
- (BOOL)isSameFontAs:(id)as;	// 0x34850875
- (float)italicAngle;	// 0x3485075d
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x34851529
- (float)leading;	// 0x34850799
- (void)loadEmbeddedFontInfo;	// 0x34850e2d
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x34850ce5
- (id)matchingFontName;	// 0x348508ad
- (float)maxWidth;	// 0x34850811
- (float)missingWidth;	// 0x34850825
- (float)spaceWidth;	// 0x34850839
- (float)stemH;	// 0x348507e9
- (float)stemV;	// 0x348507d5
- (float)underlinePosition;	// 0x3485084d
- (float)underlineThickness;	// 0x34850861
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x34851379
- (float)xHeight;	// 0x348507c1
@end

