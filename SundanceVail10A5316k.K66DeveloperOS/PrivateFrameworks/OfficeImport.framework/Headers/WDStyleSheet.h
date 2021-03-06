/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDStyle, WDParagraphProperties, NSMutableArray, NSMutableDictionary, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDStyleSheet : NSObject {
@private
	NSMutableDictionary *mStyleDictionary;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDCharacterProperties *mDefaultCharacterProperties;	// 12 = 0xc
	WDParagraphProperties *mDefaultParagraphProperties;	// 16 = 0x10
	WDStyle *mDefaultParagraphStyle;	// 20 = 0x14
	WDStyle *mDefaultCharacterStyle;	// 24 = 0x18
	WDStyle *mDefaultTableStyle;	// 28 = 0x1c
	WDStyle *mDefaultListStyle;	// 32 = 0x20
	NSMutableArray *mStylesInOrder;	// 36 = 0x24
	NSMutableDictionary *mIdDictionaryForName;	// 40 = 0x28
}
@property(retain) id defaultCharacterStyle;	// G=0x312ba751; S=0x310e68b1; converted property
@property(retain) id defaultListStyle;	// G=0x310e8fe5; S=0x310e7669; converted property
@property(retain) id defaultParagraphStyle;	// G=0x310e3afd; S=0x310e2319; converted property
@property(retain) id defaultTableStyle;	// G=0x312ba761; S=0x310e6b19; converted property
- (id)initWithDocument:(id)document;	// 0x310d95a5
- (void)addStyle:(id)style name:(id)name;	// 0x310e6355
- (void)createDefaultStyles;	// 0x312ba409
- (id)createStyleWithId:(id)anId type:(int)type;	// 0x310e1add
- (id)createStyleWithName:(id)name type:(int)type;	// 0x312ba331
- (void)dealloc;	// 0x31109535
- (id)defaultCharacterProperties;	// 0x310e247d
// converted property getter: - (id)defaultCharacterStyle;	// 0x312ba751
// converted property getter: - (id)defaultListStyle;	// 0x310e8fe5
- (id)defaultParagraphProperties;	// 0x311a71e9
// converted property getter: - (id)defaultParagraphStyle;	// 0x310e3afd
// converted property getter: - (id)defaultTableStyle;	// 0x312ba761
- (id)document;	// 0x310d9cd9
- (void)initializeDefaultProperties;	// 0x310d968d
- (id)paragraphStyleWithStartingName:(id)startingName;	// 0x312ba26d
- (void)removeStyleWithId:(id)anId;	// 0x312ba365
// converted property setter: - (void)setDefaultCharacterStyle:(id)style;	// 0x310e68b1
// converted property setter: - (void)setDefaultListStyle:(id)style;	// 0x310e7669
// converted property setter: - (void)setDefaultParagraphStyle:(id)style;	// 0x310e2319
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x310e6b19
- (void)setName:(id)name forId:(id)anId;	// 0x310e243d
- (int)styleCount;	// 0x312ba21d
- (id)styleIdForName:(id)name;	// 0x310e63ad
- (id)styleNameToId:(id)anId;	// 0x31126fdd
- (id)styleWithId:(id)anId;	// 0x310e7ead
- (id)styleWithName:(id)name;	// 0x312ba23d
- (id)styles;	// 0x312ba1fd
@end

