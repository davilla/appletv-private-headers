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
@property(readonly, assign) CGFontRef cgFont;	// G=0x349f75bd; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x349f66e5; converted property
@property(readonly, retain) NSString *fontName;	// G=0x349f66f5; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x349f769d
- (float)ascent;	// 0x349f6771
- (float)avgWidth;	// 0x349f67fd
- (float)capHeight;	// 0x349f67ad
// converted property getter: - (CGFontRef)cgFont;	// 0x349f75bd
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x349f66e5
- (void)dealloc;	// 0x349f75f1
- (float)descent;	// 0x349f6785
- (void)dispose;	// 0x349f764d
- (void)finalize;	// 0x349f7339
- (unsigned)flags;	// 0x349f6729
- (CGRect)fontBBox;	// 0x349f673d
// converted property getter: - (id)fontName;	// 0x349f66f5
- (float)fontStretch;	// 0x349f6705
- (float)fontWeight;	// 0x349f6715
- (void)getFontName;	// 0x349f6bc5
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x349f7409
- (BOOL)isSameFontAs:(id)as;	// 0x349f6875
- (float)italicAngle;	// 0x349f675d
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x349f7529
- (float)leading;	// 0x349f6799
- (void)loadEmbeddedFontInfo;	// 0x349f6e2d
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x349f6ce5
- (id)matchingFontName;	// 0x349f68ad
- (float)maxWidth;	// 0x349f6811
- (float)missingWidth;	// 0x349f6825
- (float)spaceWidth;	// 0x349f6839
- (float)stemH;	// 0x349f67e9
- (float)stemV;	// 0x349f67d5
- (float)underlinePosition;	// 0x349f684d
- (float)underlineThickness;	// 0x349f6861
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x349f7379
- (float)xHeight;	// 0x349f67c1
@end
