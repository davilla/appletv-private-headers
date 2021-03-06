/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNode.h"

@class NSMutableArray, EDPageSetup, ESDContainer, EDWarnings, EDHeaderFooter, EDColorReference, EDString, SFUPointerKeyDictionary, EDProcessors, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode {
@private
	EDWorkbook *mWorkbook;	// 12 = 0xc
	EDString *mName;	// 16 = 0x10
	bool mHidden;	// 20 = 0x14
	bool mDisplayFormulas;	// 21 = 0x15
	bool mDisplayGridlines;	// 22 = 0x16
	bool mIsDialogSheet;	// 23 = 0x17
	EDColorReference *mDefaultGridlineColorReference;	// 24 = 0x18
	EDHeaderFooter *mHeaderFooter;	// 28 = 0x1c
	EDPageSetup *mPageSetup;	// 32 = 0x20
	NSMutableArray *mDrawables;	// 36 = 0x24
	SFUPointerKeyDictionary *mTextBoxMap;	// 40 = 0x28
	SFUPointerKeyDictionary *mCommentMap;	// 44 = 0x2c
	EDProcessors *mProcessors;	// 48 = 0x30
	EDWarnings *mWarnings;	// 52 = 0x34
	ESDContainer *mEscherDrawing;	// 56 = 0x38
}
@property(retain) id defaultGridlineColor;	// G=0x32a6f071; S=0x32a6f091; converted property
@property(retain) id defaultGridlineColorReference;	// G=0x32a6efd5; S=0x32904069; converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// G=0x32915ed5; S=0x32911b61; converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// G=0x329171b1; S=0x32911b71; converted property
@property(retain) id escherDrawing;	// G=0x32a6efc5; S=0x32a6f22d; converted property
@property(retain) id headerFooter;	// G=0x32a6ef91; S=0x32909679; converted property
@property(assign, getter=isHidden) bool hidden;	// G=0x32904c31; S=0x329040f9; converted property
@property(assign, nonatomic) bool isDialogSheet;	// G=0x32a6efb1; S=0x32908d79; @synthesize=mIsDialogSheet
@property(retain) id name;	// G=0x3291535d; S=0x329040b1; converted property
@property(retain) id pageSetup;	// G=0x329c5ee9; S=0x32909899; converted property
+ (id)sheetWithWorkbook:(id)workbook;	// 0x32a6f1e1
- (id)initWithWorkbook:(id)workbook;	// 0x32903cc1
- (void)addDrawable:(id)drawable;	// 0x3291074d
- (void)applyProcessors;	// 0x32914315
- (void)dealloc;	// 0x3292e12d
// converted property getter: - (id)defaultGridlineColor;	// 0x32a6f071
// converted property getter: - (id)defaultGridlineColorReference;	// 0x32a6efd5
- (void)doneWithNonRowContent;	// 0x32a6efe5
- (id)drawableAtIndex:(unsigned)index;	// 0x32922f75
- (unsigned)drawableCount;	// 0x329163fd
- (id)drawableEnumerator;	// 0x32a6f26d
- (id)drawables;	// 0x32a6efa1
- (id)edCommentForShape:(id)shape;	// 0x32a6f191
- (id)edTextBoxForShape:(id)shape;	// 0x32a6f141
// converted property getter: - (id)escherDrawing;	// 0x32a6efc5
// converted property getter: - (id)headerFooter;	// 0x32a6ef91
// declared property getter: - (bool)isDialogSheet;	// 0x32a6efb1
// converted property getter: - (bool)isDisplayFormulas;	// 0x32915ed5
// converted property getter: - (bool)isDisplayGridlines;	// 0x329171b1
// converted property getter: - (bool)isHidden;	// 0x32904c31
// converted property getter: - (id)name;	// 0x3291535d
// converted property getter: - (id)pageSetup;	// 0x329c5ee9
- (id)processors;	// 0x329083b9
- (void)reduceMemoryIfPossible;	// 0x32a6efc1
- (void)removeDrawableAtIndex:(unsigned)index;	// 0x32a6f11d
// converted property setter: - (void)setDefaultGridlineColor:(id)color;	// 0x32a6f091
// converted property setter: - (void)setDefaultGridlineColorReference:(id)reference;	// 0x32904069
// converted property setter: - (void)setDisplayFormulas:(bool)formulas;	// 0x32911b61
// converted property setter: - (void)setDisplayGridlines:(bool)gridlines;	// 0x32911b71
- (void)setEDComment:(id)comment forShape:(id)shape;	// 0x32a6f1b5
- (void)setEDTextBox:(id)box forShape:(id)shape;	// 0x32a6f165
// converted property setter: - (void)setEscherDrawing:(id)drawing;	// 0x32a6f22d
// converted property setter: - (void)setHeaderFooter:(id)footer;	// 0x32909679
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x329040f9
// declared property setter: - (void)setIsDialogSheet:(bool)sheet;	// 0x32908d79
// converted property setter: - (void)setName:(id)name;	// 0x329040b1
// converted property setter: - (void)setPageSetup:(id)setup;	// 0x32909899
- (void)setup;	// 0x32903ed9
- (void)teardown;	// 0x3292e5a1
- (id)warnings;	// 0x32a26de5
- (id)workbook;	// 0x329f5535
@end

