/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADCharacterProperties.h"

@class OADBulletFont, OADTextSpacing, NSMutableArray, OADBulletProperties, OADBulletSize, OADBulletColor;

@interface OADParagraphProperties : OADCharacterProperties {
	OADBulletSize *mBulletSize;	// 100 = 0x64
	OADBulletColor *mBulletColor;	// 104 = 0x68
	OADBulletFont *mBulletFont;	// 108 = 0x6c
	OADBulletProperties *mBulletProperties;	// 112 = 0x70
	OADTextSpacing *mLineSpacing;	// 116 = 0x74
	OADTextSpacing *mBeforeSpacing;	// 120 = 0x78
	OADTextSpacing *mAfterSpacing;	// 124 = 0x7c
	NSMutableArray *mTabStops;	// 128 = 0x80
	double mLeftMargin;	// 132 = 0x84
	double mRightMargin;	// 140 = 0x8c
	double mIndent;	// 148 = 0x94
	double mDefaultTab;	// 156 = 0x9c
	int mLevel;	// 164 = 0xa4
	int mBulletCharSet;	// 168 = 0xa8
	unsigned char mAlign;	// 172 = 0xac
	unsigned char mWrap;	// 173 = 0xad
	unsigned char mFontAlign;	// 174 = 0xae
	unsigned mIsRightToLeft : 1;	// 175 = 0xaf
	unsigned mIsLatinLineBreak : 1;	// 175 = 0xaf
	unsigned mIsHangingPunctuation : 1;	// 175 = 0xaf
	unsigned mHasTabStops : 1;	// 175 = 0xaf
	unsigned mHasLeftMargin : 1;	// 175 = 0xaf
	unsigned mHasRightMargin : 1;	// 175 = 0xaf
	unsigned mHasLevel : 1;	// 175 = 0xaf
	unsigned mHasIndent : 1;	// 175 = 0xaf
	unsigned mHasAlign : 1;	// 176 = 0xb0
	unsigned mHasDefaultTab : 1;	// 176 = 0xb0
	unsigned mHasIsRightToLeft : 1;	// 176 = 0xb0
	unsigned mHasWrap : 1;	// 176 = 0xb0
	unsigned mHasFontAlign : 1;	// 176 = 0xb0
	unsigned mHasIsLatinLineBreak : 1;	// 176 = 0xb0
	unsigned mHasIsHangingPunctuation : 1;	// 176 = 0xb0
	unsigned mHasBulletCharSet : 1;	// 176 = 0xb0
}
@property(retain) id afterSpacing;	// G=0x36f1adb9; S=0x36f00a61; converted property
@property(assign) int align;	// G=0x36f1afbd; S=0x36f00b45; converted property
@property(retain) id beforeSpacing;	// G=0x36f1ad51; S=0x36f00a21; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x37087b41; S=0x37032f19; 
@property(retain) id bulletColor;	// G=0x36f1b229; S=0x36f00cb9; converted property
@property(retain) id bulletFont;	// G=0x36f1b291; S=0x36f00cf9; converted property
@property(retain) id bulletProperties;	// G=0x36f1b2f9; S=0x36f00d39; converted property
@property(retain) id bulletSize;	// G=0x36f1b1c1; S=0x36f00c79; converted property
@property(assign) double defaultTab;	// G=0x36f1b029; S=0x36f00b69; converted property
@property(assign) int fontAlign;	// G=0x3714a6c9; S=0x36f00bf1; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x36f1b32d; S=0x37032efd; 
@property(assign) double indent;	// G=0x36f1af49; S=0x36f00b19; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x3714a731; S=0x36f00c55; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x3714a6fd; S=0x36f00c19; converted property
@property(assign) BOOL isRightToLeft;	// G=0x3714a65d; S=0x36f00b99; converted property
@property(assign) double leftMargin;	// G=0x36f1a525; S=0x36f00a9d; converted property
@property(assign) int level;	// G=0x36f1aedd; S=0x36f00af5; converted property
@property(retain) id lineSpacing;	// G=0x36f1ace9; S=0x36f009a1; converted property
@property(assign) double rightMargin;	// G=0x3714a621; S=0x36f00ac9; converted property
@property(assign) int wrap;	// G=0x3714a695; S=0x36f00bcd; converted property
+ (id)defaultProperties;	// 0x36f16219
- (id)init;	// 0x36f161e9
- (id)initWithDefaults;	// 0x36effa89
- (id)addTabStop;	// 0x370850c9
// converted property getter: - (id)afterSpacing;	// 0x36f1adb9
// converted property getter: - (int)align;	// 0x36f1afbd
// converted property getter: - (id)beforeSpacing;	// 0x36f1ad51
// declared property getter: - (int)bulletCharSet;	// 0x37087b41
// converted property getter: - (id)bulletColor;	// 0x36f1b229
// converted property getter: - (id)bulletFont;	// 0x36f1b291
// converted property getter: - (id)bulletProperties;	// 0x36f1b2f9
// converted property getter: - (id)bulletSize;	// 0x36f1b1c1
- (void)clearTabStops;	// 0x3714a5b1
- (void)dealloc;	// 0x36f19871
// converted property getter: - (double)defaultTab;	// 0x36f1b029
// converted property getter: - (int)fontAlign;	// 0x3714a6c9
- (BOOL)hasAfterSpacing;	// 0x36f1ad85
- (BOOL)hasAlign;	// 0x36f1af85
- (BOOL)hasBeforeSpacing;	// 0x36f1ad1d
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x36f1b32d
- (BOOL)hasBulletColor;	// 0x36f1b1f5
- (BOOL)hasBulletFont;	// 0x36f1b25d
- (BOOL)hasBulletProperties;	// 0x36f1b2c5
- (BOOL)hasBulletSize;	// 0x36f1b18d
- (BOOL)hasDefaultTab;	// 0x36f1aff1
- (BOOL)hasFontAlign;	// 0x36f1b0d9
- (BOOL)hasIndent;	// 0x36f1af11
- (BOOL)hasIsHangingPunctuation;	// 0x36f1b151
- (BOOL)hasIsLatinLineBreak;	// 0x36f1b115
- (BOOL)hasIsRightToLeft;	// 0x36f1b065
- (BOOL)hasLeftMargin;	// 0x36f1a5d5
- (BOOL)hasLevel;	// 0x36f1aea5
- (BOOL)hasLineSpacing;	// 0x36f1acb5
- (BOOL)hasRightMargin;	// 0x36f1ae01
- (BOOL)hasTabStops;	// 0x36f1aded
- (BOOL)hasWrap;	// 0x36f1b09d
- (unsigned)hash;	// 0x3714a765
// converted property getter: - (double)indent;	// 0x36f1af49
- (BOOL)isEqual:(id)equal;	// 0x3714a9b9
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x3714a731
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x3714a6fd
// converted property getter: - (BOOL)isRightToLeft;	// 0x3714a65d
// converted property getter: - (double)leftMargin;	// 0x36f1a525
// converted property getter: - (int)level;	// 0x36f1aedd
// converted property getter: - (id)lineSpacing;	// 0x36f1ace9
- (double)nonOveridenLeftMargin;	// 0x36f79689
- (void)overrideWithProperties:(id)properties;	// 0x36f1a611
- (void)removeUnnecessaryOverrides;	// 0x36f6a7f9
// converted property getter: - (double)rightMargin;	// 0x3714a621
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x36f00a61
// converted property setter: - (void)setAlign:(int)align;	// 0x36f00b45
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x36f00a21
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x37032f19
// converted property setter: - (void)setBulletColor:(id)color;	// 0x36f00cb9
// converted property setter: - (void)setBulletFont:(id)font;	// 0x36f00cf9
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x36f00d39
// converted property setter: - (void)setBulletSize:(id)size;	// 0x36f00c79
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x36f00b69
// converted property setter: - (void)setFontAlign:(int)align;	// 0x36f00bf1
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x37032efd
// converted property setter: - (void)setIndent:(double)indent;	// 0x36f00b19
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x36f00c55
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x36f00c19
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x36f00b99
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x36f00a9d
// converted property setter: - (void)setLevel:(int)level;	// 0x36f00af5
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x36f009a1
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x36f00ac9
// converted property setter: - (void)setWrap:(int)wrap;	// 0x36f00bcd
- (id)tabStopAtIndex:(unsigned)index;	// 0x3714a591
- (unsigned)tabStopCount;	// 0x3714a571
- (id)tabStops;	// 0x3708a96d
// converted property getter: - (int)wrap;	// 0x3714a695
@end
