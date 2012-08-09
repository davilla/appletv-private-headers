/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDColorReference, NSString;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
	EDResources *mResources;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mUnderline;	// 16 = 0x10
	int mScript;	// 20 = 0x14
	double mHeightInTwips;	// 24 = 0x18
	int mCharSet;	// 32 = 0x20
	int mFamily;	// 36 = 0x24
	unsigned mWeight;	// 40 = 0x28
	bool mBold;	// 44 = 0x2c
	bool mItalic;	// 45 = 0x2d
	bool mShadow;	// 46 = 0x2e
	bool mStrike;	// 47 = 0x2f
	bool mOutline;	// 48 = 0x30
	bool mUnderlineOverridden;	// 49 = 0x31
	bool mStrikeOverridden;	// 50 = 0x32
	bool mBoldOverridden;	// 51 = 0x33
	bool mWeightOverridden;	// 52 = 0x34
	bool mItalicOverridden;	// 53 = 0x35
	bool mHeightOverridden;	// 54 = 0x36
	bool mDoNotModify;	// 55 = 0x37
}
@property(assign, getter=isBold) bool bold;	// G=0x36fb864d; S=0x36f9200d; converted property
@property(assign) int charSet;	// G=0x37124919; S=0x36f91d81; converted property
@property(retain) id color;	// G=0x36fb86f5; S=0x3706b6f1; converted property
@property(retain) id colorReference;	// G=0x370b4111; S=0x36f91fb5; converted property
@property(assign) int family;	// G=0x37124929; S=0x36f91da9; converted property
@property(assign) double height;	// G=0x36fb882d; S=0x36f91d09; converted property
@property(assign, getter=isItalic) bool italic;	// G=0x36fb8675; S=0x36f92045; converted property
@property(retain) id name;	// G=0x36fb8419; S=0x36f91cb1; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x37124905; S=0x36f920dd; converted property
@property(assign) int script;	// G=0x371248e1; S=0x36f92111; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x371248f1; S=0x36f920b5; converted property
@property(assign, getter=isStrike) bool strike;	// G=0x36fb869d; S=0x36f9207d; converted property
@property(assign) int underline;	// G=0x36fb86c5; S=0x36f92155; converted property
@property(assign) unsigned weight;	// G=0x37124939; S=0x36f91d49; converted property
+ (id)filterFontName:(id)name;	// 0x371247bd
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x3712495d
+ (id)fontWithResources:(id)resources;	// 0x37124771
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x371248a5
- (id)initWithResources:(id)resources;	// 0x36f91b19
// converted property getter: - (int)charSet;	// 0x37124919
// converted property getter: - (id)color;	// 0x36fb86f5
// converted property getter: - (id)colorReference;	// 0x370b4111
- (id)copyWithZone:(NSZone *)zone;	// 0x3706b675
- (void)dealloc;	// 0x36fbdaad
// converted property getter: - (int)family;	// 0x37124929
- (id)filteredName;	// 0x37124815
// converted property getter: - (double)height;	// 0x36fb882d
// converted property getter: - (bool)isBold;	// 0x36fb864d
- (bool)isBoldOverridden;	// 0x36fb8639
- (BOOL)isEqual:(id)equal;	// 0x37007fa5
- (BOOL)isEqualToFont:(id)font;	// 0x37008001
- (bool)isHeightOverridden;	// 0x36fb8819
// converted property getter: - (bool)isItalic;	// 0x36fb8675
- (bool)isItalicOverridden;	// 0x36fb8661
// converted property getter: - (bool)isOutline;	// 0x37124905
// converted property getter: - (bool)isShadow;	// 0x371248f1
// converted property getter: - (bool)isStrike;	// 0x36fb869d
- (bool)isStrikeOverridden;	// 0x36fb8689
- (bool)isUnderlineOverridden;	// 0x36fb86b1
- (bool)isWeightOverridden;	// 0x37124949
- (id)lassoName;	// 0x37124841
// converted property getter: - (id)name;	// 0x36fb8419
// converted property getter: - (int)script;	// 0x371248e1
// converted property setter: - (void)setBold:(bool)bold;	// 0x36f9200d
// converted property setter: - (void)setCharSet:(int)set;	// 0x36f91d81
// converted property setter: - (void)setColor:(id)color;	// 0x3706b6f1
// converted property setter: - (void)setColorReference:(id)reference;	// 0x36f91fb5
- (void)setDoNotModify:(bool)modify;	// 0x36f9218d
// converted property setter: - (void)setFamily:(int)family;	// 0x36f91da9
// converted property setter: - (void)setHeight:(double)height;	// 0x36f91d09
// converted property setter: - (void)setItalic:(bool)italic;	// 0x36f92045
// converted property setter: - (void)setName:(id)name;	// 0x36f91cb1
// converted property setter: - (void)setOutline:(bool)outline;	// 0x36f920dd
// converted property setter: - (void)setScript:(int)script;	// 0x36f92111
// converted property setter: - (void)setShadow:(bool)shadow;	// 0x36f920b5
// converted property setter: - (void)setStrike:(bool)strike;	// 0x36f9207d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x36f92155
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0x36f91d49
// converted property getter: - (int)underline;	// 0x36fb86c5
// converted property getter: - (unsigned)weight;	// 0x37124939
@end
