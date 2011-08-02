/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_FJp71A mOriginalProperties;	// 12 = 0xc
	XXStruct_FJp71A mTrackedProperties;	// 136 = 0x88
}
@property(retain) id baseStyle;	// G=0x344c8b95; S=0x3449194d; converted property
@property(assign) int bold;	// G=0x34467ddd; S=0x3447ff7d; converted property
@property(assign) int caps;	// G=0x34493f35; S=0x344806a1; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x344dcb09; S=0x344dc8f9; converted property
@property(retain) id color;	// G=0x3449424d; S=0x34480419; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x345d43a1; S=0x34488641; converted property
@property(assign) int deleted;	// G=0x34534ded; S=0x34480c15; converted property
@property(assign) int doubleStrikeThrough;	// G=0x3452e1c5; S=0x344802ad; converted property
@property(assign) int edited;	// G=0x345d45d1; S=0x34480c65; converted property
@property(assign) BOOL embeddedObject;	// G=0x345d4b35; S=0x345d4bbd; converted property
@property(assign) int embossed;	// G=0x345d3879; S=0x344800b5; converted property
@property(retain) id extendedFont;	// G=0x345d32a1; S=0x34480a01; converted property
@property(retain) id farEastFont;	// G=0x345d33b5; S=0x34480969; converted property
@property(retain) id font;	// G=0x34467381; S=0x344808d1; converted property
@property(assign) unsigned short fontSize;	// G=0x344650a1; S=0x34480831; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x345d4a21; S=0x344d5541; converted property
@property(assign) int formattingChanged;	// G=0x3450c94d; S=0x34480cb5; converted property
@property(assign) int hidden;	// G=0x3453e1f5; S=0x344806f1; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x345d3dd9; S=0x3453e761; converted property
@property(assign) int highlightColor;	// G=0x345d3ef1; S=0x34480601; converted property
@property(assign) int imprint;	// G=0x345d398d; S=0x34480101; converted property
@property(assign) int italic;	// G=0x34494001; S=0x3447ffcd; converted property
@property(assign) unsigned short kerning;	// G=0x345d3cc5; S=0x34480881; converted property
@property(assign) int languageForBiText;	// G=0x345d490d; S=0x34480bc9; converted property
@property(assign) int languageForDefaultText;	// G=0x345d44bd; S=0x34480b31; converted property
@property(assign) int languageForFarEast;	// G=0x345d47f9; S=0x34480b7d; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x344dc945; S=0x344dc8a1; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x345d4005; S=0x345d4091; converted property
@property(assign) long objectIDForOle2;	// G=0x345d4e11; S=0x345d4e95; converted property
@property(assign) long offsetToPictureData;	// G=0x345d4f71; S=0x345d4ff5; converted property
@property(assign) BOOL ole2;	// G=0x345d4ca1; S=0x345d4d29; converted property
@property(assign) int outline;	// G=0x345d3765; S=0x3448001d; converted property
@property(assign) short position;	// G=0x345d428d; S=0x34480791; converted property
@property(assign) int resolveMode;	// G=0x345d3149; S=0x3447ff15; converted property
@property(assign) int shadow;	// G=0x345d3aa1; S=0x34480069; converted property
@property(assign) int smallCaps;	// G=0x34531e45; S=0x34480651; converted property
@property(assign) short spacing;	// G=0x345d4179; S=0x34480741; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x345d46e5; S=0x34491731; converted property
@property(assign) int strikeThrough;	// G=0x3455cd41; S=0x3448025d; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x345d3651; S=0x34531b75; converted property
@property(retain) id symbolFont;	// G=0x345d34c9; S=0x34480a99; converted property
@property(assign) int underline;	// G=0x34494085; S=0x3448014d; converted property
@property(retain) id underlineColor;	// G=0x345d3bb5; S=0x344801c9; converted property
@property(assign) int verticalAlign;	// G=0x34494165; S=0x344807e1; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x345d3615
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x345d35d9
- (id)initWithDocument:(id)document;	// 0x3447fea5
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x345d5ee1
// converted property getter: - (id)baseStyle;	// 0x344c8b95
// converted property getter: - (int)bold;	// 0x34467ddd
- (id)border;	// 0x345d318d
// converted property getter: - (int)caps;	// 0x34493f35
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x344dcb09
- (void)clearBaseStyle;	// 0x344882e1
// converted property getter: - (id)color;	// 0x3449424d
- (void)copyPropertiesInto:(id)into;	// 0x345d5131
- (id)copyWithZone:(NSZone *)zone;	// 0x345d5391
- (void)dealloc;	// 0x3446cdf5
// converted property getter: - (int)deleted;	// 0x34534ded
- (id)document;	// 0x3450b679
// converted property getter: - (int)doubleStrikeThrough;	// 0x3452e1c5
// converted property getter: - (int)edited;	// 0x345d45d1
// converted property getter: - (BOOL)embeddedObject;	// 0x345d4b35
// converted property getter: - (int)embossed;	// 0x345d3879
// converted property getter: - (id)extendedFont;	// 0x345d32a1
// converted property getter: - (id)farEastFont;	// 0x345d33b5
// converted property getter: - (id)font;	// 0x34467381
- (id)fontForLanguageType:(int)languageType;	// 0x345d5581
// converted property getter: - (unsigned short)fontSize;	// 0x344650a1
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x345d4a21
// converted property getter: - (int)formattingChanged;	// 0x3450c94d
// converted property getter: - (int)hidden;	// 0x3453e1f5
// converted property getter: - (int)highlightColor;	// 0x345d3ef1
// converted property getter: - (int)imprint;	// 0x345d398d
- (BOOL)isAnythingOverridden;	// 0x345d6a6d
- (BOOL)isAnythingOverriddenIn:(XXStruct_R2fbzB *)anIn;	// 0x345d50d1
- (BOOL)isBaseStyleOverridden;	// 0x3446455d
- (BOOL)isBoldOverridden;	// 0x34464dd1
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x345d50f1
- (BOOL)isBorderOverridden;	// 0x345d3211
- (BOOL)isCapsOverridden;	// 0x34465365
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x344dca79
// converted property getter: - (BOOL)isColorAuto;	// 0x345d43a1
- (BOOL)isColorAutoOverridden;	// 0x345d442d
- (BOOL)isColorOverridden;	// 0x344653f1
- (BOOL)isDeletedOverridden;	// 0x34463e79
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x34464f81
- (BOOL)isEditedOverridden;	// 0x345d4655
- (BOOL)isEmbeddedObjectOverridden;	// 0x345d4c15
- (BOOL)isEmbossedOverridden;	// 0x345d38fd
- (BOOL)isExtendedFontOverridden;	// 0x345d3325
- (BOOL)isFarEastFontOverridden;	// 0x345d3439
- (BOOL)isFontOverridden;	// 0x344651b5
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x345d5539
- (BOOL)isFontSizeForBiTextOverridden;	// 0x345d4aa5
- (BOOL)isFontSizeOverridden;	// 0x34465011
- (BOOL)isFormattingChangedOverridden;	// 0x3450c8bd
- (BOOL)isHiddenOverridden;	// 0x344658e5
// converted property getter: - (BOOL)isHighlight;	// 0x345d3dd9
- (BOOL)isHighlightColorOverridden;	// 0x345d3f75
- (BOOL)isHighlightOverridden;	// 0x345d3e61
- (BOOL)isImprintOverridden;	// 0x345d3a11
- (BOOL)isItalicOverridden;	// 0x34464e61
- (BOOL)isKerningOverridden;	// 0x345d3d49
- (BOOL)isLanguageForBiTextOverridden;	// 0x345d4991
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x345d4541
- (BOOL)isLanguageForFarEastOverridden;	// 0x345d487d
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x344dc945
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x34489fb9
// converted property getter: - (BOOL)isLowerCase;	// 0x345d4005
- (BOOL)isLowerCaseOverridden;	// 0x345d40e9
- (BOOL)isObjectIDForOle2Overridden;	// 0x345d4ee1
- (BOOL)isOffsetToPictureDataOverridden;	// 0x345d5041
- (BOOL)isOle2Overridden;	// 0x345d4d81
- (BOOL)isOutlineOverridden;	// 0x345d37e9
- (BOOL)isPositionOverridden;	// 0x345d4311
- (BOOL)isShadingOverridden;	// 0x3446547d
- (BOOL)isShadowOverridden;	// 0x345d3b25
- (BOOL)isSmallCapsOverridden;	// 0x344652d5
- (BOOL)isSpacingOverridden;	// 0x345d41fd
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x345d46e5
- (BOOL)isSpecialCharacterOverridden;	// 0x345d476d
- (BOOL)isStrikeThroughOverridden;	// 0x34464ef1
- (BOOL)isSymbolCharacterOverridden;	// 0x345d36d5
- (BOOL)isSymbolFontOverridden;	// 0x345d354d
- (BOOL)isUnderlineColorOverridden;	// 0x345d3c39
- (BOOL)isUnderlineOverridden;	// 0x34465245
- (BOOL)isVerticalAlignOverridden;	// 0x34465125
// converted property getter: - (int)italic;	// 0x34494001
// converted property getter: - (unsigned short)kerning;	// 0x345d3cc5
// converted property getter: - (int)languageForBiText;	// 0x345d490d
// converted property getter: - (int)languageForDefaultText;	// 0x345d44bd
// converted property getter: - (int)languageForFarEast;	// 0x345d47f9
- (id)mutableBorder;	// 0x344802fd
- (id)mutableShading;	// 0x344804ad
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x3450b8c5
// converted property getter: - (long)objectIDForOle2;	// 0x345d4e11
// converted property getter: - (long)offsetToPictureData;	// 0x345d4f71
// converted property getter: - (BOOL)ole2;	// 0x345d4ca1
// converted property getter: - (int)outline;	// 0x345d3765
// converted property getter: - (short)position;	// 0x345d428d
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x345d55bd
// converted property getter: - (int)resolveMode;	// 0x345d3149
- (int)reverseBooleanProperty:(int)property;	// 0x345d5115
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x3449194d
// converted property setter: - (void)setBold:(int)bold;	// 0x3447ff7d
// converted property setter: - (void)setCaps:(int)caps;	// 0x344806a1
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x344dc8f9
// converted property setter: - (void)setColor:(id)color;	// 0x34480419
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x34488641
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x34480c15
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x344802ad
// converted property setter: - (void)setEdited:(int)edited;	// 0x34480c65
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x345d4bbd
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x344800b5
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x34480a01
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x34480969
// converted property setter: - (void)setFont:(id)font;	// 0x344808d1
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x34480831
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x344d5541
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x34480cb5
// converted property setter: - (void)setHidden:(int)hidden;	// 0x344806f1
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x3453e761
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x34480601
// converted property setter: - (void)setImprint:(int)imprint;	// 0x34480101
// converted property setter: - (void)setItalic:(int)italic;	// 0x3447ffcd
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x34480881
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x34480bc9
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x34480b31
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x34480b7d
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x344dc8a1
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x345d4091
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x345d4e95
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x345d4ff5
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x345d4d29
// converted property setter: - (void)setOutline:(int)outline;	// 0x3448001d
// converted property setter: - (void)setPosition:(short)position;	// 0x34480791
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x3447ff15
// converted property setter: - (void)setShadow:(int)shadow;	// 0x34480069
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x34480651
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x34480741
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x34491731
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x3448025d
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x34531b75
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x34480a99
// converted property setter: - (void)setUnderline:(int)underline;	// 0x3448014d
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x344801c9
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x344807e1
- (id)shading;	// 0x3454bec5
// converted property getter: - (int)shadow;	// 0x345d3aa1
// converted property getter: - (int)smallCaps;	// 0x34531e45
// converted property getter: - (short)spacing;	// 0x345d4179
// converted property getter: - (int)strikeThrough;	// 0x3455cd41
// converted property getter: - (unsigned short)symbolCharacter;	// 0x345d3651
// converted property getter: - (id)symbolFont;	// 0x345d34c9
// converted property getter: - (int)underline;	// 0x34494085
// converted property getter: - (id)underlineColor;	// 0x345d3bb5
// converted property getter: - (int)verticalAlign;	// 0x34494165
@end
