/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, CHDFormula, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendlineLabel : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	CHDFormula *mName;	// 8 = 0x8
	unsigned mLastCachedNameStringIndex;	// 12 = 0xc
	unsigned mContentFormatId;	// 16 = 0x10
	bool mGeneratedText;	// 20 = 0x14
	bool mAutomaticLabelDeleted;	// 21 = 0x15
	OADGraphicProperties *mGraphicProperties;	// 24 = 0x18
}
@property(assign, getter=isAutomaticLabelDeleted) bool automaticLabelDeleted;	// G=0x345c447d; S=0x34566fc9; converted property
@property(retain) id contentFormat;	// G=0x345c4559; S=0x345c44cd; converted property
@property(assign) unsigned contentFormatId;	// G=0x345c44bd; S=0x34566fa9; converted property
@property(assign, getter=isGeneratedText) bool generatedText;	// G=0x345c446d; S=0x34566fb9; converted property
@property(retain) id graphicProperties;	// G=0x345c448d; S=0x34567019; converted property
@property(retain) id lastCachedName;	// G=0x345c4595; S=0x34566fd9; converted property
@property(assign) unsigned stringIndex;	// G=0x345c449d; S=0x345c44ad; converted property
+ (id)trendlineLabelWithResources:(id)resources;	// 0x34562e75
- (id)initWithResources:(id)resources;	// 0x34562eb9
// converted property getter: - (id)contentFormat;	// 0x345c4559
// converted property getter: - (unsigned)contentFormatId;	// 0x345c44bd
- (void)dealloc;	// 0x345631ed
// converted property getter: - (id)graphicProperties;	// 0x345c448d
// converted property getter: - (bool)isAutomaticLabelDeleted;	// 0x345c447d
// converted property getter: - (bool)isGeneratedText;	// 0x345c446d
// converted property getter: - (id)lastCachedName;	// 0x345c4595
- (id)name;	// 0x345c445d
// converted property setter: - (void)setAutomaticLabelDeleted:(bool)deleted;	// 0x34566fc9
// converted property setter: - (void)setContentFormat:(id)format;	// 0x345c44cd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x34566fa9
// converted property setter: - (void)setGeneratedText:(bool)text;	// 0x34566fb9
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x34567019
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x34566fd9
- (void)setName:(id)name chart:(id)chart;	// 0x34566f21
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x345c44ad
// converted property getter: - (unsigned)stringIndex;	// 0x345c449d
@end

