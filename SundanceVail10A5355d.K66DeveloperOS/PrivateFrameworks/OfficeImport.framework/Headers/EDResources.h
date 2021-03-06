/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDContentFormatsCollection, EDStylesCollection, EDCollection, EDLinksCollection, EDFontsCollection, EDColorsCollection, EDTableStylesCollection;

@interface EDResources : NSObject {
	EDCollection *mStrings;	// 4 = 0x4
	EDContentFormatsCollection *mContentFormats;	// 8 = 0x8
	EDFontsCollection *mFonts;	// 12 = 0xc
	EDCollection *mAlignmentInfos;	// 16 = 0x10
	EDStylesCollection *mStyles;	// 20 = 0x14
	EDColorsCollection *mColors;	// 24 = 0x18
	EDColorsCollection *mThemes;	// 28 = 0x1c
	EDCollection *mNames;	// 32 = 0x20
	EDLinksCollection *mLinks;	// 36 = 0x24
	EDCollection *mBorders;	// 40 = 0x28
	EDCollection *mBorder;	// 44 = 0x2c
	EDCollection *mFills;	// 48 = 0x30
	EDCollection *mDifferentialStyles;	// 52 = 0x34
	EDTableStylesCollection *mTableStyles;	// 56 = 0x38
}
@property(retain) id colors;	// G=0x31c43b2d; S=0x31c1e161; converted property
@property(retain) id themes;	// G=0x31c8b909; S=0x31d1c131; converted property
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x31c14c05
- (id)alignmentInfos;	// 0x31c1c175
- (id)border;	// 0x31c1c699
- (id)borders;	// 0x31c1c9b5
// converted property getter: - (id)colors;	// 0x31c43b2d
- (id)contentFormats;	// 0x31c19579
- (void)dealloc;	// 0x31c44911
- (id)differentialStyles;	// 0x31c8e071
- (id)fills;	// 0x31c1cc6d
- (id)fonts;	// 0x31c181cd
- (id)links;	// 0x31c20e29
- (id)names;	// 0x31c211ed
// converted property setter: - (void)setColors:(id)colors;	// 0x31c1e161
// converted property setter: - (void)setThemes:(id)themes;	// 0x31d1c131
- (id)strings;	// 0x31c23e0d
- (id)styles;	// 0x31c1aed1
- (id)tableStyles;	// 0x31c8e1e1
// converted property getter: - (id)themes;	// 0x31c8b909
@end

