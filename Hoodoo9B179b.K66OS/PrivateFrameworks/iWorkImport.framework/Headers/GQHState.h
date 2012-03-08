/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQHTableState, GQHXML, GQSDocument;
@protocol GQHContext;

__attribute__((visibility("hidden")))
@interface GQHState : NSObject {
@private
	GQHXML *mHtmlDoc;	// 4 = 0x4
	CGSize mScale;	// 8 = 0x8
	CFStringRef mStyleData;	// 16 = 0x10
	GQHTableState *mTableState;	// 20 = 0x14
	GQSDocument *mProcessorState;	// 24 = 0x18
	CFDictionaryRef mStyleIndexes;	// 28 = 0x1c
	CFDictionaryRef mStyleNameMap;	// 32 = 0x20
	CFArrayRef mImplicitStyles;	// 36 = 0x24
	int mColoredBackgroundLayerCount;	// 40 = 0x28
	int mMultiColumnedDepth;	// 44 = 0x2c
	CFArrayRef mGraphicPropertiesStack;	// 48 = 0x30
	int mParagraphCount;	// 52 = 0x34
	int mParagraphIndex;	// 56 = 0x38
	int mCachedCellStyleIndex;	// 60 = 0x3c
	CFDictionaryRef mCachedTableStyles;	// 64 = 0x40
	int mCachedTextStyleIndex;	// 68 = 0x44
	CFDictionaryRef mCachedTextStyles;	// 72 = 0x48
	int mInlineStyleIndex;	// 76 = 0x4c
	CFDictionaryRef mInlineStyles;	// 80 = 0x50
	CFDictionaryRef mColorStrings;	// 84 = 0x54
	id<GQHContext> mShapeContext;	// 88 = 0x58
	int mOutlineLevel;	// 92 = 0x5c
	int mOutlineStyleType;	// 96 = 0x60
	int mShapeIDCounter;	// 100 = 0x64
	unsigned mTextScale;	// 104 = 0x68
}
@property(assign) BOOL coloredBackground;	// G=0x3599d655; S=0x3599df21; converted property
@property(assign) BOOL multiColumned;	// G=0x3599d335; S=0x3599de65; converted property
@property(assign) int outlineLevel;	// G=0x3599d3a1; S=0x3599d3b1; converted property
@property(assign) int outlineStyleType;	// G=0x3599d3b5; S=0x3599d3c5; converted property
@property(assign) int paragraphCount;	// G=0x3599d35d; S=0x3599d34d; converted property
@property(assign) int paragraphIndex;	// G=0x3599d37d; S=0x3599d36d; converted property
@property(assign) CGSize scale;	// G=0x3599d2e9; S=0x3599d2d5; converted property
@property(assign) unsigned textScale;	// G=0x3599d3c9; S=0x3599d3d9; converted property
- (id)initWithState:(id)state;	// 0x3599d545
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x3599d565
- (id)initWithState:(id)state needIndexFile:(BOOL)file documentSize:(CGSize)size;	// 0x3599d6c5
- (CFStringRef)addCacheForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x3599dc7d
- (CFStringRef)addCachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x3599db4d
- (void)addCachedStyle:(CFStringRef)style;	// 0x3599d5ad
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x3599e135
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x3599d321
- (BOOL)allowInlineWrap;	// 0x3599d401
- (CFStringRef)cachedClassStringForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula;	// 0x3599dd89
- (CFStringRef)cachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span;	// 0x3599dc41
- (CFStringRef)className:(id)name;	// 0x3599e081
// converted property getter: - (BOOL)coloredBackground;	// 0x3599d655
- (CFStringRef)createStyleName:(id)name type:(const char *)type;	// 0x3599e04d
- (CFStringRef)createUniqueShapeId:(const char *)anId;	// 0x3599d9bd
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x3599d621
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x3599d329
- (void)dealloc;	// 0x3599e199
- (BOOL)drawablesNeedCssZOrdering;	// 0x3599d325
- (void)enterGraphicObject;	// 0x3599de1d
- (BOOL)finishMainHtml;	// 0x3599d5d1
- (CFStringRef)getColorString:(id)string;	// 0x3599da29
- (id)htmlDoc;	// 0x3599d2c5
- (id)implicitStyle;	// 0x3599e009
- (int)indexForStyle:(const char *)style;	// 0x3599e2cd
- (void)invalidateTextScale;	// 0x3599d3e9
- (void)leaveGraphicObject;	// 0x3599ddcd
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x3599d589
- (CFStringRef)makeInlineStyle:(CFStringRef)style inDocument:(id)document;	// 0x3599e095
// converted property getter: - (BOOL)multiColumned;	// 0x3599d335
- (BOOL)needAbsolutelyPositionedTables;	// 0x3599d3fd
// converted property getter: - (int)outlineLevel;	// 0x3599d3a1
// converted property getter: - (int)outlineStyleType;	// 0x3599d3b5
// converted property getter: - (int)paragraphCount;	// 0x3599d35d
// converted property getter: - (int)paragraphIndex;	// 0x3599d37d
- (void)popImplicitStyle;	// 0x3599dfdd
- (id)processorState;	// 0x3599d311
- (void)pushImplicitStyle:(id)style;	// 0x3599e039
// converted property getter: - (CGSize)scale;	// 0x3599d2e9
// converted property setter: - (void)setColoredBackground:(BOOL)background;	// 0x3599df21
// converted property setter: - (void)setMultiColumned:(BOOL)columned;	// 0x3599de65
// converted property setter: - (void)setOutlineLevel:(int)level;	// 0x3599d3b1
// converted property setter: - (void)setOutlineStyleType:(int)type;	// 0x3599d3c5
// converted property setter: - (void)setParagraphCount:(int)count;	// 0x3599d34d
// converted property setter: - (void)setParagraphIndex:(int)index;	// 0x3599d36d
// converted property setter: - (void)setScale:(CGSize)scale;	// 0x3599d2d5
// converted property setter: - (void)setTextScale:(unsigned)scale;	// 0x3599d3d9
- (id)shapeContext;	// 0x3599d38d
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x3599da01
- (id)tableState;	// 0x3599d301
// converted property getter: - (unsigned)textScale;	// 0x3599d3c9
- (BOOL)useOutline;	// 0x3599d39d
@end
