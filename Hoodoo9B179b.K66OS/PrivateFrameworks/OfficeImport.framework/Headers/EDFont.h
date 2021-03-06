/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDColorReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
@private
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
@property(assign, getter=isBold) bool bold;	// G=0x3281fba5; S=0x328101dd; converted property
@property(assign) int charSet;	// G=0x32981d91; S=0x3280ff55; converted property
@property(retain) id color;	// G=0x3282fb45; S=0x3289bac1; converted property
@property(retain) id colorReference;	// G=0x3292e781; S=0x32810189; converted property
@property(assign) int family;	// G=0x32981da1; S=0x3280ff75; converted property
@property(assign) double height;	// G=0x3281fbb5; S=0x3280feed; converted property
@property(assign, getter=isItalic) bool italic;	// G=0x3281fb95; S=0x3281020d; converted property
@property(retain) id name;	// G=0x3281fbcd; S=0x3280fe99; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x32981d81; S=0x3281028d; converted property
@property(assign) int script;	// G=0x32981d61; S=0x328102bd; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x32981d71; S=0x3281026d; converted property
@property(assign, getter=isStrike) bool strike;	// G=0x3282faf5; S=0x3281023d; converted property
@property(assign) int underline;	// G=0x3282fb15; S=0x32810305; converted property
@property(assign) unsigned weight;	// G=0x32981db1; S=0x3280ff25; converted property
+ (id)filterFontName:(id)name;	// 0x32981e11
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x32981dd1
+ (id)fontWithResources:(id)resources;	// 0x32981e65
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x32981dd5
- (id)initWithResources:(id)resources;	// 0x3280faa9
// converted property getter: - (int)charSet;	// 0x32981d91
// converted property getter: - (id)color;	// 0x3282fb45
// converted property getter: - (id)colorReference;	// 0x3292e781
- (id)copyWithZone:(NSZone *)zone;	// 0x3289ba3d
- (void)dealloc;	// 0x32845b1d
// converted property getter: - (int)family;	// 0x32981da1
- (id)filteredName;	// 0x32981f0d
// converted property getter: - (double)height;	// 0x3281fbb5
// converted property getter: - (bool)isBold;	// 0x3281fba5
- (bool)isBoldOverridden;	// 0x3282fac5
- (BOOL)isEqual:(id)equal;	// 0x3289bcfd
- (BOOL)isEqualToFont:(id)font;	// 0x3289bd59
- (bool)isHeightOverridden;	// 0x3282fc69
// converted property getter: - (bool)isItalic;	// 0x3281fb95
- (bool)isItalicOverridden;	// 0x3282fad5
// converted property getter: - (bool)isOutline;	// 0x32981d81
// converted property getter: - (bool)isShadow;	// 0x32981d71
// converted property getter: - (bool)isStrike;	// 0x3282faf5
- (bool)isStrikeOverridden;	// 0x3282fae5
- (bool)isUnderlineOverridden;	// 0x3282fb05
- (bool)isWeightOverridden;	// 0x32981dc1
- (id)lassoName;	// 0x32981eb1
// converted property getter: - (id)name;	// 0x3281fbcd
// converted property getter: - (int)script;	// 0x32981d61
// converted property setter: - (void)setBold:(bool)bold;	// 0x328101dd
// converted property setter: - (void)setCharSet:(int)set;	// 0x3280ff55
// converted property setter: - (void)setColor:(id)color;	// 0x3289bac1
// converted property setter: - (void)setColorReference:(id)reference;	// 0x32810189
- (void)setDoNotModify:(bool)modify;	// 0x32810335
// converted property setter: - (void)setFamily:(int)family;	// 0x3280ff75
// converted property setter: - (void)setHeight:(double)height;	// 0x3280feed
// converted property setter: - (void)setItalic:(bool)italic;	// 0x3281020d
// converted property setter: - (void)setName:(id)name;	// 0x3280fe99
// converted property setter: - (void)setOutline:(bool)outline;	// 0x3281028d
// converted property setter: - (void)setScript:(int)script;	// 0x328102bd
// converted property setter: - (void)setShadow:(bool)shadow;	// 0x3281026d
// converted property setter: - (void)setStrike:(bool)strike;	// 0x3281023d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x32810305
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0x3280ff25
// converted property getter: - (int)underline;	// 0x3282fb15
// converted property getter: - (unsigned)weight;	// 0x32981db1
@end

